/*
 *  Copyright (c) 2014, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#import "BoltsVersion.h"
#import "BFExecutor.h"
#import "BFTask.h"
#import "BFTaskCompletionSource.h"

#if TARGET_OS_IPHONE
#import "BFAppLink.h"
#import "BFAppLinkNavigation.h"
#import "BFAppLinkTarget.h"
#import "BFURL.h"
#import "BFMeasurementEvent.h"
#import "BFAppLinkReturnToRefererController.h"
#import "BFAppLinkReturnToRefererView.h"
#import "BFAppLinkResolving.h"
#import "BFWebViewAppLinkResolver.h"
#endif

/*! @abstract 80175001: There were multiple errors. */
extern NSInteger const kBFMultipleErrorsError;

@interface Bolts : NSObject

/*!
 Returns the version of the Bolts Framework as an NSString.
 @returns The NSString representation of the current version.
 */
+ (NSString *)version;

@end
