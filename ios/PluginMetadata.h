#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PluginMetadata : NSObject
@property (nonatomic, readonly) NSString* pluginPlatform;
@property (nonatomic, readonly) NSString* pluginVersion;
@end

NS_ASSUME_NONNULL_END
