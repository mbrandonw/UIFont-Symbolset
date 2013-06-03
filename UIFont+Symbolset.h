//
//  UIFont+Symbolset.m
//  UIFont+Symbolset
//
//  Created by Brandon Williams on 6/3/13.
//  Copyright (c) 2013 Opetopic. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIFont (Symbolset)

+(instancetype) ssStandardFontWithSize:(CGFloat)size;
+(NSString*) ssStandardSymbolForString:(NSString*)string;

+(instancetype) ssSocialFontWithSize:(CGFloat)size;
+(NSString*) ssSocialSymbolForString:(NSString*)string;

+(instancetype) ssSocialCircleFontWithSize:(CGFloat)size;
+(NSString*) ssSocialSymbolCircleForString:(NSString*)string;

@end
