/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateCircularSmallRingText : CLKComplicationTemplate {
    float  _fillFraction;
    int  _ringStyle;
    CLKTextProvider * _textProvider;
}

@property (nonatomic) float fillFraction;
@property (nonatomic) int ringStyle;
@property (nonatomic, copy) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (float)fillFraction;
- (BOOL)isCompatibleWithFamily:(int)arg1;
- (int)ringStyle;
- (void)setFillFraction:(float)arg1;
- (void)setRingStyle:(int)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
