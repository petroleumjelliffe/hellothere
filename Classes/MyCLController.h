@protocol MyCLControllerDelegate <NSObject>
@required
- (void)locationUpdate:(CLLocation *)location;
- (void)headingUpdate:(CLHeading *)heading;
- (void)locationError:(NSError *)error;
@end

@interface MyCLController : NSObject <CLLocationManagerDelegate> 

@property (nonatomic, strong) CLLocationManager *locationManager;
@property (nonatomic, unsafe_unretained) id <MyCLControllerDelegate> delegate;



@end