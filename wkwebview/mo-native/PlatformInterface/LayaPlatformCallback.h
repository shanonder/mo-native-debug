#import "UIKit/UIKit.h"
#import <Webkit/WKWebView.h>

@interface LayaPlatformCallback  : NSObject
@property (strong, nonatomic) WKWebView* webview;
+(id) GetInstance;
-(void) LP_onMarketInitCallback:(NSString*)jsonParam tokenDir:(NSString*)p_sTokenDir;
-(void) LP_LoginCallback:(NSString*) jsonParam;
-(void) LP_onCZCallback:(NSString*) jsonParam;
-(void) LP_ShareAndFeedCallback:(NSString*) jsonParam;
-(void) LP_onAuthorizeCallback:(NSString*) jsonParam;
-(void) LP_onRefreshTokenCallback:(NSString*) jsonParam;
-(void) LP_onGetGameFriendsCallback:(NSString*) jsonParam;
-(void) LP_onSendToDesktopCallback:(NSString*) jsonParam;
-(void) LP_onLogoutCallback:(NSString*) jsonParam;
-(void) LP_onTopicCircleCallback:(NSString*) jsonParam;
-(void) LP_InviteCallback:(NSString*) jsonParam;
-(void) LP_SwitchUserCallback:(NSString*) jsonParam;
-(void) LP_EnterPlatformCallback:(NSString*) jsonParam;
-(void) LP_EnterBBSCallback:(NSString*) jsonParam;
-(void) LP_EnterFeedbackCallback:(NSString*) jsonParam;
-(void) LP_EnterAccountMgrCallback:(NSString*) jsonParam;
-(void) LP_gmPropsCallback:(NSString*) jsonParam;
-(void) LP_SetCZInfoCallback:(NSString*) jsonParam;
-(void) LP_SendMessageToPlatformCallback:(NSString*) jsonParam;
-(void) LP_IAPStoreCallBack:(NSString*) jsonParam;
@end
