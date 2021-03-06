/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class <SKUICategoryTableViewControllerDelegate>, NSArray, NSURL, SKUICategory, SKUICategoryArtworkLoader, SKUIClientContext;

@interface SKUICategoryTableViewController : UITableViewController <SKUICategoryArtworkLoaderObserver, SKUICategoryTableViewControllerDelegate> {
    SKUICategoryArtworkLoader *_artworkLoader;
    SKUICategory *_category;
    BOOL _childrenHaveArtwork;
    SKUIClientContext *_clientContext;
    NSURL *_defaultURL;
    <SKUICategoryTableViewControllerDelegate> *_delegate;
    BOOL _isRoot;
    NSArray *_metricsLocations;
    int _numberOfHiddenRows;
    NSURL *_selectedURL;
}

@property(retain) SKUICategoryArtworkLoader * artworkLoader;
@property(retain) SKUICategory * category;
@property(retain) SKUIClientContext * clientContext;
@property(retain) NSURL * defaultURL;
@property <SKUICategoryTableViewControllerDelegate> * delegate;
@property(copy) NSArray * metricsLocations;
@property int numberOfHiddenRows;
@property(getter=isRoot) BOOL root;
@property(retain) NSURL * selectedURL;

- (void).cxx_destruct;
- (id)_categoryAtIndexPath:(id)arg1;
- (void)_doneButtonAction:(id)arg1;
- (int)_metricsLocationPostionForIndexPath:(id)arg1;
- (id)_metricsLocationsToPushIndexPath:(id)arg1;
- (void)_recordClickEventForIndexPath:(id)arg1 category:(id)arg2 actionType:(id)arg3;
- (id)artworkLoader;
- (id)category;
- (void)categoryArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forCategory:(id)arg3;
- (void)categoryTableView:(id)arg1 didSelectCategory:(id)arg2;
- (id)clientContext;
- (void)dealloc;
- (id)defaultURL;
- (id)delegate;
- (BOOL)isRoot;
- (void)loadView;
- (id)metricsLocations;
- (id)metricsPageContextForCategoryTableView:(id)arg1;
- (int)numberOfHiddenRows;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)selectedURL;
- (void)setArtworkLoader:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDefaultURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMetricsLocations:(id)arg1;
- (void)setNumberOfHiddenRows:(int)arg1;
- (void)setRoot:(BOOL)arg1;
- (void)setSelectedURL:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;

@end
