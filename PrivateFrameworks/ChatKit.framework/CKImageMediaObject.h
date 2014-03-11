/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKImageData;

@interface CKImageMediaObject : CKMediaObject {
    CKImageData *_backgroundImageData;
    CKImageData *_imageData;
}

@property(readonly) CKImageData * imageData;

+ (id)UTITypes;
+ (id)fallbackFilenamePrefix;
+ (Class)imageDataClass;
+ (BOOL)isPreviewable;

- (struct CGSize { float x1; float x2; })bbSize;
- (void)dealloc;
- (id)generateThumbnail;
- (id)generateThumbnailFillToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)imageData;
- (int)mediaType;

@end