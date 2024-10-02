//
//  LRAtsMediationAdapter.h
//  LRAtsMediationAdapter
//
//  Created by Najdan Tomic on 2023-05-10.
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>
#import <LRAtsSDK/LRAtsSDK.h>

//! Project version number for LRAtsMediationAdapter.
FOUNDATION_EXPORT double LRAtsMediationAdapterVersionNumber;

//! Project version string for LRAtsMediationAdapter.
FOUNDATION_EXPORT const unsigned char LRAtsMediationAdapterVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <LRAtsMediationAdapter/PublicHeader.h>

@interface LRAtsMediationAdapter : NSObject <GADRTBAdapter>
+ (void)configure:(LRAtsConfiguration *)configuration;
+ (void)setHasConsentForNoLegislation:(Boolean)hasConsent;
+ (void)setIdentifier:(id<LRIdentifierData>)identifier;
@end
