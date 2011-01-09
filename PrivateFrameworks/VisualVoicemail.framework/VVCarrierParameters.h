/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@class NSDictionary;



@interface VVCarrierParameters : NSObject 
{
    NSDictionary *_parameterValues;
}

+ (id)carrierServiceName;
+ (BOOL)ignoresRoamingSwitch;
+ (id)retryIntervals;
+ (long)legacyDataContextIdentifier;
+ (id)messageNotificationFallbackTimeout;
+ (BOOL)supportsGreetingChanges;
+ (BOOL)supportsPasswordChanges;

- (id)initForService:(id)arg1;
- (void)dealloc;
- (id)parameterValueForKey:(id)arg1;

@end