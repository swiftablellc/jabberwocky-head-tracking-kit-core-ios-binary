# Jabberwocky Head Tracking Kit Core Binary for iOS

![GitHub tag (latest SemVer)](https://img.shields.io/github/v/tag/swiftablellc/jabberwocky-head-tracking-kit-core-ios-binary?label=release&sort=semver) ![Platform](https://img.shields.io/badge/platform-iOS-lightgrey) ![GitHub](https://img.shields.io/badge/license-Permissive%20Binary%201.0-green) 

> Head Tracking Cursor for any iOS app!

![htkit-demo](https://user-images.githubusercontent.com/6625903/82473198-d5ba2080-9a8e-11ea-9c2a-379558bf8b65.gif)

## About

The Jabberwocky® Head Tracking Kit Core (`JabberwockyHTKitCore`) is an open-source iOS framework, developed by [Swiftable LLC](https://www.jabberwockyapp.com), to provide a touch-free interface for existing iOS applications. The `JabberwockyHTKitCore` is a proprietary framework used by `JabberwockyHTKit` to provide facial gesture analysis and cursor positioning based off of head movement. `JabberwockyHTKitCore` is closed source, unlike `JabberwockyHTKit`, but is available under the [Permissive Binary License](https://www.mbed.com/en/licenses/permissive-binary-license/) which means it is free to distribute in its binary form, without modification, provided the conditions of the license are met.

Both `JabberwockyHTKit` and `JabberwockyHTKitCore` are available in the [Jabberwocky CocoaPods Spec Repo](https://github.com/swiftablellc/jabberwocky-specs-repo) and may be pushed to the master CocoaPods repo in the future.

See [JabberwockyHTKit](https://github.com/swiftablellc/jabberwocky-head-tracking-kit-ios) for more information on installation, integration, examples, and tutorials.

## What Does JabberwockyHTKitCore Do?

`JabberwockyHTKitCore` consists primarily of a `UIViewController` called `HTCameraViewController` that analyzes camera input and emits `NSNotification`s for cursor position updates and facial gesture triggers.

Configuration and initialization of `HeadTrackingCore` can be found in [HeadTracking](https://github.com/swiftablellc/jabberwocky-head-tracking-kit-ios/blob/master/JabberwockyHTKit/Configuration/HeadTracking.swift) from `JabberwockyHTKit`. See `NSNotification` definitions in [JabberwockyHTKitCore-Swift.h](https://github.com/swiftablellc/jabberwocky-head-tracking-kit-core-ios-binary/blob/master/JabberwockyHTKitCore.framework/Headers/JabberwockyHTKitCore-Swift.h) for more information on what notifications are emitted from `HTCameraViewController`. You can see examples of these in use in `HTFeature` implementations in [JabberwockyHTKit](https://github.com/swiftablellc/jabberwocky-head-tracking-kit-ios).


## CocoaPods Installation

1. Create  the following `Podfile` and change `$YOUR_TARGET`:

  ```shell script
  source 'https://github.com/swiftablellc/jabberwocky-specs-repo.git'
  source 'https://github.com/CocoaPods/Specs.git'

  use_frameworks!
  platform :ios, '12.0'

  target '$YOUR_TARGET' do
    pod 'JabberwockyHTKitCore'
  end
  ```

2. Install the Pod

  ```shell script
  pod install
  ```

## Trademarks

Jabberwocky® is a registered trademark of Swiftable LLC.

## License

[Permissive Binary License](LICENSE-permissive-binary-license-1.0.txt)
