/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKStyleMediaQuery : NSObject {
    NSDictionary * _featureValues;
    bool  _isNegated;
    NSString * _mediaType;
}

@property (nonatomic, readonly, retain) NSDictionary *featureValues;
@property (nonatomic, readonly) bool isNegated;
@property (nonatomic, readonly, retain) NSString *mediaType;

+ (id)mediaQueryListWithCSSMediaQuery:(id)arg1;

- (void).cxx_destruct;
- (id)featureValues;
- (id)initWithMediaType:(id)arg1 featureValues:(id)arg2 isNegated:(bool)arg3;
- (bool)isNegated;
- (id)mediaType;

@end