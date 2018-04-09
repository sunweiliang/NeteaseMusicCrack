//
//  网易云逆向，请勿用于商业用途
//
//  Created by weiliang.sun
//
//  https://github.com/sunweiliang/NeteaseMusicCrack
//

#import <Foundation/Foundation.h>


#define david_Is_Empty(value) ((value == (id)[NSNull null] || value == nil || ([value isKindOfClass:[NSString class]] && ([value isEqualToString:@""] ||  [value isEqualToString:@"<null>"])) || [value isKindOfClass:[NSNull class]]) ? YES : NO)


@interface SWLTools : NSObject

+ (void)swizzleWithOldClass:(Class)oldClass oldSelector:(SEL)oldSEL newClass:(Class)newClass newSelector:(SEL)newSEL;

+(NSDictionary *)requestLocation:(NSString *)text;

+ (NSString *)URLEncodeToPercentEscapeString: (NSString *) input;

@end
