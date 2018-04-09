//
//  网易云逆向，请勿用于商业用途
//
//  Created by weiliang.sun
//
//  https://github.com/sunweiliang/NeteaseMusicCrack
//

#import "SWLTools.h"
#import <objc/runtime.h>

@implementation SWLTools


+ (void)swizzleWithOldClass:(Class)oldClass oldSelector:(SEL)oldSEL newClass:(Class)newClass newSelector:(SEL)newSEL {
    
    //    //case1: 替换实例方法
    //    Class selfClass = [self class];
    //    //case2: 替换类方法
    //    Class selfClass = object_getClass([self class]);
    
    //源方法的SEL和Method
    Method oldMethod = class_getInstanceMethod(oldClass, oldSEL);
    
    //交换方法的SEL和Method
    Method newMethod = class_getInstanceMethod(newClass, newSEL);
    
    //先尝试給源方法添加实现，这里是为了避免源方法没有实现的情况
    BOOL didAddMethod = class_addMethod(oldClass, oldSEL, method_getImplementation(newMethod), method_getTypeEncoding(newMethod));
    if (didAddMethod) {
        //添加成功：将源方法的实现替换到交换方法的实现
        class_replaceMethod(newClass, newSEL, method_getImplementation(oldMethod), method_getTypeEncoding(oldMethod));
    }else {
        //添加失败：说明源方法已经有实现，直接将两个方法的实现交换即可
        method_exchangeImplementations(oldMethod, newMethod);
    }
    
}


+(NSDictionary *)requestLocation:(NSString *)text{
    
    // 1.创建一个网络路径
    NSURL *url = [NSURL URLWithString:[NSString stringWithFormat:@"http://restapi.amap.com/v3/place/text?s=rsv3&children=&key=8325164e247e15eea68b59e89200988b&page=1&offset=10&city=110000&language=zh_cn&callback=jsonp_453297_&platform=JS&logversion=2.0&sdkversion=1.3&appname=%@&csid=2DACB8E5-936D-420B-9512-C2E373F48277&keywords=%@",[SWLTools URLEncodeToPercentEscapeString:@"http://lbs.amap.com/console/show/picker"],[SWLTools URLEncodeToPercentEscapeString:text]]];
    
    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:url];
    [request setHTTPMethod:@"GET"];
    NSURLResponse *response= nil;
    NSError *error;
    NSData *data = [NSURLConnection sendSynchronousRequest:request returningResponse:&response error:&error];
    
    if (error) {
        return nil;
    }
    NSString *resultString = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    if (david_Is_Empty(resultString)) {
        return nil;
    }else{
        resultString = [resultString substringWithRange:NSMakeRange([@"jsonp_453297_(" length], resultString.length - [@"jsonp_453297_(" length] - 1)];
    }
    
    NSDictionary *resultDic = [SWLTools dictionaryWithJsonString:resultString];
    if (resultDic == nil) {
        return nil;
    }
    return resultDic;
    
}


#pragma mark--URL编码
+ (NSString *)URLEncodeToPercentEscapeString: (NSString *) input
{
    return   CFBridgingRelease(CFURLCreateStringByAddingPercentEscapes(kCFAllocatorDefault, (CFStringRef)input, NULL, (CFStringRef)@"!*'();:@&=+$,/?%#[]", kCFStringEncodingUTF8));
}


+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString
{
    if (jsonString == nil) {
        return nil;
    }
    
    NSData *jsonData = [jsonString dataUsingEncoding:NSUTF8StringEncoding];
    NSError *err;
    NSDictionary *dic = [NSJSONSerialization JSONObjectWithData:jsonData
                                                        options:NSJSONReadingMutableContainers
                                                          error:&err];
    if(err)
    {
        NSLog(@"json解析失败：%@",err);
        return nil;
    }
    return dic;
}




@end
