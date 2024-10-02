# Instructions:

This is the GMA sample app that Google actively maintains.
This is an example that LiveRamp has edited to demonstrate how to integrate the `LRAtsMediationAdapter`.

The original sample app source code is here:
https://github.com/googleads/googleads-mobile-ios-examples/tree/main/Swift/admanager/AdManagerRewardedInterstitialExample 

Official documentation can be found, here:
https://developers.liveramp.com/authenticatedtraffic-api/docs/generate-and-pass-identity-envelopes-with-liveramp-secure-signals-adapter

A couple of key things to note:
1. LiveRamp requires explicit ATT consent to generate envelopes - make sure to accept this.
2. This example shows an ad automatically - the LiveRamp envelope may show up in the second ad request.


## To run / validate (we use cocoapods)
- Clone this repository.
- Run `pod update`, then `pod install`.
- Open AdManagerRewardedInterstitialExample.xcworkspace
- Clean, build, and run.

