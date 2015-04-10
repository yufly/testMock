//
//  Copyright (c) 2014 Pawel Dudek. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface UIView (Specs)

- (UIButton *)specsFindButtonWithTitle:(NSString *)title;
- (UITextField *)specsFindTextFieldWithPlaceholder:(NSString *)placeholder;
- (UILabel *)specsFindLabelWithText:(NSString *)text;

@end
