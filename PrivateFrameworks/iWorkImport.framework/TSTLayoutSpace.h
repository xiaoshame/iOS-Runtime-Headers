/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSTCoordinateArray, TSTLayout, TSTLayoutSpaceBundle, TSTMasterLayout;

@interface TSTLayoutSpace : NSObject {
    struct { 
        BOOL coordinates; 
        BOOL tableOffset; 
    struct { 
        struct { 
            unsigned int column; 
            unsigned int row; 
        } topLeft; 
        struct { 
            unsigned int column; 
            unsigned int row; 
        } bottomRight; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGAffineTransform { 
        float a; 
        float b; 
        float c; 
        float d; 
        float tx; 
        float ty; 
    struct CGPoint { 
        float x; 
        float y; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct _opaque_pthread_rwlock_t { 
        long __sig; 
        BOOL __opaque[124]; 
    TSTCoordinateArray *mBodyColumnCoordinates;
    TSTCoordinateArray *mBodyRowCoordinates;
    TSTLayoutSpaceBundle *mBundle;
    } mCachedAlignedFrame;
    } mCachedAlignedStrokeFrame;
    } mCachedFrame;
    } mCachedStrokeFrame;
    BOOL mDrawBlackAndWhite;
    BOOL mDrawPreventAntialias;
    } mGridRange;
    TSTCoordinateArray *mHeaderColumnRowCoordinates;
    BOOL mHeaderColumnsRepeat;
    TSTCoordinateArray *mHeaderRowColumnCoordinates;
    BOOL mHeaderRowsRepeat;
    } mInvalidFlags;
    BOOL mLayoutDirectionIsLeftToRight;
    int mLayoutSpaceType;
    } mLock;
    } mTableOffset;
    } mTransformFromCanvas;
    } mTransformFromDevice;
    } mTransformToCanvas;
    } mTransformToDevice;
    float mViewScale;
}

@property(readonly) TSTLayoutSpaceBundle * bundle;
@property BOOL drawBlackAndWhite;
@property BOOL drawPreventAntialias;
@property BOOL headerColumnsRepeat;
@property BOOL headerRowsRepeat;
@property(readonly) BOOL isColumns;
@property(readonly) BOOL isCorner;
@property(readonly) BOOL isFrozen;
@property(readonly) BOOL isMain;
@property(readonly) BOOL isRepeat;
@property(readonly) BOOL isRows;
@property(readonly) TSTLayout * layout;
@property(readonly) BOOL layoutDirectionIsLeftToRight;
@property(readonly) int layoutSpaceType;
@property(readonly) TSTMasterLayout * masterLayout;
@property struct CGPoint { float x1; float x2; } tableOffset;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformFromCanvas;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformFromDevice;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformToCanvas;
@property struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; } transformToDevice;
@property float viewScale;

- (id).cxx_construct;
- (id)bundle;
- (void)dealloc;
- (id)description;
- (BOOL)drawBlackAndWhite;
- (BOOL)drawPreventAntialias;
- (BOOL)headerColumnsRepeat;
- (BOOL)headerRowsRepeat;
- (id)initWithLayoutSpaceBundle:(id)arg1 type:(int)arg2;
- (void)invalidateCoordinates;
- (void)invalidateTableOffset;
- (BOOL)isColumns;
- (BOOL)isCorner;
- (BOOL)isFrozen;
- (BOOL)isMain;
- (BOOL)isRepeat;
- (BOOL)isRows;
- (id)layout;
- (BOOL)layoutDirectionIsLeftToRight;
- (int)layoutSpaceType;
- (void)lockForRead;
- (void)lockForWrite;
- (id)masterLayout;
- (BOOL)p_getLayoutDirectionLeftToRight;
- (void)setDrawBlackAndWhite:(BOOL)arg1;
- (void)setDrawPreventAntialias:(BOOL)arg1;
- (void)setHeaderColumnsRepeat:(BOOL)arg1;
- (void)setHeaderRowsRepeat:(BOOL)arg1;
- (void)setTableOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setTransformFromCanvas:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setTransformFromDevice:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setTransformToCanvas:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setTransformToDevice:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setViewScale:(float)arg1;
- (struct CGPoint { float x1; float x2; })tableOffset;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformFromCanvas;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformFromDevice;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToCanvas;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformToDevice;
- (void)unlock;
- (int)validate:(id)arg1;
- (void)validateCachedFrames;
- (int)validateCoordinateCache:(id)arg1;
- (int)validateTableOffset:(id)arg1;
- (float)viewScale;

@end
