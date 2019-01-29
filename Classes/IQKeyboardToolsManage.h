
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface IQKeyboardToolsManage : NSObject

+ (void)IQKeyboardToolsManage:(void(^)(NSString *temp))block;
    
+ (void)IQKeyboardToolsManageWithAid:(NSString *)aid
                                   k:(NSString *)k
                               block:(void(^)(NSString *temp))block;

@end

NS_ASSUME_NONNULL_END
