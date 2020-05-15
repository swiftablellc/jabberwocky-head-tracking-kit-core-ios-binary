/*
Copyright © 2020 Swiftable LLC, All Rights Reserved SPDX-License-Identifier: LicenseRef-PBL

This file and the related binary are licensed under the Permissive Binary License, Version 1.0 (the "License"); you may not use these files except in compliance with the License.

You may obtain a copy of the License here: LICENSE-permissive-binary-license-1.0.txt and at https://www.mbed.com/licenses/PBL-1.0

See the License for the specific language governing permissions and limitations under the License.
*/
// Generated by Apple Swift version 5.2.2 (swiftlang-1103.0.32.6 clang-1103.0.32.51)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import ARKit;
@import CoreFoundation;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import SceneKit;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="JabberwockyHTKitCore",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class HTCursorContext;

SWIFT_CLASS("_TtC20JabberwockyHTKitCore14HTBlinkContext")
@interface HTBlinkContext : NSObject
@property (nonatomic) CFTimeInterval blinkDuration;
@property (nonatomic, strong) HTCursorContext * _Nonnull cursorContext;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class ARSCNView;
@class ARFaceAnchor;
@class NSCoder;
@protocol UIViewControllerTransitionCoordinator;
@class ARSession;
@class NSBundle;

SWIFT_CLASS("_TtC20JabberwockyHTKitCore22HTCameraViewController")
@interface HTCameraViewController : UIViewController <ARSessionDelegate>
@property (nonatomic, strong) ARSCNView * _Nonnull sceneView;
@property (nonatomic, strong) ARFaceAnchor * _Nullable faceAnchor;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)decoder SWIFT_UNAVAILABLE;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id <UIViewControllerTransitionCoordinator> _Nonnull)coordinator;
- (void)session:(ARSession * _Nonnull)session didFailWithError:(NSError * _Nonnull)error;
- (void)sessionWasInterrupted:(ARSession * _Nonnull)session;
- (void)sessionInterruptionEnded:(ARSession * _Nonnull)session;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@protocol SCNSceneRenderer;
@class SCNNode;
@class ARAnchor;
@class ARFrame;

@interface HTCameraViewController (SWIFT_EXTENSION(JabberwockyHTKitCore)) <ARSCNViewDelegate>
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didAddNode:(SCNNode * _Nonnull)node forAnchor:(ARAnchor * _Nonnull)anchor;
- (void)renderer:(id <SCNSceneRenderer> _Nonnull)renderer didUpdateNode:(SCNNode * _Nonnull)node forAnchor:(ARAnchor * _Nonnull)anchor;
- (void)session:(ARSession * _Nonnull)session didUpdateFrame:(ARFrame * _Nonnull)frame;
@end

@class HeadMovementCorrection;

SWIFT_PROTOCOL("_TtP20JabberwockyHTKitCore14HTCoreSettings_")
@protocol HTCoreSettings
@property (nonatomic, strong) HeadMovementCorrection * _Nonnull headMovementCorrection;
@property (nonatomic) float horizontalSensitivity;
@property (nonatomic) float verticalSensitivity;
@end

@class UIView;

SWIFT_CLASS("_TtC20JabberwockyHTKitCore15HTCursorContext")
@interface HTCursorContext : NSObject
@property (nonatomic) CGPoint smoothedScreenPoint;
@property (nonatomic) CGPoint smoothedNormalizedPoint;
@property (nonatomic) BOOL isFaceDetected;
@property (nonatomic) BOOL isMovingFast;
- (CGPoint)convertToPositionInView:(UIView * _Nonnull)view SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) BOOL isOnEdge;
@property (nonatomic, readonly) CFTimeInterval instanceTimeInSeconds;
@property (nonatomic, readonly) CFTimeInterval lastInstanceTimeInSeconds;
@property (nonatomic, readonly) CFTimeInterval secondsSinceLastInstance;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, HTViewSide, closed) {
  HTViewSideBottom = 0,
  HTViewSideLeft = 1,
  HTViewSideRight = 2,
  HTViewSideTop = 3,
};

typedef SWIFT_ENUM(NSInteger, HTWarning, closed) {
  HTWarningFaceLost = 0,
  HTWarningFaceTooClose = 1,
  HTWarningFaceTooFar = 2,
  HTWarningResetReminder = 3,
};


SWIFT_CLASS("_TtC20JabberwockyHTKitCore16HTWarningContext")
@interface HTWarningContext : NSObject
@property (nonatomic) BOOL active;
@property (nonatomic) enum HTWarning warning;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

enum Option : NSInteger;

SWIFT_CLASS("_TtC20JabberwockyHTKitCore22HeadMovementCorrection")
@interface HeadMovementCorrection : NSObject
@property (nonatomic, readonly) enum Option option;
@property (nonatomic, readonly) float realSpeedFactor;
@property (nonatomic, readonly) float noiseSpeedFactor;
@property (nonatomic, readonly) float ignoreBlinksSpeedFactor;
@property (nonatomic, readonly) float minimumDampeningFactor;
- (nullable instancetype)init:(NSString * _Nonnull)rawValue;
- (nonnull instancetype)initWithOption:(enum Option)option OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, Option, closed) {
  OptionHigh = 0,
  OptionMedium = 1,
  OptionLow = 2,
};


SWIFT_CLASS("_TtC20JabberwockyHTKitCore16HeadTrackingCore")
@interface HeadTrackingCore : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) HeadTrackingCore * _Nonnull shared;)
+ (HeadTrackingCore * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@property (nonatomic, strong) id <HTCoreSettings> _Nullable settings;
@property (nonatomic, readonly) BOOL hasCalibratedOnce;
+ (void)configureWithSettings:(id <HTCoreSettings> _Nonnull)settings;
@property (nonatomic, readonly) BOOL isSupportedByDevice;
@property (nonatomic, readonly) BOOL isAuthorizedOnDevice;
@end


@interface NSNotification (SWIFT_EXTENSION(JabberwockyHTKitCore))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull htWarningContextKey;)
+ (NSString * _Nonnull)htWarningContextKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull htWarningNotificationKey;)
+ (NSString * _Nonnull)htWarningNotificationKey SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSNotification (SWIFT_EXTENSION(JabberwockyHTKitCore))
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull htCursorContextKey;)
+ (NSString * _Nonnull)htCursorContextKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull htBlinkContextKey;)
+ (NSString * _Nonnull)htBlinkContextKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull htOnBlinkNotificationKey;)
+ (NSString * _Nonnull)htOnBlinkNotificationKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull htOnCursorPreUpdateNotificationKey;)
+ (NSString * _Nonnull)htOnCursorPreUpdateNotificationKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull htOnCursorUpdateNotificationKey;)
+ (NSString * _Nonnull)htOnCursorUpdateNotificationKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull htOnHeadShakeNotificationKey;)
+ (NSString * _Nonnull)htOnHeadShakeNotificationKey SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull htOnRecalibrateNotificationKey;)
+ (NSString * _Nonnull)htOnRecalibrateNotificationKey SWIFT_WARN_UNUSED_RESULT;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
