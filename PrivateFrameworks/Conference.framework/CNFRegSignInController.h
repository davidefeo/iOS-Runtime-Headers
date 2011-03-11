/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class PSSpecifier, NSString, CNFRegLearnMoreButton;

@interface CNFRegSignInController : CNFRegFirstRunController <CNFRegCreateAccountControllerDelegate> {
    PSSpecifier *_usernameSpecifier;
    PSSpecifier *_passwordSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_signInButtonSpecifier;
    PSSpecifier *_createAccountButtonSpecifier;
    NSString *_pendingUsername;
    NSString *_pendingPassword;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _alertHandler;

    unsigned int _signinFailureCount;
    CNFRegLearnMoreButton *_learnMoreButton;
    BOOL _hideLearnMoreButton;
}

@property BOOL hideLearnMoreButton;
@property unsigned int signinFailureCount;
@property(copy) id alertHandler;
@property(copy) NSString * pendingPassword;
@property(copy) NSString * pendingUsername;


- (void)_updateUI;
- (void)handleURL:(id)arg1;
- (id)validationString;
- (void)willResignActive;
- (void)_setupEventHandlers;
- (id)alertHandler;
- (id)pendingUsername;
- (unsigned int)signinFailureCount;
- (void)setHideLearnMoreButton:(BOOL)arg1;
- (void)_layoutLearnMoreButton;
- (void)setSpecifier:(id)arg1;
- (void)willBecomeActive;
- (id)_rightButtonItem;
- (void)_updateDescriptionText;
- (void)_resignFirstResponders;
- (id)getUserNameForSpecifier:(id)arg1;
- (id)getPasswordForSpecifier:(id)arg1;
- (id)usernameTextField;
- (BOOL)usernameIsEmpty;
- (id)passwordTextField;
- (BOOL)passwordIsEmpty;
- (void)usernameFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (void)passwordFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (void)showCreateAccountController;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_finishSignInWithAccount:(id)arg1 animated:(BOOL)arg2;
- (void)_returnKeyWasPressed:(id)arg1;
- (void)signInTapped:(id)arg1;
- (void)learnMorePressed:(id)arg1;
- (void)_startTimeout;
- (void)cancelButtonTapped;
- (void)setUsernameEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPasswordEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCreateAccountButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSignInButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_buildCreateAccountButtonSpecifierCache:(id)arg1;
- (void)_buildSignInGroupSpecifierCache:(id)arg1;
- (void)_buildCredentialSpecifierCache:(id)arg1;
- (void)_showRegistrationFailureWithError:(id)arg1;
- (void)_showSigninFailureAlert;
- (void)_resetSigninFailureCount;
- (void)_incrementSigninFailureCount;
- (void)_launchForgotPasswordUrl;
- (void)_showNewPasswordNeededSheetWithAppleID:(id)arg1;
- (void)_setupAppearBlockForNewPasswordWithAppleID:(id)arg1;
- (void)_showAccountNotAuthorizedSheetWithAuthID:(id)arg1 token:(id)arg2;
- (void)_setupAppearBlockForAccountAuthorizeWithAuthID:(id)arg1 token:(id)arg2;
- (BOOL)hideLearnMoreButton;
- (void)setSigninFailureCount:(unsigned int)arg1;
- (id)pendingPassword;
- (void)setPendingPassword:(id)arg1;
- (void)setPendingUsername:(id)arg1;
- (void)_handleTimeout;
- (void)setAlertHandler:(id)arg1;
- (id)specifiers;
- (void)_updateControllerState;
- (void)_buildSpecifierCache:(id)arg1;
- (void)createAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 andPassword:(id)arg3;
- (id)logName;
- (void)loadView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (id)bundle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)init;
- (void)dealloc;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end