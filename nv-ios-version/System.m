/*
 * Copyright (C) 2013 Neo Visionaries Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


//----------------------------------------------------------------------
// Headers
//----------------------------------------------------------------------
#import <UIKit/UIDevice.h>
#import "System.h"


//----------------------------------------------------------------------
// Static Variables
//----------------------------------------------------------------------
static Version *_version;


//----------------------------------------------------------------------
// Implementation
//----------------------------------------------------------------------
@implementation System


/**
 * Initialization for this class.
 */
+ (void)initialize
{
    // Get the system version of iOS at runtime.
    NSString *versionString = [[UIDevice currentDevice] systemVersion];

    // Convert the version string to a Version instance.
    Version *version = [Version versionWithString:versionString];

    // Set as a class variable.
    _version = version;
}


/**
 * Get iOS version.
 */
+ (Version *)version
{
    return _version;
}


@end
