/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSMutableDictionary, UIWindow;

@interface GameCenterTest : UIApplication <UIApplicationTestingDelegate> {
    NSMutableDictionary *_actionsPerTest;
    NSMutableDictionary *_optionsPerTest;
}

@property(retain) NSMutableDictionary * actionsPerTest;
@property(retain) NSMutableDictionary * optionsPerTest;
@property(retain) UIWindow * window;

+ (void)completeIfPPTesting:(id)arg1;
+ (void)failIfPPTesting:(id)arg1;
+ (void)setPPTest:(id)arg1 action:(id)arg2;

- (void)PPTest_friends_detail:(id)arg1;
- (void)PPTest_friends_loading:(id)arg1;
- (void)PPTest_friends_scrolling:(id)arg1;
- (void)PPTest_games_detail:(id)arg1;
- (void)PPTest_games_loading:(id)arg1;
- (void)PPTest_games_scrolling:(id)arg1;
- (void)PPTest_login:(id)arg1;
- (void)PPTest_logout:(id)arg1;
- (void)PPTest_me_scrolling:(id)arg1;
- (void)_performScrollTest:(id)arg1 onView:(id)arg2;
- (void)_test:(id)arg1 switchToTab:(id)arg2 collectionViewController:(id)arg3;
- (id)actionsPerTest;
- (void)completeIfPPTesting:(id)arg1;
- (void)failIfPPTesting:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)optionsForPPTest:(id)arg1;
- (id)optionsPerTest;
- (BOOL)runTest:(id)arg1 options:(id)arg2;
- (void)setActionsPerTest:(id)arg1;
- (void)setOptionsPerTest:(id)arg1;
- (void)setPPTest:(id)arg1 action:(id)arg2;
- (BOOL)shouldStartTest:(id)arg1;

@end
