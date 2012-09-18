@protocol MyCLControllerDelegate <NSObject>
@required
- (void)locationUpdate:(CLLocation *)location;
- (void)headingUpdate:(CLHeading *)heading;
- (void)locationError:(NSError *)error;
@end

@interface MyCLController : NSObject <CLLocationManagerDelegate> {
	CLLocationManager *locationManager;
	id delegate;
}

@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, assign) id <MyCLControllerDelegate> delegate;

- (void)locationManager:(CLLocationManager *)manager
	didUpdateToLocation:(CLLocation *)newLocation
		   fromLocation:(CLLocation *)oldLocation
       didUpdateHeading:(CLHeading *)newheading;

- (void)locationManager:(CLLocationManager *)manager
	   didFailWithError:(NSError *)error;

@end