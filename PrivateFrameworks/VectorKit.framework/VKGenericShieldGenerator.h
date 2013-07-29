/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKGenericShieldDrawStyle, NSCache;

@interface VKGenericShieldGenerator : NSObject <GEOResourceManifestTileGroupObserver> {
    VKGenericShieldDrawStyle *_defaultStyle;
    NSCache *_defaultStylePacks;
}

+ (id)sharedGenerator;

- (id)newArtworkWithScale:(float)arg1 style:(id)arg2 size:(int)arg3 extraScale:(float)arg4 numberOfLines:(unsigned int)arg5;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)init;
- (void)dealloc;

@end