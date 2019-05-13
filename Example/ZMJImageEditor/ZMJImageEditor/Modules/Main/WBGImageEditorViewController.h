//
//  WBGImageEditorViewController.h
//  CLImageEditorDemo
//
//  Created by Jason on 2017/2/27.
//  Copyright © 2017年 CALACULU. All rights reserved.
//

#import "WBGImageEditor.h"
#import "WBGColorPanel.h"
#import "WBGScratchView.h"

typedef NS_ENUM(NSUInteger, WBGEditorMode)
{
    WBGEditorModeNone,
    WBGEditorModeDraw,
    WBGEditorModeText,
    WBGEditorModeClip,
    WBGEditorModePaper,
    WBGEditorModeMosica
};


@interface WBGImageEditorViewController : WBGImageEditor
@property (weak, nonatomic, readonly) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic, readonly) UIImageView *imageView;
@property (weak, nonatomic, readonly) UIView *bottomBar;
@property (strong, nonatomic, readonly) UIImageView *drawingView;
@property (strong, nonatomic, readonly) WBGScratchView *mosicaView;

@property (nonatomic, copy, readonly) UIImage *originImage;
@property (nonatomic, assign, readonly) CGSize originSize;
@property (nonatomic, assign, readonly) WBGEditorMode currentMode;
@property (nonatomic, assign, readonly) BOOL barsHiddenStatus;

- (CGFloat)bottomBarHeight;

- (void)resetCurrentTool;

- (void)editTextAgain;

- (void)hiddenTopAndBottomBar:(BOOL)isHide
                    animation:(BOOL)animation;
@end
