// Generated by Apple Swift version 4.2.1 effective-4.1.50 (swiftlang-1000.11.42 clang-1000.11.45.1)
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
#include <objc/NSObject.h>
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
#if __has_feature(modules)
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
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
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MessageKit",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSCoder;
@class UIImage;

SWIFT_CLASS("_TtC10MessageKit10AvatarView")
@interface AvatarView : UIImageView
@property (nonatomic) CGRect frame;
@property (nonatomic) CGRect bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image SWIFT_UNAVAILABLE;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage SWIFT_UNAVAILABLE;
@end




/// A InputItem that inherits from UIButton
/// <h2>Important Notes</h2>
/// <ol>
///   <li>
///     Intended to be used in an <code>InputStackView</code>
///   </li>
/// </ol>
SWIFT_CLASS("_TtC10MessageKit18InputBarButtonItem")
@interface InputBarButtonItem : UIButton
@property (nonatomic, readonly) CGSize intrinsicContentSize;
/// Calls the onSelectedAction or onDeselectedAction when set
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
/// Calls the onEnabledAction or onDisabledAction when set
@property (nonatomic, getter=isEnabled) BOOL enabled;
- (nonnull instancetype)init;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Executes the onTouchUpInsideAction
- (void)touchUpInsideAction;
@end


/// A UIStackView that’s intended for holding <code>InputBarButtonItem</code>s
/// <h2>Important Notes</h2>
/// <ol>
///   <li>
///     Default alignment is .fill
///   </li>
///   <li>
///     Default distribution is .fill
///   </li>
///   <li>
///     The distribution property needs to be based on its arranged subviews intrinsicContentSize so it is not recommended to change it
///   </li>
/// </ol>
SWIFT_CLASS("_TtC10MessageKit14InputStackView")
@interface InputStackView : UIStackView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSAttributedString;
@class UIFont;
@class NSTextContainer;

/// A UITextView that has a UILabel embedded for placeholder text
/// <h2>Important Notes</h2>
/// <ol>
///   <li>
///     Changing the font, textAlignment or textContainerInset automatically performs the same modifications to the placeholderLabel
///   </li>
///   <li>
///     Intended to be used in an <code>MessageInputBar</code>
///   </li>
///   <li>
///     Default placeholder text is “New Message”
///   </li>
///   <li>
///     Will pass a pasted image it’s <code>MessageInputBar</code>’s <code>InputManager</code>s
///   </li>
/// </ol>
SWIFT_CLASS("_TtC10MessageKit13InputTextView")
@interface InputTextView : UITextView
@property (nonatomic, copy) NSString * _Null_unspecified text;
@property (nonatomic, strong) NSAttributedString * _Null_unspecified attributedText;
/// The font of the InputTextView. When set the placeholderLabel’s font is also updated
@property (nonatomic, strong) UIFont * _Null_unspecified font;
/// The textAlignment of the InputTextView. When set the placeholderLabel’s textAlignment is also updated
@property (nonatomic) NSTextAlignment textAlignment;
@property (nonatomic) UIEdgeInsets scrollIndicatorInsets;
- (nonnull instancetype)init;
- (nonnull instancetype)initWithFrame:(CGRect)frame textContainer:(NSTextContainer * _Nullable)textContainer OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (BOOL)canPerformAction:(SEL _Nonnull)action withSender:(id _Nullable)sender SWIFT_WARN_UNUSED_RESULT;
- (void)paste:(id _Nullable)sender;
@end


SWIFT_CLASS("_TtC10MessageKit10InsetLabel")
@interface InsetLabel : UILabel
- (void)drawTextInRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// A subclass of <code>UICollectionViewCell</code> to be used inside of a <code>MessagesCollectionView</code>.
SWIFT_CLASS("_TtC10MessageKit25MessageCollectionViewCell")
@interface MessageCollectionViewCell : UICollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionViewLayoutAttributes;
@class UIGestureRecognizer;

/// A subclass of <code>MessageCollectionViewCell</code> used to display text, media, and location messages.
SWIFT_CLASS("_TtC10MessageKit18MessageContentCell")
@interface MessageContentCell : MessageCollectionViewCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(UICollectionViewLayoutAttributes * _Nonnull)layoutAttributes;
/// Handle long press gesture, return true when gestureRecognizer’s touch point in <code>messageContainerView</code>’s frame
- (BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer * _Nonnull)gestureRecognizer SWIFT_WARN_UNUSED_RESULT;
@end


/// A subclass of <code>MessageContentCell</code> used to display location messages.
SWIFT_CLASS("_TtC10MessageKit19LocationMessageCell")
@interface LocationMessageCell : MessageContentCell
- (void)prepareForReuse;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// A subclass of <code>MessageContentCell</code> used to display video and audio messages.
SWIFT_CLASS("_TtC10MessageKit16MediaMessageCell")
@interface MediaMessageCell : MessageContentCell
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC10MessageKit20MessageContainerView")
@interface MessageContainerView : UIImageView
@property (nonatomic) CGRect frame;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithImage:(UIImage * _Nullable)image highlightedImage:(UIImage * _Nullable)highlightedImage OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


@class UITraitCollection;

