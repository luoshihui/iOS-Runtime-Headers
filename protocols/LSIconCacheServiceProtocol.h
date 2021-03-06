/* Generated by RuntimeBrowser.
 */

@protocol LSIconCacheServiceProtocol <NSObject>

@required

- (void)copyIconBitmapCacheConfigurationWithReply:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSString *, NSString *, void*
- (void)getAlternateIconNameForIdentifier:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)getIconBitmapDataWithResourceDirectoryURL:(void *)arg1 boundContainerURL:(void *)arg2 dataContainerURL:(void *)arg3 bundleIdentifier:(void *)arg4 iconsDictionary:(void *)arg5 preferredIconName:(void *)arg6 cacheFileName:(void *)arg7 variant:(void *)arg8 options:(void *)arg9 reply:(void *)arg10; // needs 10 arg types, found 16: NSURL *, NSURL *, NSURL *, NSString *, NSDictionary *, NSString *, NSString *, int, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSData *, void*
- (void)getIconBitmapDataWithResourceDirectoryURL:(void *)arg1 bundleIdentifier:(void *)arg2 roleIdentifier:(void *)arg3 iconFiles:(void *)arg4 variant:(void *)arg5 options:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 13: NSURL *, NSString *, NSString *, NSArray *, int, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSData *, void*
- (void)invalidateItemsForBundeID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)setAlternateIconName:(void *)arg1 forIdentifier:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, NSError *, void*

@end
