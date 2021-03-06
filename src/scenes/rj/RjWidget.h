/*
 * Copyright (c) 2013 Dan Wilcox <danomatika@gmail.com>
 *
 * BSD Simplified License.
 * For information on usage and redistribution, and for a DISCLAIMER OF ALL
 * WARRANTIES, see the file, "LICENSE.txt," in this distribution.
 *
 * See https://github.com/danomatika/PdParty for documentation
 *
 */
#import <UIKit/UIKit.h>

#import "RjScene.h"

@interface RjWidget : UIView

@property (assign, readonly, nonatomic) NSString *typeString;

@property (weak, nonatomic) RjScene *parentScene;

@property (assign, nonatomic) CGRect originalFrame; // in 320x320 coord system
@property (assign, nonatomic) CGPoint position; // in Rj background image coord system
@property (assign, nonatomic) BOOL centered;	// is position the center?

// reposition/resize widgets based on background scale amounts, etc
- (void)reshape;

@end
