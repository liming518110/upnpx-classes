//
//  otherFunctions.h
//  
//
//  Created by Sebastian Peischl on 27.04.14.
//  Copyright (c) 2014 easyMOBIZ. All rights reserved.
//

#import <Foundation/Foundation.h>

#define URN_SERVICE_RENDERING_CONTROL_1     @"urn:schemas-upnp-org:service:RenderingControl:1"
#define URN_SERVICE_CONTENT_DIRECTORY_1     @"urn:schemas-upnp-org:service:ContentDirectory:1"
#define URN_SERVICE_AVTRANSPORT_1            @"urn:schemas-upnp-org:service:AVTransport:1"

@interface otherFunctions : NSObject

// returns the name of a media device
+ (NSString *)nameOfUPnPDevice: (id)device;

// converts a folat value into a string
+ (NSString *)floatIntoString: (float)value;

// return available actions
+ (NSArray *)availableActionsForDevice: (id)device forUrn: (NSString *)urn withNeededActions: (NSArray *)neededActions;

// returns all actions for one device
+ (NSArray *)listActionsForDevice: (id)device forUrn: (NSString *)urn;

@end
