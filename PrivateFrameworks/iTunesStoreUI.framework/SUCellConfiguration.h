/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIView<SUCellConfigurationView>;

@interface SUCellConfiguration : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    unsigned int _isDeleteConfirmationVisible : 1;
    unsigned int _needsDisplay : 1;
    id _context;
    } _layoutSize;
    id _representedObject;
    UIView<SUCellConfigurationView> *_view;
}

@property(retain) id context;
@property BOOL isDeleteConfirmationVisible;
@property struct CGSize { float x1; float x2; } layoutSize;
@property BOOL needsDisplay;
@property(readonly) unsigned int numberOfImages;
@property(readonly) unsigned int numberOfLabels;
@property(retain) id representedObject;
@property UIView<SUCellConfigurationView> * view;

+ (id)copyDefaultContext;
+ (float)minimumRowHeight;
+ (float)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (id)context;
- (void)dealloc;
- (void)drawBackgroundWithModifiers:(unsigned int)arg1;
- (void)drawWithModifiers:(unsigned int)arg1;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForAccessoryViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForImageAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelAtIndex:(unsigned int)arg1;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)imageAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (unsigned int)indexOfLabelForPurchaseAnimation;
- (BOOL)isDeleteConfirmationVisible;
- (struct CGSize { float x1; float x2; })layoutSize;
- (BOOL)needsDisplay;
- (unsigned int)numberOfImages;
- (unsigned int)numberOfLabels;
- (void)reloadData;
- (id)representedObject;
- (void)setContext:(id)arg1;
- (void)setIsDeleteConfirmationVisible:(BOOL)arg1;
- (void)setLayoutSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setView:(id)arg1;
- (id)stringForLabelAtIndex:(unsigned int)arg1;
- (int)textAlignmentForLabelAtIndex:(unsigned int)arg1;
- (id)view;

@end
