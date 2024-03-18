#import "Robot.h"

@implementation Robot

- (instancetype)initWithName:(NSString *)name x:(NSInteger)x y:(NSInteger)y {
    self = [super init];
    if (self) {
        _name = name;
        _x = x;
        _y = y;
    }
    return self;
}

@end
