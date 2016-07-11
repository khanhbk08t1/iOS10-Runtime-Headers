/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceAttributionViewController : MKPlaceSectionViewController <MKPlaceAttributionCellDelegate, MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    NSArray * _apps;
    MKPlaceAttributionCell * _attributionCell;
    <MKPlaceAttributionProvider> * _attributionProvider;
    NSAttributedString * _attributionString;
    MKMapItem * _mapItem;
    bool  _resizableViewsDisabled;
    NSArray * _urlStrings;
}

@property (nonatomic, copy) NSArray *apps;
@property (retain) MKPlaceAttributionCell *attributionCell;
@property (nonatomic) <MKPlaceAttributionProvider> *attributionProvider;
@property (nonatomic, copy) NSAttributedString *attributionString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) bool resizableViewsDisabled;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *urlStrings;

- (void).cxx_destruct;
- (id)apps;
- (id)attributionCell;
- (id)attributionProvider;
- (id)attributionString;
- (double)extraHeightToReserveInLayout;
- (void)infoCardThemeChanged:(id)arg1;
- (void)loadView;
- (id)mapItem;
- (void)openURL;
- (bool)resizableViewsDisabled;
- (void)setApps:(id)arg1;
- (void)setAttributionCell:(id)arg1;
- (void)setAttributionProvider:(id)arg1;
- (void)setAttributionString:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setResizableViewsDisabled:(bool)arg1;
- (void)setUrlStrings:(id)arg1;
- (id)urlStrings;

@end