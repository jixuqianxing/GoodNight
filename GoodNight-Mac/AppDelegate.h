//
//  AppDelegate.h
//  GoodNight-Mac
//
//  Created by Anthony Agatiello on 11/17/16.
//  Copyright © 2016 ADA Tech, LLC. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <MASShortcut/Shortcut.h>

static NSString * const MASHardcodedShortcutEnabledKey = @"hardcodedShortcutEnabled";
static NSUInteger const GoodNightModifierFlags = NSEventModifierFlagCommand | NSEventModifierFlagOption;
static void *MASObservingContext = &MASObservingContext;

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (strong, nonatomic) NSStatusItem *statusItem;
@property (strong, nonatomic) NSMenu *statusMenu;

@property NSWindowController *tabWindowController;
@property NSWindowController *aboutWindowController;

@end
