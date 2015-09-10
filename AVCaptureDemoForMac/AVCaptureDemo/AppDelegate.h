//
//  AppDelegate.h
//  AVCaptureDemo
//
//  Created by Sand Pei on 12-4-17.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "AVCaptureEngine.h"
#import "AVCaptureView.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    NSWindow *window;
    NSView *previewView;
    AVCaptureView *captureView;
    NSTextField *summaryInfo;
    NSTextField *deviceName;
    NSPopUpButton *formatButton;
    NSPopUpButton *resolutionButton;
    NSPopUpButton *scalingButton;
    
    AVCaptureEngine *captureEngine;
    
    NSTimer *checkTimer;
}

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet NSView *previewView;
@property (assign) IBOutlet AVCaptureView *captureView;
@property (assign) IBOutlet NSTextField *summaryInfo;
@property (assign) IBOutlet NSTextField *deviceName;
@property (assign) IBOutlet NSPopUpButton *formatButton;
@property (assign) IBOutlet NSPopUpButton *resolutionButton;
@property (assign) IBOutlet NSPopUpButton *scalingButton;

- (IBAction)clickStartButton:(id)sender;
- (IBAction)clickStopButton:(id)sender;
- (IBAction)clickSwitchButton:(id)sender;
- (IBAction)clickFormatButton:(id)sender;
- (IBAction)clickResolutionButton:(id)sender;
- (IBAction)clickScalingButton:(id)sender;
- (IBAction)clickScreenButton:(id)sender;
- (IBAction)clickInfoButton:(id)sender;

- (void)checkStatus;

@end
