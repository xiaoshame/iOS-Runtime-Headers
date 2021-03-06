/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <CAMFlashButtonDelegate>;

@interface CAMFlashButton : CAMTriStateButton {
    <CAMFlashButtonDelegate> *_delegate;
}

@property(getter=isAutoHidden) BOOL autoHidden;
@property <CAMFlashButtonDelegate> * delegate;
@property int flashMode;
@property(getter=isShowingWarningIndicator) BOOL showWarningIndicator;

+ (id)flashButton;

- (id)_autoLabelTextForLandscape:(BOOL)arg1;
- (int)_flashModeForTriStateMode:(int)arg1;
- (id)_iconImageName;
- (void)_notifyDidCollapse;
- (void)_notifyModeDidChange;
- (void)_notifyWasPressed;
- (void)_notifyWillExpand;
- (id)_offLabelTextForLandscape:(BOOL)arg1;
- (id)_onLabelTextForLandscape:(BOOL)arg1;
- (int)_triStateModeForFlashMode:(int)arg1;
- (id)delegate;
- (int)flashMode;
- (void)setDelegate:(id)arg1;
- (void)setFlashMode:(int)arg1 notifyDelegate:(BOOL)arg2;
- (void)setFlashMode:(int)arg1;

@end
