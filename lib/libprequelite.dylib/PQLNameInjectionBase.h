/* Generated by RuntimeBrowser
   Image: /usr/lib/libprequelite.dylib
 */

@interface PQLNameInjectionBase : NSData {
    char * _bytes;
    unsigned int  _length;
}

@property (nonatomic, readonly) NSData *sql;

- (const void*)bytes;
- (void)dealloc;
- (id)initWithBytes:(const void*)arg1 length:(unsigned int)arg2;
- (id)initWithData:(id)arg1;
- (unsigned int)length;
- (id)sql;

@end
