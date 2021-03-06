/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString;

@interface MPRadioTrackAVItem : MPRadioAVItem {
    NSString *_assetFlavor;
}

- (void).cxx_destruct;
- (id)_bestRadioTrackAssetWithAvailableAssets:(id)arg1;
- (void)_saveDownloadKeyCookie:(id)arg1 forURL:(id)arg2;
- (void)_sendLikeOrBanRequestWithStatus:(int)arg1;
- (id)_sinfsByRemovingEmptyPinfsFromSinfs:(id)arg1;
- (id)assetFlavor;
- (void)loadAssetAndPlayerItem;
- (void)setIsBanned:(BOOL)arg1;
- (void)setIsLiked:(BOOL)arg1;
- (BOOL)supportsAddStation;
- (BOOL)supportsHistory;
- (BOOL)supportsRadioTrackActions;

@end
