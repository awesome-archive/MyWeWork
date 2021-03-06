//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MDrawToolMeasurementProtocol-Protocol.h"
#import "MDrawToolProtocol-Protocol.h"
#import "MToolObjectUndoDelegate-Protocol.h"
#import "MToolObjectUndoFeatureDelegate-Protocol.h"

@class MDrawMeasurementInfo, MToolUndoManager, NSString, UIColor;

@interface MDrawTool : NSObject <MDrawToolProtocol, MDrawToolMeasurementProtocol, MToolObjectUndoDelegate, MToolObjectUndoFeatureDelegate>
{
    _Bool _finalized;
    _Bool _selected;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
    double _unitScale;
    UIColor *_handleFillColor;
    long long _handleSize;
    long long _handleLineWidthSize;
    unsigned long long _drawType;
    double _rotateAngle;
    double _lastRotateAngle;
    struct CGAffineTransform _mInvertTransform;
    struct CGAffineTransform _transform;
    unsigned long long _moveDirection;
    NSString *_unit;
    MDrawMeasurementInfo *_measurement;
    _Bool showMeasurement;
    _Bool _isNewBuild;
    _Bool _isMutableTool;
    NSString *_name;
    double _lineWidth;
    UIColor *_color;
    double calibration;
    NSString *measureText;
    UIColor *fillColor;
    double zoomScale;
    double _handleViewScale;
    MToolUndoManager *_undoMgr;
    struct CGPoint preScalePoint;
    struct CGPoint centerPoint;
}

@property(retain, nonatomic) MToolUndoManager *undoMgr; // @synthesize undoMgr=_undoMgr;
@property(nonatomic) double handleViewScale; // @synthesize handleViewScale=_handleViewScale;
@property(nonatomic) double zoomScale; // @synthesize zoomScale;
@property(nonatomic) struct CGPoint centerPoint; // @synthesize centerPoint;
@property(nonatomic) struct CGPoint preScalePoint; // @synthesize preScalePoint;
@property(nonatomic) double rotateAngle; // @synthesize rotateAngle=_rotateAngle;
@property(nonatomic) _Bool isMutableTool; // @synthesize isMutableTool=_isMutableTool;
@property(nonatomic) _Bool isNewBuild; // @synthesize isNewBuild=_isNewBuild;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor;
@property(nonatomic) unsigned long long drawType; // @synthesize drawType=_drawType;
@property(readonly, nonatomic) NSString *measureText; // @synthesize measureText;
@property(nonatomic) double calibration; // @synthesize calibration;
@property(nonatomic) _Bool showMeasurement; // @synthesize showMeasurement;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) _Bool finalized; // @synthesize finalized=_finalized;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long moveDirection; // @synthesize moveDirection=_moveDirection;
- (void).cxx_destruct;
- (id)getFeature;
- (void)setFeature:(id)arg1;
- (_Bool)isRotateByRotateCtx;
- (_Bool)isSupportGestureRotate;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (struct CGPoint)invertPoint:(struct CGPoint)arg1;
- (void)revertLastValidfeature;
- (void)reset;
- (void)resetRedo;
- (_Bool)redo;
- (_Bool)undo;
- (_Bool)updatefeature;
- (_Bool)redo:(CDUnknownBlockType)arg1;
- (_Bool)undo:(CDUnknownBlockType)arg1;
- (void)removeSubToolFromArray:(id)arg1;
- (void)addSubToolToArray:(id)arg1;
- (_Bool)mutabaleToolObjType;
- (void)removeSubTool:(id)arg1;
- (void)addSubTool:(id)arg1;
- (_Bool)containTool:(id)arg1;
- (id)copy;
- (void)finalize;
- (double)unitConvert:(double)arg1 isSquare:(_Bool)arg2;
- (_Bool)isPoint:(struct CGPoint)arg1 onHandle:(struct CGPoint)arg2;
- (void)drawRotate:(struct CGContext *)arg1 centerPoint:(struct CGPoint)arg2;
- (void)drawHandle:(struct CGContext *)arg1 atPoint:(struct CGPoint)arg2;
- (void)reCalcCenter;
- (void)drawMeasurement:(struct CGContext *)arg1;
- (_Bool)isDrawVaild;
- (void)drawContentHandle:(struct CGContext *)arg1;
- (void)drawContent:(struct CGContext *)arg1;
- (void)drawSlectedStateContent:(struct CGContext *)arg1;
- (void)draw:(struct CGContext *)arg1;
- (void)limitValidFeatrue;
- (void)stopMoveHandle;
- (void)moveByOffset:(struct CGSize)arg1 endPoint:(struct CGPoint)arg2;
- (void)rotateEndedWithAngle:(double)arg1;
- (void)rotateChangedWithAngle:(double)arg1;
- (void)tryMovePoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2;
- (_Bool)testHitOnHandle:(struct CGPoint)arg1;
- (_Bool)hitOnHandle:(struct CGPoint)arg1;
- (_Bool)hitTest:(struct CGPoint)arg1;
- (void)finalize:(struct CGPoint)arg1;
- (void)drawUp:(struct CGPoint)arg1;
- (void)drawMove:(struct CGPoint)arg1;
- (void)drawDown:(struct CGPoint)arg1;
@property(readonly, nonatomic) struct CGRect frameIncludeLineWidth;
@property(readonly, nonatomic) struct CGRect frame;
- (void)updateHandleSize;
@property(retain, nonatomic) NSString *unit;
- (id)initWithStartPoint:(struct CGPoint)arg1;
- (id)init;
- (void)initName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

