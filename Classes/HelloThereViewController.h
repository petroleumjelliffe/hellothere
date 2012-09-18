#import <UIKit/UIKit.h>
#import "MyCLController.h"

@interface HelloThereViewController : UIViewController <MyCLControllerDelegate> 

@property (nonatomic, weak) IBOutlet UILabel *locationLabel;
@property (nonatomic, weak) IBOutlet UILabel *headingLabel;
@property (nonatomic, strong) MyCLController *locationController;

- (void)locationUpdate:(CLLocation *)location;
- (void)headingUpdate:(CLHeading *)heading;

- (void)locationError:(NSError *)error;

@end