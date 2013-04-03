nv-ios-version
==============


Overview
--------

A class that represents version information written in Objective-C.


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
    NSLog(@"version = [%d, %d, %d]", , version.major, version.minor, version.micro);

    // Check whether the version is greater than or equal to 6.0.
    if ([version isGreaterThanOrEqualToMajor:6 minor:0])
    {
        // The iOS version is greater than or equal to 6.0.
    }


Author
------

Takahiko Kawasaki, Neo Visionaries Inc.
