//
//  Grid.h
//  GameOfLife
//
//  Created by Wolfgang Kandek on 8/3/14.
//  Copyright (c) 2014 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite
@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

- (void) evolveStep;
- (void) countNeighbors;
- (void) countNeighbors2;
- (void) updateCreatures;
- (void) updateCreatures2;

@end
