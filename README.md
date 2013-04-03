nv-ios-version
==============


Overview
--------

This project provides an Objective-C class that represents version information.
The main purpose is to parse the version string returned from
`[[UIDevice currentDevice] systemVersion]` and construct an instance of
`Version` class that provides utility methods and thus makes it easy to
get and compare iOS version at runtime.


License
-------

Apache License, Version 2.0


Download
--------

    git clone https://github.com/TakahikoKawasaki/nv-ios-version.git


Example
-------

    // Get the system version of iOS at runtime.
    NSString *versionString = [[UIDevice currentDevice] systemVersion];

    // Convert the version string to a Version instance.
    Version *version = [Version versionWithString:versionString];

    // Dump the major, minor and micro version numbers.
    NSLog(@"version = [%d, %d, %d]", version.major, version.minor, version.micro);

    // 'description' method returns major.minor, or major.minor.micro
    // when micro version is not 0. For example, "6.1" is returned for
    // version 6.1.0 and "6.1.1" is returned for version 6.1.1.
    // In either case, a Version instance can be put as an argument of NSLog().
    NSLog(@"version = %@", version);

    // Check whether the version is greater than or equal to 6.0.
    if ([version isGreaterThanOrEqualToMajor:6 minor:0])
    {
        // The iOS version is greater than or equal to 6.0.
    }

    // Another way to check whether the version is greater than or equal to 6.0.
    if (version.major >= 6)
    {
        // The iOS version is greater than or equal to 6.0.
    }

As a sample code, `System` class is contained in this project.
The class has a class method `version` which returns a `Version`
instance that represents iOS version. With the `System` class,
version checking becomes like below.

    if (System.version.major >= 6)
    {
        // The iOS version is greater than or equal to 6.0.
    }


Blog
----

[Get and compare iOS version at runtime with Version class]
(http://darutk-oboegaki.blogspot.jp/2013/04/get-and-compare-ios-version-at-runtime.html)


Author
------

Takahiko Kawasaki, Neo Visionaries Inc.
