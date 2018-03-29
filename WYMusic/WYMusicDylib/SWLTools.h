//
//  SWLTools.h
//  TestZero1
//
//  Created by iOS-dev on 2017/12/20.
//  Copyright © 2017年 weiliang.sun. All rights reserved.
//

#import <Foundation/Foundation.h>


///对象是否为空
#define david_Is_Empty(value) ((value == (id)[NSNull null] || value == nil || ([value isKindOfClass:[NSString class]] && ([value isEqualToString:@""] ||  [value isEqualToString:@"<null>"])) || [value isKindOfClass:[NSNull class]]) ? YES : NO)


@interface SWLTools : NSObject

+ (void)swizzleWithOldClass:(Class)oldClass oldSelector:(SEL)oldSEL newClass:(Class)newClass newSelector:(SEL)newSEL;

+(NSDictionary *)requestLocation:(NSString *)text;

+ (NSString *)URLEncodeToPercentEscapeString: (NSString *) input;

@end
