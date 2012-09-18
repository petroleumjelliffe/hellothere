#import "HelloThereViewController.h"

@implementation HelloThereViewController

@synthesize locationController, locationLabel, headingLabel;

- (void)viewDidLoad { 	
	locationController = [[MyCLController alloc] init];
	locationController.delegate = self;
	[locationController.locationManager startUpdatingLocation];
    [locationController.locationManager startUpdatingHeading];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning]; 
}


- (void)locationUpdate:(CLLocation *)location {
	locationLabel.text = [location  description] ;
}

- (void)headingUpdate:(CLHeading *)heading {
    headingLabel.text = [heading description];
}


- (void)locationError:(NSError *)error {
	locationLabel.text = [error description];
}

@end
