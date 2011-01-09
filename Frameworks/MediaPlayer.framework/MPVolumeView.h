/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPVolumeViewInternal;



@interface MPVolumeView : UIView <NSCoding>
{
    MPVolumeViewInternal *_internal;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setVolumeAudioCategory:(id)arg1;
- (id)routeButton;
- (void)_createSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)displayAudioRoutePicker;
- (void)setShowsRouteButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsVolumeSlider:(BOOL)arg1;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;

@end