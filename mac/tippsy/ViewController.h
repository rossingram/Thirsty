//
//  ViewController.h
//  tippsy
//
//  Created by Raymond Lim on 9/17/12.
//  Copyright (c) 2012 Raymond Lim. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate> {
    IBOutlet UITextField *txtName;
    IBOutlet UILabel *lblHello;
    
}

@property(nonatomic, retain) IBOutlet UITextField *txtName;
@property(nonatomic, retain) IBOutlet UILabel *lblHello;

- (IBAction) updateText:(id) sender;

@end
