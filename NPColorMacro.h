//
//  NPColorMacro.h
//  NPColorMacro
//
//  Created by NickPan on 2019/11/24.
//  Copyright © 2019 NickPan. All rights reserved.
//

#ifndef NPColorMacro_h
#define NPColorMacro_h

/** Storage relation color macro */
#ifdef __OBJC__

/** RGB */
#define RGBA(r, g, b, a) ([UIColor colorWithRed:((r) / 255.f) \
                                         green:((g) / 255.f) \
                                          blue:((b) / 255.f) \
                                         alpha:a])

#define RGB(r, g, b) (RGBA(r, g, b, 1.f))

/** Hex */
#define HexA(value, a) [UIColor colorWithRed:((float)(((value) & 0xFF0000) >> 16))/255.f \
                                       green:((float)(((value) & 0x00FF00) >> 8))/255.f \
                                        blue:((float)(value & 0x0000FF))/255.f \
                                       alpha:a]

#define Hex(value) HexA(value, 1.f)


/** System Color */
#define kBlackColor                        [UIColor blackColor]
#define kDarkGrayColor                     [UIColor darkGrayColor]
#define kLightGrayColor                    [UIColor lightGrayColor]
#define kWhiteColor                        [UIColor whiteColor]
#define kGrayColor                         [UIColor grayColor]
#define kRedColor                          [UIColor redColor]
#define kGreenColor                        [UIColor greenColor]
#define kBlueColor                         [UIColor blueColor]
#define kCyanColor                         [UIColor cyanColor]
#define kYellowColor                       [UIColor yellowColor]
#define kMagentaColor                      [UIColor magentaColor]
#define kOrangeColor                       [UIColor orangeColor]
#define kPurpleColor                       [UIColor purpleColor]
#define kClearColor                        [UIColor clearColor]
#define kGroupTableViewBackgroundColor     [UIColor groupTableViewBackgroundColor]

#endif

#endif /* NPColorMacro_h */
