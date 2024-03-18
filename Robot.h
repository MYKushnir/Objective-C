#import <Foundation/Foundation.h>

@interface Robot : NSObject

@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) NSInteger x;
@property (nonatomic, assign) NSInteger y;

- (instancetype)initWithName:(NSString *)name x:(NSInteger)x y:(NSInteger)y;

@end
