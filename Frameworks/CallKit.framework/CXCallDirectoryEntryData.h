/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryEntryData : NSObject <NSSecureCoding>

@property (nonatomic, readonly) unsigned int count;

+ (BOOL)supportsSecureCoding;

- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)phoneNumberAtIndex:(unsigned int)arg1;

@end