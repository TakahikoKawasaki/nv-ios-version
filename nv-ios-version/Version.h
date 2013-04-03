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
#import <Foundation/Foundation.h>


//----------------------------------------------------------------------
// Interface
//----------------------------------------------------------------------
/**
 * A class that represents version information.
 *
 * The version information consists of a major number, a minor number
 * and a micro number.
 *
 * @author Takahiko Kawasaki
 */
@interface Version : NSObject
#pragma mark -
#pragma mark Initializers
- (id)init;
- (id)initWithMajor:(int)major;
- (id)initWithMajor:(int)major minor:(int)minor;
- (id)initWithMajor:(int)major minor:(int)minor micro:(int)micro;
- (id)initWithString:(NSString *)string;

#pragma mark -
#pragma mark Getters
- (int)major;
- (int)minor;
- (int)micro;
- (int)number;
- (NSString *)description;

#pragma mark -
#pragma mark Setters
- (void)setMajor:(int)major;
- (void)setMajor:(int)major minor:(int)minor;
- (void)setMajor:(int)major minor:(int)minor micro:(int)micro;
- (void)setMinor:(int)minor;
- (void)setMinor:(int)minor micro:(int)micro;
- (void)setMicro:(int)micro;

#pragma mark -
#pragma mark Comparison
- (NSComparisonResult)compareToMajor:(int)major;
- (NSComparisonResult)compareToMajor:(int)major minor:(int)minor;
- (NSComparisonResult)compareToMajor:(int)major minor:(int)minor micro:(int)micro;
- (NSComparisonResult)compareToNumber:(int)number;
- (NSComparisonResult)compareTo:(Version *)aVersion;

#pragma mark -
#pragma mark Comparison (equal to)
- (BOOL)isEqualToMajor:(int)major;
- (BOOL)isEqualToMajor:(int)major minor:(int)minor;
- (BOOL)isEqualToMajor:(int)major minor:(int)minor micro:(int)micro;
- (BOOL)isEqualToNumber:(int)number;
- (BOOL)isEqualTo:(Version *)aVersion;

#pragma mark -
#pragma mark Comparison (not equal to)
- (BOOL)isNotEqualToMajor:(int)major;
- (BOOL)isNotEqualToMajor:(int)major minor:(int)minor;
- (BOOL)isNotEqualToMajor:(int)major minor:(int)minor micro:(int)micro;
- (BOOL)isNotEqualToNumber:(int)number;
- (BOOL)isNotEqualTo:(Version *)aVersion;

#pragma mark -
#pragma mark Comparison (less than)
- (BOOL)isLessThanMajor:(int)major;
- (BOOL)isLessThanMajor:(int)major minor:(int)minor;
- (BOOL)isLessThanMajor:(int)major minor:(int)minor micro:(int)micro;
- (BOOL)isLessThanNumber:(int)number;
- (BOOL)isLessThan:(Version *)aVersion;

#pragma mark -
#pragma mark Comparison (less than or equal to)
- (BOOL)isLessThanOrEqualToMajor:(int)major;
- (BOOL)isLessThanOrEqualToMajor:(int)major minor:(int)minor;
- (BOOL)isLessThanOrEqualToMajor:(int)major minor:(int)minor micro:(int)micro;
- (BOOL)isLessThanOrEqualToNumber:(int)number;
- (BOOL)isLessThanOrEqualTo:(Version *)aVersion;

#pragma mark -
#pragma mark Comparison (greater than)
- (BOOL)isGreaterThanMajor:(int)major;
- (BOOL)isGreaterThanMajor:(int)major minor:(int)minor;
- (BOOL)isGreaterThanMajor:(int)major minor:(int)minor micro:(int)micro;
- (BOOL)isGreaterThanNumber:(int)number;
- (BOOL)isGreaterThan:(Version *)aVersion;

#pragma mark -
#pragma mark Comparison (greater than or equal to)
- (BOOL)isGreaterThanOrEqualToMajor:(int)major;
- (BOOL)isGreaterThanOrEqualToMajor:(int)major minor:(int)minor;
- (BOOL)isGreaterThanOrEqualToMajor:(int)major minor:(int)minor micro:(int)micro;
- (BOOL)isGreaterThanOrEqualToNumber:(int)number;
- (BOOL)isGreaterThanOrEqualTo:(Version *)aVersion;

#pragma mark -
#pragma mark Convenience Constructors
+ (Version *)versionWithMajor:(int)major;
+ (Version *)versionWithMajor:(int)major minor:(int)minor;
+ (Version *)versionWithMajor:(int)major minor:(int)minor micro:(int)micro;
+ (Version *)versionWithString:(NSString *)string;
@end
