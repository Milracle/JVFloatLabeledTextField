//
//  JVFloatLabeledTextField.h
//  JVFloatLabeledTextField
//
//  The MIT License (MIT)
//
//  Copyright (c) 2013-2015 Jared Verdi
//  Original Concept by Matt D. Smith
//  http://dribbble.com/shots/1254439--GIF-Mobile-Form-Interaction?list=users
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy of
//  this software and associated documentation files (the "Software"), to deal in
//  the Software without restriction, including without limitation the rights to
//  use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
//  the Software, and to permit persons to whom the Software is furnished to do so,
//  subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in all
//  copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
//  FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
//  COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
//  IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
//  CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <UIKit/UIKit.h>

/**
 * `JVFloatLabeledTextField` is a `UITextField` subclass that implements the "Float Label Pattern".
 *
 * Due to space constraints on mobile devices, it is common to rely solely on placeholders as a means to label fields.
 * This presents a UX problem, in that, once the user begins to fill out a form, no labels are present.
 *
 * `JVFloatLabeledTextField` aims to improve the user experience by having placeholders transition into 
 * "floating labels" that hover above the text field after it is populated with text.
 *
 * JVFloatLabeledTextField supports iOS 6+.
 *
 * Credits for the concept to Matt D. Smith (@mds), and his original design:  http://mattdsmith.com/float-label-pattern/
 */

@interface JVFloatLabeledTextField : UITextField

/**
 * Read-only access to the floating label.
 */
@property (nonatomic, strong, readonly) UILabel * floatingLabel;

/**
 * Padding to be applied to the y coordinate of the floating label upon presentation.
 * Defaults to zero.
 */
@property (nonatomic) CGFloat floatingLabelYPadding;

/**
 * Padding to be applied to the x coordinate of the floating label upon presentation.
 * Defaults to zero
 */
@property (nonatomic) CGFloat floatingLabelXPadding;

/**
 * Padding to be applied to the y coordinate of the placeholder.
 * Defaults to zero.
 */
@property (nonatomic) CGFloat placeholderYPadding;

/**
 * Font to be applied to the floating label. 
 * Defaults to the first applicable of the following:
 * - the custom specified attributed placeholder font at 70% of its size
 * - the custom specified textField font at 70% of its size
 */
@property (nonatomic, strong) UIFont * floatingLabelFont;

/**
 * Text color to be applied to the floating label.
 * Defaults to `[UIColor grayColor]`.
 */
@property (nonatomic, strong) UIColor * floatingLabelTextColor;

/**
 * Text color to be applied to the floating label while the field is a first responder.
 * Tint color is used by default if an `floatingLabelActiveTextColor` is not provided.
 */
@property (nonatomic, strong) UIColor * floatingLabelActiveTextColor;

/**
 * Text color to be applied to the placeholder label.
 * Defaults to `floatingLabelTextColor`
 */
@property (nonatomic, strong) UIColor * placeholderColor;

/**
 * Indicates whether the floating label's appearance should be animated regardless of first responder status.
 * By default, animation only occurs if the text field is a first responder.
 */
@property (nonatomic, assign) BOOL animateEvenIfNotFirstResponder;

/**
 * Duration of the animation when showing the floating label.
 * Defaults to 0.3 seconds.
 */
@property (nonatomic, assign) NSTimeInterval floatingLabelShowAnimationDuration;

/**
 * Duration of the animation when hiding the floating label.
 * Defaults to 0.3 seconds.
 */
@property (nonatomic, assign) NSTimeInterval floatingLabelHideAnimationDuration;

/**
 * Determines if Textfield has an underline. Defaults to NO.
 */
@property (nonatomic) BOOL hasUnderline UI_APPEARANCE_SELECTOR;

/**
 * Indicated whether or not to show an down arrow icon on the right side of the text field.
 * Defaults to NO.
 */

@property (nonatomic) BOOL showMultipleSelectionIcon UI_APPEARANCE_SELECTOR;

/**
 * Height to be applied to the underline. Defaults to 0.5f.
 * 0.5f makes a perfect 1 pixel line on retina displays.
 */
@property (nonatomic) CGFloat underlineHight UI_APPEARANCE_SELECTOR;

/**
 * Color to be applied to the underline. Defaults to `[UIColor lightGrayColor]`.
 */
@property (nonatomic, strong) UIColor * underlineColor UI_APPEARANCE_SELECTOR;

/**
 * Indicates whether the clearButton position is adjusted to align with the text
 * Defaults to 1.
 */
@property (nonatomic, assign) BOOL adjustsClearButtonRect;

/**
 * Indicates whether or not to drop the baseline when entering text. Setting to YES (not the default) means the standard greyed-out placeholder will be aligned with the entered text
 * Defaults to NO (standard placeholder will be above whatever text is entered)
 */
@property (nonatomic, assign) BOOL keepBaseline;

/**
 *  Sets the placeholder and the floating title
 *
 *  @param placeholder The string that to be shown in the text field when no other text is present.
 *  @param floatingTitle The string to be shown above the text field once it has been populated with text by the user.
 */
- (void)setPlaceholder:(NSString *)placeholder floatingTitle:(NSString *)floatingTitle;

- (void)setErrorImage;

@end
