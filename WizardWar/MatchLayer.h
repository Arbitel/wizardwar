//
//  MatchLayer.h
//  WizardWar
//
//  Created by Sean Hess on 5/17/13.
//  Copyright (c) 2013 The LAB. All rights reserved.
//

#import "CCLayer.h"
#import "PentagramViewController.h"
#import "Wizard.h"
#import "Match.h"
#import "Combos.h"
#import "Units.h"
#import "DrawingLayer.h"
#import <ReactiveCocoa.h>

@interface MatchLayer : CCLayer
@property (nonatomic, strong) DrawingLayer * drawingLayer;
@property (nonatomic, strong) RACSignal * aiHideControlsSignal;
@property (nonatomic, strong) RACSignal * showControlsSignal;
@property (nonatomic, strong) RACSignal * matchStatusSignal;


-(id)initWithMatch:(Match*)match size:(CGSize)size combos:(Combos*)combos units:(Units*)units;
@end
