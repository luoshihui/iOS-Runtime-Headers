/* Generated by RuntimeBrowser.
 */

@protocol UIKBCacheableView <NSObject>

@required

- (BOOL)cacheDeferable;
- (NSString *)cacheKey;
- (NSDictionary *)cacheKeysForRenderFlags:(NSArray *)arg1;
- (float)cachedWidth;
- (BOOL)keepNonPersistent;

@optional

- (void)drawContentsOfRenderers:(NSArray *)arg1;

@end
