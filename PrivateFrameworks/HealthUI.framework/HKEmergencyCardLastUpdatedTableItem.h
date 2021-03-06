/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKEmergencyCardLastUpdatedTableItem : HKEmergencyCardTableItem <HKIDUpdatedAndEditCellDelegate> {
    HKIDUpdatedAndEditCell * _cell;
    NSDateFormatter * _dateFormatter;
    unsigned long long  _dateType;
    <HKEmergencyCardLastUpdatedTableItemDelegate> * _delegate;
    bool  _editable;
    UILabel * _lastUpdatedLabel;
}

@property (nonatomic) unsigned long long dateType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HKEmergencyCardLastUpdatedTableItemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)dateType;
- (id)delegate;
- (bool)hasPresentableData;
- (id)initInEditMode:(bool)arg1 updatedDateType:(unsigned long long)arg2 editable:(bool)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })separatorInset;
- (void)setDateType:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)updatedAndEditCellDidTapEditButton:(id)arg1;
- (id)updatedCell;

@end