/// A powerful InputAccessoryView ideal for messaging applications
SWIFT_CLASS("_TtC10MessageKit15MessageInputBar")
@interface MessageInputBar : UIView
/// Returns the most recent size calculated by <code>calculateIntrinsicContentSize()</code>
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (nonnull instancetype)init;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)didMoveToWindow;
/// Invalidates the view’s intrinsic content size
- (void)invalidateIntrinsicContentSize;
/// Invalidates the intrinsicContentSize
- (void)traitCollectionDidChange:(UITraitCollection * _Nullable)previousTraitCollection;
/// Enables/Disables the sendButton based on the InputTextView’s text being empty
/// Calls each items <code>textViewDidChangeAction</code> method
/// Calls the delegates <code>textViewTextDidChangeTo</code> method
/// Invalidates the intrinsicContentSize
- (void)textViewDidChange;
/// Calls each items <code>keyboardEditingBeginsAction</code> method
/// Invalidates the intrinsicContentSize so that the keyboard does not overlap the view
- (void)textViewDidBeginEditing;
/// Calls each items <code>keyboardEditingEndsAction</code> method
- (void)textViewDidEndEditing;
@end

@class UIColor;

SWIFT_CLASS("_TtC10MessageKit12MessageLabel")
@interface MessageLabel : UILabel
@property (nonatomic, strong) NSAttributedString * _Nullable attributedText;
@property (nonatomic, copy) NSString * _Nullable text;
@property (nonatomic, strong) UIFont * _Null_unspecified font;
@property (nonatomic, strong) UIColor * _Null_unspecified textColor;
@property (nonatomic) NSLineBreakMode lineBreakMode;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) NSTextAlignment textAlignment;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)drawTextInRect:(CGRect)rect;
@end


SWIFT_CLASS("_TtC10MessageKit19MessageReusableView")
@interface MessageReusableView : UICollectionReusableView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UICollectionViewLayout;

SWIFT_CLASS("_TtC10MessageKit22MessagesCollectionView")
@interface MessagesCollectionView : UICollectionView
- (nonnull instancetype)initWithFrame:(CGRect)frame collectionViewLayout:(UICollectionViewLayout * _Nonnull)layout OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init;
- (void)handleTapGesture:(UIGestureRecognizer * _Nonnull)gesture;
@end

@class UICollectionViewLayoutInvalidationContext;

/// The layout object used by <code>MessagesCollectionView</code> to determine the size of all
/// framework provided <code>MessageCollectionViewCell</code> subclasses.
SWIFT_CLASS("_TtC10MessageKit32MessagesCollectionViewFlowLayout")
@interface MessagesCollectionViewFlowLayout : UICollectionViewFlowLayout
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) Class _Nonnull layoutAttributesClass;)
+ (Class _Nonnull)layoutAttributesClass SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (NSArray<UICollectionViewLayoutAttributes *> * _Nullable)layoutAttributesForElementsInRect:(CGRect)rect SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewLayoutAttributes * _Nullable)layoutAttributesForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)newBounds SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewLayoutInvalidationContext * _Nonnull)invalidationContextForBoundsChange:(CGRect)newBounds SWIFT_WARN_UNUSED_RESULT;
@end


/// The layout attributes used by a <code>MessageCollectionViewCell</code> to layout its subviews.
SWIFT_CLASS("_TtC10MessageKit38MessagesCollectionViewLayoutAttributes")
@interface MessagesCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
- (id _Nonnull)copyWithZone:(struct _NSZone * _Nullable)zone SWIFT_WARN_UNUSED_RESULT;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A subclass of <code>UIViewController</code> with a <code>MessagesCollectionView</code> object
/// that is used to display conversation interfaces.
SWIFT_CLASS("_TtC10MessageKit22MessagesViewController")
@interface MessagesViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic, readonly, strong) UIView * _Nullable inputAccessoryView;
@property (nonatomic, readonly) BOOL shouldAutorotate;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (NSInteger)numberOfSectionsInCollectionView:(UICollectionView * _Nonnull)collectionView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)collectionView:(UICollectionView * _Nonnull)collectionView numberOfItemsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UICollectionViewCell * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView cellForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (UICollectionReusableView * _Nonnull)collectionView:(UICollectionView * _Nonnull)collectionView viewForSupplementaryElementOfKind:(NSString * _Nonnull)kind atIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout sizeForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout referenceSizeForHeaderInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (CGSize)collectionView:(UICollectionView * _Nonnull)collectionView layout:(UICollectionViewLayout * _Nonnull)collectionViewLayout referenceSizeForFooterInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (BOOL)collectionView:(UICollectionView * _Nonnull)collectionView shouldShowMenuForItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (BOOL)collectionView:(UICollectionView * _Nonnull)collectionView canPerformAction:(SEL _Nonnull)action forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath withSender:(id _Nullable)sender SWIFT_WARN_UNUSED_RESULT;
- (void)collectionView:(UICollectionView * _Nonnull)collectionView performAction:(SEL _Nonnull)action forItemAtIndexPath:(NSIndexPath * _Nonnull)indexPath withSender:(id _Nullable)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end








SWIFT_CLASS("_TtC10MessageKit14PlayButtonView")
@interface PlayButtonView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)layoutSubviews;
@end


/// A UIView thats intrinsicContentSize is overrided so an exact height can be specified
/// <h2>Important Notes</h2>
/// <ol>
///   <li>
///     Default height is 1.0
///   </li>
///   <li>
///     Default backgroundColor is UIColor.lightGray
///   </li>
///   <li>
///     Intended to be used in an <code>InputStackView</code>
///   </li>
/// </ol>
SWIFT_CLASS("_TtC10MessageKit13SeparatorLine")
@interface SeparatorLine : UIView
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


/// A subclass of <code>MessageContentCell</code> used to display text messages.
SWIFT_CLASS("_TtC10MessageKit15TextMessageCell")
@interface TextMessageCell : MessageContentCell
- (void)applyLayoutAttributes:(UICollectionViewLayoutAttributes * _Nonnull)layoutAttributes;
- (void)prepareForReuse;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end





#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
