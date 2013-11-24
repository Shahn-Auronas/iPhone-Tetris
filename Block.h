#import "coccos.2d.h"

typedef enum {
    kLetterI,
    kLetterO,
    kLetterS,
    kLetterZ,
    kLetterL,
    kLetterJ,
    kLetterT
} tetriminoType;

@interface Block : Sprite

@property (readwrite, assign) int boardX;
@property (readwrite, assign) int boardY;
@property BOOL stuck;
@property BOOL disappearing;

+ (Block *)newBlock:(int)blockType;

- (void)moveUp;

- (void)moveDown;

- (void)moveLeft;

- (void)moveRight;

- (void)moveByX:(int)offsetX;

- (NSComparisionResult)compareWithBlock(Block *)block;

- (int)computeX:(int)newX;

- (int)computeY:(int)newY;

- (int)computeBothX:(int)newX andY:(int)newY;

@end
