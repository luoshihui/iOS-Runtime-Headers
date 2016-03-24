/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditProfileSettingDescriptionView : SKUISettingDescriptionView <UITextFieldDelegate> {
    SKUIClientContext *_clientContext;
    CALayer *_divider1;
    UIButton *_editButton;
    UITextField *_handleField;
    SKUIImageView *_imageView;
    UITextField *_nameField;
    SKUIEditProfileSettingDescription *_settingDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)_baselineFontForTextStyle:(id)arg1;
+ (struct CGSize { float x1; float x2; })preferredSizeForSettingDescription:(id)arg1 context:(id)arg2;
+ (BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(int)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingDescription:(id)arg1 width:(float)arg2 context:(id)arg3;
+ (struct CGSize { float x1; float x2; })sizeThatFitsWidth:(float)arg1 settingDescription:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_editProfilePhoto;
- (id)_textFieldWithPlaceholder:(id)arg1;
- (void)_updateHandleTextFieldValidity;
- (void)layoutSubviews;
- (void)reloadWithSettingDescription:(id)arg1 width:(float)arg2 context:(id)arg3;
- (BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end