/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



#import "MVTerminationHandler-Protocol.h"

@class FlippedView, NSMutableArray, NSPanel, NSScrollView, NSTimer;

@interface ActivityViewer : NSObject <MVTerminationHandler>
{
    FlippedView *_docView;
    NSScrollView *_scrollView;
    NSPanel *_window;
    NSMutableArray *_entries;
    long long _numActiveEntries;
    NSTimer *_updateTimer;
    BOOL _userIsBeingPromptedForTermination;
}

- (id)init;
- (void)dealloc;
- (void)initializeFromDefaults;
- (void)awakeFromNib;
- (void)_handleNewActivity:(id)arg1;
- (void)_updateAllEntries;
- (void)_addViewToViewerWindow:(id)arg1;
- (void)_appendEntry:(id)arg1;
- (void)removeEntry:(id)arg1;
- (void)_tileViews;
- (BOOL)hasBackgroundActivity;
- (long long)countOfBackgroundActivities;
- (void)_confirmQuitSheetDidEnd:(id)arg1 returnValue:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)needsToPromptUserBeforeTermination:(id)arg1;
- (void)_promptUserForTermination;
- (void)nowWouldBeAGoodTimeToTerminate:(id)arg1;
- (BOOL)isActivityViewerVisible;
- (void)toggleActivityViewerVisible;
- (id)statusMessageForTarget:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (struct CGRect)windowWillUseStandardFrame:(id)arg1 defaultFrame:(struct CGRect)arg2;

@end
