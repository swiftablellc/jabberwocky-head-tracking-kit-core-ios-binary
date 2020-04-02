# Jabberwocky Head Tracking Kit Core Binary for iOS

The Jabberwocky® Head Tracking Kit (`JabberwockyHTKit`) is an open-source iOS framework, developed by Swiftable LLC, that provides a touch-free interface for existing iOS applications. The `JabberwockyHTKitCore` is a proprietary framework used by `JabberwockyHTKit` to provide facial gesture analysis and cursor positioning based off of head movement. It is closed source, unlike `JabberwockyHTKit`, but is available under the [Permissive Binary License](https://www.mbed.com/en/licenses/permissive-binary-license/) which means it is free to distribute in its binary form, without modification, provided the conditions of the license are met.

Both `JabberwockyHTKit` and `JabberwockyHTKitCore` are available in the [Jabberwocky CocoaPods Spec Repo](https://github.com/swiftablellc/jabberwocky-specs-repo) and may be pushed to the master CocoaPods repo in the future.

See [JabberwockyHTKit](https://github.com/swiftablellc/jabberwocky-head-tracking-kit-ios) for more information on installation, integration, examples, and tutorials.

## What does JabberwockyHTKitCore do?

`JabberwockyHTKitCore` consists primarily of a `UIViewController` called `HTCameraViewController` that analyzes camera input and emits `NSNotification`s for cursor position updates and facial gesture triggers.

Configuration and initialization of `HeadTrackingCore` can be found in [HeadTracking](https://github.com/swiftablellc/jabberwocky-head-tracking-kit-ios/blob/master/JabberwockyHTKit/Configuration/HeadTracking.swift) from `JabberwockyHTKit`. See `NSNotification` definitions in [JabberwockyHTKitCore-Swift.h](https://github.com/swiftablellc/jabberwocky-head-tracking-kit-core-ios-binary/blob/master/JabberwockyHTKitCore.framework/Headers/JabberwockyHTKitCore-Swift.h) for more information on what notifications are emitted from `HTCameraViewController`. You can see examples of these in use in `HTFeature` implementations in [JabberwockyHTKit](https://github.com/swiftablellc/jabberwocky-head-tracking-kit-ios).


## CocoaPods installation

Though it is unlikely that integration of `JabberwockyHTKitCore` is done without `JabberwockyHTKit` or a fork of `JabberwockyHTKit`, the `JabberwockyHTKitCore` framework can be installed via CocoaPods.

* The following `Podfile` can be created by changing `$YOUR_TARGET`:

```shell script
source 'https://github.com/swiftablellc/jabberwocky-specs-repo.git'
source 'https://github.com/CocoaPods/Specs.git'

use_frameworks!
platform :ios, '12.0'

target '$YOUR_TARGET' do
  pod 'JabberwockyHTKitCore'
end
```

* Install the Pod

```shell script
pod install
```



## Trademarks

Jabberwocky® is a registered trademark of Swiftable LLC.
