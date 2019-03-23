#import "LayaPlatformInterface.h"
#import <string>

@interface LayaPlatformFactory  : NSObject
{
    
}
+(id)GetInstance;
//初始化
-(id)init;
//创建Interface
-(id<LayaPlatformInterface>)CreateInterface:(NSString*)className;
//设置缓存目录，为了能够存储些数据用
-(void)setCacheDir:(const std::string&) sDirPath;
//获得存入的数据
-(std::string)getLocalInfoFromCache;
//存储数据
-(void)writeLocalInfoToCache:(const char*)sInfo;
@end
