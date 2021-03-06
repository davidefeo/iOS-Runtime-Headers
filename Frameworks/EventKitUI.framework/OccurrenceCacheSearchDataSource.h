/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKOccurrenceCacheSearch, NSMutableArray;

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    NSMutableArray *_processingCachedDays;
    } _resultsLock;
    EKOccurrenceCacheSearch *_search;
}

- (void).cxx_destruct;
- (id)_cachedDays;
- (void)_setCachedDaysAndNotify:(id)arg1;
- (int)countOfOccurrencesAtDayIndex:(int)arg1;
- (void)dealloc;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;
- (void)invalidate;
- (void)invalidateCachedOccurrences;
- (void)searchWithTerm:(id)arg1;
- (void)stopSearching;
- (BOOL)supportsFakeTodaySection;
- (BOOL)supportsInvitations;

@end
