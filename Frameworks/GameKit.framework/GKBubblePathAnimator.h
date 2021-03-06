/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKBubblePathAnimator : NSObject {
}

@property(readonly) int animatorType;

+ (id)hiTimingFunction;
+ (id)sharedBubblePathAnimator;

- (void)animateTransition:(id)arg1 completionHandler:(id)arg2;
- (void)animateTransition:(id)arg1;
- (int)animatorType;
- (BOOL)bubblesOnscreenAtBeginning;
- (BOOL)bubblesOnscreenAtEnd;
- (double)minimumDurationForViewAnimations;

@end
