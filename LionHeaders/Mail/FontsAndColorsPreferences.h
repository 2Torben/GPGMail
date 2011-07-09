/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "NSPreferencesModule.h"

@class FontPreferenceContainerView, NSArray, NSFont, NSMutableDictionary, NSPopUpButton, NSTextView;

@interface FontsAndColorsPreferences : NSPreferencesModule
{
    FontPreferenceContainerView *_messageListContainerView;
    FontPreferenceContainerView *_messageTextContainerView;
    FontPreferenceContainerView *_noteTextContainerView;
    FontPreferenceContainerView *_fixedWidthContainerView;
    NSArray *_fontPrefContainerViews;
    double _containerSuperViewSpacingY;
    double _containerContainerSpacingY;
    int _changingFontPreference;
    NSMutableDictionary *_midYDict;
    NSFont *_messageListFont;
    NSFont *_messageFont;
    NSFont *_noteFont;
    NSFont *_fixedWidthFont;
    NSPopUpButton *_colorPopupOne;
    NSPopUpButton *_colorPopupTwo;
    NSPopUpButton *_colorPopupThree;
    NSPopUpButton *_lastColorPopupSelected;
    NSTextView *_exampleTextView;
    NSArray *_colorList;
    BOOL _isQuotedTextColored;
    BOOL _isPlainTextOfFixedWidth;
}

+ (id)keyPathsForValuesAffectingMessageListSampleFont;
+ (id)keyPathsForValuesAffectingMessageSampleFont;
+ (id)keyPathsForValuesAffectingNoteSampleFont;
+ (id)keyPathsForValuesAffectingFixedWidthSampleFont;
- (void)awakeFromNib;
- (void)dealloc;
- (void)initializeFromDefaults;
- (void)_growWindowVertically:(double)arg1 animate:(BOOL)arg2;
- (void)_updateAutoresizeFlags:(int)arg1;
- (void)_layoutFromFontPreference:(int)arg1;
- (BOOL)isResizable;
- (id)titleForIdentifier:(id)arg1;
- (id)windowTitle;
- (void)_replaceExampleTextView;
@property(readonly) NSFont *messageListSampleFont; // @dynamic messageListSampleFont;
@property(readonly) NSFont *messageSampleFont; // @dynamic messageSampleFont;
@property(readonly) NSFont *noteSampleFont; // @dynamic noteSampleFont;
@property(readonly) NSFont *fixedWidthSampleFont; // @dynamic fixedWidthSampleFont;
- (id)_sampleFontForFont:(id)arg1;
- (void)_populateFontPrefContainers;
- (void)moduleWillBeRemoved;
- (void)selectFont:(id)arg1;
- (void)toggleColorQuotedText:(id)arg1;
- (void)toggleUseFixedWidthFont:(id)arg1;
- (id)_containerViewForFontPreference:(int)arg1;
- (double)_sizeContainerView:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)_setOtherColor:(id)arg1 forPopup:(id)arg2;
- (void)_setColor:(id)arg1 forPopup:(id)arg2;
- (void)_updateExampleTextView;
- (void)_updateColorList;
- (void)colorQuotesButtonClicked:(id)arg1;
- (void)colorPopupChanged:(id)arg1;
- (void)_colorPicked:(id)arg1;
@property(retain) NSArray *colorList; // @synthesize colorList=_colorList;
@property BOOL isPlainTextOfFixedWidth; // @synthesize isPlainTextOfFixedWidth=_isPlainTextOfFixedWidth;
@property BOOL isQuotedTextColored; // @synthesize isQuotedTextColored=_isQuotedTextColored;
@property(retain) NSFont *fixedWidthFont; // @synthesize fixedWidthFont=_fixedWidthFont;
@property(retain) NSFont *noteFont; // @synthesize noteFont=_noteFont;
@property(retain) NSFont *messageFont; // @synthesize messageFont=_messageFont;
@property(retain) NSFont *messageListFont; // @synthesize messageListFont=_messageListFont;

// Remaining properties
@property(readonly) NSFont *mailboxListSampleFont; // @dynamic mailboxListSampleFont;

@end
