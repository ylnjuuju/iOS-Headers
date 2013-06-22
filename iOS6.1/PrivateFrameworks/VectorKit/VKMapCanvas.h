/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKScreenCanvas.h>

#import "VKInteractiveMap-Protocol.h"
#import "VKMapModelDelegate-Protocol.h"

@class GEOMapRegion, NSArray, VKAnimation, VKCamera, VKConsoleView, VKLoupeView, VKMapCameraController, VKMapModel, VKPolylineOverlayPainter, VKStylesheet, VKTrafficIncident;

@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKInteractiveMap>
{
    VKMapModel *_map;
    VKMapCameraController *_cameraController;
    VKConsoleView *_consoleView;
    VKLoupeView *_loupe;
    id <VKInteractiveMapDelegate> _delegate;
    struct UIEdgeInsets _edgeInsets;
    struct UIEdgeInsets _fullyOccludedEdgeInsets;
    VKAnimation *_regionAnimation;
    double _finalYaw;
    double _finalPitch;
    struct CGSize _lastCanvasSize;
    VKCamera *_defaultTrackingCamera;
    float _lastValidCanvasSizeZoomLevel;
    BOOL _hasLastValidCanvasSizeZoomLevel;
}

+ (BOOL)supportsMapType:(int)arg1;
@property(retain, nonatomic) VKCamera *defaultTrackingCamera; // @synthesize defaultTrackingCamera=_defaultTrackingCamera;
@property(nonatomic) struct UIEdgeInsets fullyOccludedEdgeInsets; // @synthesize fullyOccludedEdgeInsets=_fullyOccludedEdgeInsets;
@property(nonatomic) id <VKInteractiveMapDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) VKMapModel *map; // @synthesize map=_map;
@property(nonatomic) id <VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(CDStruct_31142d93)arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)puckAnimator:(id)arg1 updatedPosition:(CDStruct_9a8617ed *)arg2;
- (void)clearScene;
- (void)debugHighlightLabelAtPoint:(struct CGPoint)arg1;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (double)mapModelZoomScale:(id)arg1;
- (BOOL)mapModelInNav:(id)arg1;
- (BOOL)mapModelInNavAtDefaultZoom:(id)arg1;
- (void)mapModelDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapModelDidFinishLoadingTiles:(id)arg1;
- (void)mapModelDidStartLoadingTiles:(id)arg1;
- (void)mapModel:(id)arg1 didDeselectTrafficIncident:(id)arg2;
- (void)mapModel:(id)arg1 trafficIncident:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapModel:(id)arg1 willSelectTrafficIncident:(id)arg2;
- (void)mapModel:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)mapModel:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapModel:(id)arg1 willSelectLabelMarker:(id)arg2;
- (void)mapModelDidBecomePartiallyDrawn:(id)arg1;
- (void)mapModelDidBecomeFullyDrawn:(id)arg1;
- (id)mapModel:(id)arg1 painterForOverlay:(id)arg2;
- (void)mapModel:(id)arg1 didAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 willAnimateInAnnotationMarkers:(id)arg2;
- (void)mapModel:(id)arg1 didUpdateCalloutView:(id)arg2 forSource:(id)arg3 animated:(BOOL)arg4;
- (void)mapModel:(id)arg1 willShowCalloutView:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 didUpdateCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 willShowCalloutPopoverController:(id)arg2 forSource:(id)arg3;
- (void)mapModel:(id)arg1 needsPanByPixelOffset:(struct CGPoint)arg2 relativeToScreenPoint:(struct CGPoint)arg3 animated:(BOOL)arg4 duration:(double)arg5 completionHandler:(id)arg6;
- (void)mapModel:(id)arg1 annotationMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)stopSnappingAnimations;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(id)arg3;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraControllerDidStopRegionAnimation:(id)arg1 completed:(BOOL)arg2;
- (void)cameraControllerWillStartRegionAnimation:(id)arg1;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
@property(readonly, nonatomic) VKTrafficIncident *selectedTrafficIncident;
- (void)deselectTrafficIncidentAnimated:(BOOL)arg1;
- (void)selectTrafficIncident:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (id)trafficIncidentForSelectionAtPoint:(struct CGPoint)arg1;
@property(nonatomic) BOOL labelMarkerSelectionEnabled;
- (void)deselectLabelMarkerAnimated:(BOOL)arg1;
- (void)selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 pointLabelsOnly:(BOOL)arg2;
- (id)annotationMarkerForSelectionAtPoint:(struct CGPoint)arg1 avoidCurrent:(BOOL)arg2;
- (CDStruct_31142d93)screenPointForPoint:(struct CGPoint)arg1;
- (id)annotationCoordinateTest;
- (id)annotationRectTest;
- (id)annotationMarkerDeselectionCallback;
- (id)selectedAnnotationMarker;
- (id)annotationMarkers;
- (void)setAnnotationMarkerDeselectionCallback:(id)arg1;
- (void)deselectAnnotationMarker:(id)arg1 animated:(BOOL)arg2;
- (void)selectAnnotationMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1 allowAnimation:(BOOL)arg2;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
@property(retain, nonatomic) id <VKRoutePreloadSession> routePreloadSession;
- (void)preloadNavigationSceneResources;
@property(retain, nonatomic) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
- (void)setCurrentLocationText:(id)arg1;
- (void)setRouteUserOffset:(CDStruct_3f2a7a20)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (id)persistentOverlays;
- (id)overlays;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
- (id)selectedLabelMarker;
- (void)dismissExpandedCallout;
@property(nonatomic) Class calloutViewClass;
- (id)calloutPopoverController;
- (id)navTileSource;
- (void)setTracePlaybackSpeedMultiplier:(double)arg1;
@property(readonly, nonatomic, getter=isTrackingHeading) BOOL trackingHeading;
@property(readonly, nonatomic) id <VKTrackableAnnotation> trackingAnnotation;
@property(readonly, nonatomic, getter=isAnimatingToTrackAnnotation) BOOL animatingToTrackAnnotation;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
@property(nonatomic) BOOL trackingAutoSelectsZoomScale;
@property(nonatomic) double trackingZoomScale;
- (void)cameraController:(id)arg1 pouncingToCameraPosition:(CDStruct_31142d93)arg2 orientation:(const CDStruct_aa5aacbc *)arg3;
- (void)setShouldLimitTrackingCameraHeight:(BOOL)arg1;
- (void)transitionToTracking:(BOOL)arg1 mapMode:(int)arg2 pounceCompletionHandler:(id)arg3;
- (void)stopTracking;
- (void)updateTrackingForPointOfReference:(CDStruct_c3b9c2ee)arg1 referenceHeading:(double)arg2 pointOfFocus:(CDStruct_c3b9c2ee)arg3 pointsOfInterest:(id)arg4 viewStyle:(int)arg5 focusStyle:(int)arg6 animated:(BOOL)arg7;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toCameraModelPointToView:(id)arg2;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToView:(id)arg2;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (void)updateCameraForFrameResize;
- (void)forceSceneLoad;
- (void)onTimerFired:(double)arg1;
- (BOOL)currentSceneRequiresMSAA;
- (void)didDrawView;
@property(readonly, nonatomic) VKConsoleView *consoleView; // @synthesize consoleView=_consoleView;
@property(nonatomic) struct UIEdgeInsets edgeInsets;
- (BOOL)writeVisibleTrafficTilesToDirectory:(id)arg1 error:(id *)arg2;
- (id)detailedDescription;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)didReceiveMemoryWarning;
- (void)setHidden:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 shouldRasterize:(BOOL)arg2;
- (void)setCanonicalSkyHeight:(double)arg1;
- (BOOL)canEnter3DMode;
@property(readonly, nonatomic, getter=isFullyPitched) BOOL fullyPitched;
@property(readonly, nonatomic, getter=isPitched) BOOL pitched;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)transferCamera:(id)arg1;
- (struct CGPoint)_centerScreenPoint;
@property(nonatomic) BOOL allowDatelineWraparound;
@property(nonatomic) CDStruct_31142d93 centerCoordinate;
- (void)setCenterCoordinate:(CDStruct_31142d93)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) GEOMapRegion *mapRegionOfInterest;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
- (id)_mapRegionIgnoringFarAmount:(double)arg1;
- (void)animateToMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(id)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4 completion:(id)arg5;
- (CDStruct_c3b9c2ee)_mercatorCenterCoordinateForMapRegion:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (void)stopRegionAnimation;
@property(readonly, nonatomic) double yaw;
@property(readonly, nonatomic) double presentationYaw;
@property(readonly, nonatomic) double pitch;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 animated:(BOOL)arg4;
- (void)setMapRegion:(id)arg1 animated:(BOOL)arg2;
@property(nonatomic) int loupeType;
- (void)setStylesheetName:(id)arg1;
@property(retain, nonatomic) VKStylesheet *stylesheet;
@property(nonatomic) BOOL dynamicMapModesEnabled;
- (void)setDesiredMapMode:(int)arg1 immediate:(BOOL)arg2;
@property(readonly, nonatomic) double maximumZoomLevel;
@property(readonly, nonatomic) double minimumZoomLevel;
@property(nonatomic) int mapType;
@property(nonatomic) BOOL staysCenteredDuringRotation;
@property(nonatomic) BOOL isPitchable;
@property(nonatomic) BOOL staysCenteredDuringPinch;
@property(nonatomic) int labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
@property(readonly, nonatomic, getter=isFullyDrawn) BOOL fullyDrawn;
@property(nonatomic) BOOL trafficEnabled;
- (BOOL)isShowingNoDataPlaceholders;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;

@end

