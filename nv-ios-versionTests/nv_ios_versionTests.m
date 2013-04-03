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
#import "nv_ios_versionTests.h"
#import "Version.h"


//----------------------------------------------------------------------
// Implementation
//----------------------------------------------------------------------
@implementation nv_ios_versionTests


- (void)setUp
{
    [super setUp];
    
    // Set-up code here.
}


- (void)tearDown
{
    // Tear-down code here.
    
    [super tearDown];
}


- (void)testSystemVersion
{
    NSString *versionString = [[UIDevice currentDevice] systemVersion];

    Version *version = [Version versionWithString:versionString];

    NSLog(@"versionString = %@, version = [%d, %d, %d]", versionString, version.major, version.minor, version.micro);

    STAssertTrue(YES, @"system version");
}


@end
