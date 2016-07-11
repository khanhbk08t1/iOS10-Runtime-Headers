/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPAttachment : TSPObject <TSDOwningAttachment, TSKDocumentObject, TSKModel, TSPCopying> {
    TSWPStorage * _parentStorage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAnchored;
@property (nonatomic, readonly) bool isAttachedToBodyText;
@property (nonatomic, readonly) bool isDrawable;
@property (nonatomic, readonly) bool isPartitioned;
@property (nonatomic, readonly) bool isSearchable;
@property (nonatomic) TSWPStorage *parentStorage;
@property (nonatomic, readonly) Class positionerClass;
@property (nonatomic, readonly) bool specifiesEnabledKnobMask;
@property (readonly) Class superclass;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (int)attributeArrayKind;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)changesWithPageCount;
- (bool)changesWithPageNumber;
- (id)copyWithContext:(id)arg1;
- (int)elementKind;
- (unsigned long long)findCharIndex;
- (void)infoChanged;
- (id)initWithContext:(id)arg1;
- (bool)isAnchored;
- (bool)isAttachedToBodyText;
- (bool)isDrawable;
- (bool)isEqual:(id)arg1;
- (bool)isPartitioned;
- (bool)isSearchable;
- (void)migrateStyleWithDocumentRoot:(id)arg1;
- (id)objectsForStyleMigrating;
- (id)parentStorage;
- (Class)positionerClass;
- (void)setParentStorage:(id)arg1;
- (bool)specifiesEnabledKnobMask;
- (bool)supportsUUID;
- (id)topLevelAttachment;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end