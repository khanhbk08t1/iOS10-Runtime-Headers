/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@class PBMessageStreamReader, NSInputStream;

@interface BRCPackageManifestReader : NSEnumerator  {
    NSInputStream *_stream;
    PBMessageStreamReader *_reader;
}

@property Class itemClass;


- (id)initWithInputStream:(id)arg1;
- (id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;
- (id)initWithAsset:(id)arg1;
- (void)done;
- (id)nextObject;
- (void)dealloc;
- (void).cxx_destruct;
- (Class)itemClass;
- (void)setItemClass:(Class)arg1;

@end