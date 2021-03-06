/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>
#import <MediaPlayerUI/MPUEmptyNowPlayingViewDelegate-Protocol.h>

@interface MPUEmptyNowPlayingView : UIButton {

	UIImageView* _appIconImageView;
	UILabel* _appDisplayNameLabel;
	UILabel* _continueListeningLabel;
	BOOL _shouldShowActionText;
	id<MPUEmptyNowPlayingViewDelegate> _delegate;
	NSString* _appBundleIdentifier;

}

@property (assign,nonatomic) id<MPUEmptyNowPlayingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                                    //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldShowActionText;                                       //@synthesize shouldShowActionText=_shouldShowActionText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MPUEmptyNowPlayingViewDelegate>)arg1 ;
-(id<MPUEmptyNowPlayingViewDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(void)setShouldShowActionText:(BOOL)arg1 ;
-(id)_desaturatedImageWithImage:(id)arg1 ;
-(BOOL)shouldShowActionText;
@end
