//
//  HelloThereAppDelegate.h
//  HelloThere
//
//  Created by Dan Grigsby on 2/4/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HelloThereViewController;

@interface HelloThereAppDelegate : NSObject <UIApplicationDelegate> 

@property (nonatomic, strong) IBOutlet UIWindow *window;
@property (nonatomic, strong) IBOutlet HelloThereViewController *viewController;

@end

