/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOMapItemTransitInfo : NSObject <GEOMapItemTransitInfo> {
    NSArray *_connections;
    NSArray *_departureSequences;
    NSString *_displayName;
    BOOL _hasTransitIncidentComponent;
    NSDate *_incidentExpirationDate;
    NSArray *_incidents;
    NSArray *_lines;
    NSArray *_systems;
    NSTimeZone *_timeZone;
    GEOPDTransitInfo *_transitInfo;
    GEOPDTransitSchedule *_transitSchedule;
}

@property (nonatomic, readonly) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *departureSequences;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) BOOL hasTransitIncidentComponent;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, readonly) BOOL isTransitIncidentsTTLExpired;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, readonly) NSDate *lastFullScheduleValidDate;
@property (nonatomic, readonly) NSArray *lines;
@property (nonatomic, readonly) unsigned int linesCount;
@property (nonatomic, readonly) unsigned int numAdditionalDepartures;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *systems;
@property (nonatomic, readonly) unsigned int systemsCount;

- (id)_departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 ignoreDirectionFilter:(BOOL)arg3 direction:(id)arg4 validForDateFromBlock:(id /* block */)arg5;
- (id)allSequencesForSystem:(id)arg1 direction:(id)arg2;
- (id)connections;
- (void)dealloc;
- (id)departureSequences;
- (id)departureSequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(id /* block */)arg4;
- (id)directionsForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 validForDateFromBlock:(id /* block */)arg3 hasSequencesWithNoDirection:(out BOOL*)arg4;
- (id)displayName;
- (BOOL)hasTransitIncidentComponent;
- (id)inactiveLinesForSystem:(id)arg1 relativeToDateFromBlock:(id /* block */)arg2 excludingIncidentEntities:(id)arg3;
- (id)incidents;
- (id)initWithTransitInfo:(id)arg1 schedule:(id)arg2 timeZone:(id)arg3 incidents:(id)arg4 hasTransitIncidentComponent:(BOOL)arg5 incidentExpirationDate:(id)arg6 providerID:(int)arg7;
- (BOOL)isTransitIncidentsTTLExpired;
- (id)labelItems;
- (id)lastFullScheduleValidDate;
- (id)lines;
- (unsigned int)linesCount;
- (id)linesForSystem:(id)arg1;
- (unsigned int)numAdditionalDepartures;
- (id)sequencesForSystem:(id)arg1 excludingIncidentEntities:(id)arg2 direction:(id)arg3 validForDateFromBlock:(id /* block */)arg4;
- (id)serviceResumesDateForLine:(id)arg1 excludingIncidentEntities:(id)arg2 afterDate:(id)arg3 blocked:(out BOOL*)arg4;
- (id)systems;
- (unsigned int)systemsCount;

@end