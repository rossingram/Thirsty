//
//  ViewController.h
//  Tippsy
//
//  Created by Raymond Lim on 9/19/12.
//  Copyright (c) 2012 Raymond Lim. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <RobotUIKit/RobotUIKit.h>
#import "ShakeViewController.h"

@interface ViewController : UIViewController
{
    RUICalibrateGestureHandler *calibrateHandler;    
    ShakeViewController *shakeViewController;
}
@property(nonatomic, retain) ShakeViewController *shakeViewController;

- (IBAction) navigateToShakeView:(id) sender;
@end

