//
//  LEANPDFManager.h
//  MedianIOS
//
//  Created by kevz on 4/2/24.
//  Copyright © 2024 GoNative.io LLC. All rights reserved.
//

#import "LEANWebViewController.h"
#import <Foundation/Foundation.h>
#import <PDFKit/PDFKit.h>
#import <WebKit/WebKit.h>

@interface LEANPDFManager : NSObject
+ (LEANPDFManager * _Nonnull)shared;
- (void)openPDF:(NSURL * _Nullable)url wvc:(LEANWebViewController * _Nonnull)wvc;
@end
