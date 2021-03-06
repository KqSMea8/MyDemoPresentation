//
//  FVTextField.h
//  FoodVan
//
//  Created by Samuel Cheung on 2018/7/21.
//  Copyright © 2018年 30days. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FVTextFieldDelegate <UITextFieldDelegate>
@optional
- (void)textFieldDeleteBackward:(UITextField *)textField;

@end

@interface FVTextField : UITextField

@property (weak, nonatomic) id<FVTextFieldDelegate> smsDelegate;

@end
