//
//  SignInViewController.h
//  testMock
//
//  Created by 喻飞 on 15/4/7.
//  Copyright (c) 2015年 yuf. All rights reserved.
//

#import <UIKit/UIKit.h>
@class SignInManager;
@interface SignInViewController : UIViewController
@property(nonatomic, readwrite) IBOutlet UIButton *signInButton;

@property(nonatomic, readwrite) IBOutlet UITextField *usernameTextField;
@property(nonatomic, readwrite) IBOutlet UITextField *passwordTextField;

@property(nonatomic, readwrite) IBOutlet UILabel *fillInBothFieldsLabel;

@property(nonatomic, readonly) SignInManager *signInManager;

- (instancetype)initWithSignInManager:(SignInManager *)signInManager;

- (IBAction)didTapSignInButton:(UIButton *)signInButton;
@end
