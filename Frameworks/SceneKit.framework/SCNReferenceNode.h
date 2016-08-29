/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNReferenceNode : SCNNode {
    NSURL * _catalogURL;
    bool  _loaded;
    long long  _loadingPolicy;
    NSURL * _referenceURL;
}

@property (getter=isLoaded, readonly) bool loaded;
@property (nonatomic) long long loadingPolicy;
@property (nonatomic, copy) NSURL *referenceURL;

+ (id)referenceNodeWithURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)_catalog;
- (bool)_isAReference;
- (void)_loadWithCatalog:(id)arg1;
- (id)_resolveURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isLoaded;
- (void)load;
- (long long)loadingPolicy;
- (id)referenceURL;
- (void)setLoadingPolicy:(long long)arg1;
- (void)setReferenceURL:(id)arg1;
- (void)unload;

@end