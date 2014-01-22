//
//  MapViewController.h
//  NotsBefore
//
//  Created by Apple on 1/21/14.
//  Copyright (c) 2014 Apple. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
@interface MapViewController : UIViewController <CLLocationManagerDelegate,MKMapViewDelegate>
{
    CLLocationManager* locationManager;
    
    CLGeocoder *geocoder;
    CLPlacemark *placemark;
}
@property (strong, nonatomic) IBOutlet CLLocationManager* locationManager;
@property (weak, nonatomic) IBOutlet UILabel *latitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *longitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *addressLabel;
@property (nonatomic, strong) IBOutlet MKMapView *mapView;

@property (nonatomic,strong) IBOutlet UILabel* hintToTap;
- (IBAction)getCurrentLocation:(id)sender;

@end
