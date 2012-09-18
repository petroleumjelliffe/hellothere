#import <UIKit/UIKit.h>
#import "MyCLController.h"

@interface HelloThereViewController : UIViewController <MyCLControllerDelegate> {
	IBOutlet UILabel *locationLabel;
	IBOutlet UILabel *headingLabel;
	MyCLController *locationController;
}

- (void)locationUpdate:(CLLocation *)location;
- (void)headingUpdate:(CLHeading *)heading;

- (void)locationError:(NSError *)error;

@end