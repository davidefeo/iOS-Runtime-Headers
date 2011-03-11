/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABGroupWrapper, NSMutableArray, DAContactsSearchQuery, NSString, <ABServerSearchDataSourceDelegate>, <ABStyleProvider>, NSArray;

@interface ABServerSearchDataSource : NSObject <UITableViewDataSource, UITableViewDelegate, DASearchQueryConsumer> {
    ABGroupWrapper *_selectedGroupWrapper;
    NSArray *_currentSearchResults;
    NSArray *_currentResultsAsPeople;
    struct { 
        unsigned int isSearching : 1; 
        unsigned int hasError : 1; 
    } _flags;
    DAContactsSearchQuery *_currentSearchQuery;
    NSMutableArray *_incrementalSearchResults;
    NSString *_searchString;
    <ABServerSearchDataSourceDelegate> *_delegate;
}

@property(readonly) <ABStyleProvider> * styleProvider;
@property(readonly) NSArray * currentResultsAsPeople;
@property(retain) NSString * searchString;
@property <ABServerSearchDataSourceDelegate> * delegate;
@property(retain) ABGroupWrapper * selectedGroupWrapper;


- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)searchString;
- (void)setSearchString:(id)arg1;
- (id)currentResultsAsPeople;
- (void)_beginSearch;
- (void)_cancelBeginSearch;
- (void)_cancelSearchQuery;
- (void)_setCurrentSearchResults:(id)arg1;
- (void)_setCurrentSearchResults:(id)arg1 error:(int)arg2;
- (void)_setCurrentSearchResults:(id)arg1 callDelegate:(BOOL)arg2;
- (void)_setCurrentSearchResults:(id)arg1 error:(int)arg2 callDelegate:(BOOL)arg3;
- (int)_errorForDAStatusCode:(int)arg1;
- (id)_localizedStringForError:(int)arg1;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)cancelSearch;
- (void)clearSearchResults;
- (void*)personAtIndex:(unsigned int)arg1;
- (void)beginNewSearchForString:(id)arg1;
- (id)styleProvider;
- (void)setSelectedGroupWrapper:(id)arg1;
- (id)selectedGroupWrapper;

@end