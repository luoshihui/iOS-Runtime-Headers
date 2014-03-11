/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSCache;

@interface ABMemberNameViewCache : NSObject {
    NSCache *_styleProvidersCache;
}

+ (id)sharedInstance;

- (id)_cacheForStyleProvider:(id)arg1;
- (id)boldTextAttributesForStyleProvider:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)disabledBoldTextAttributesForStyleProvider:(id)arg1;
- (id)disabledRegularTextAttributesForStyleProvider:(id)arg1;
- (id)init;
- (id)memberNameBoldFontForStyleProvider:(id)arg1;
- (id)memberNamePlaceholderFontForStyleProvider:(id)arg1;
- (id)memberNameRegularFontForStyleProvider:(id)arg1;
- (id)placeholderTextAttributesForStyleProvider:(id)arg1;
- (id)regularTextAttributesForStyleProvider:(id)arg1;

@end