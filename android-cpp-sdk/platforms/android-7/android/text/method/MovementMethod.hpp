/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.method.MovementMethod
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_MOVEMENTMETHOD_HPP_DECL
#define J2CPP_ANDROID_TEXT_METHOD_MOVEMENTMETHOD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace view { class MotionEvent; } } }
namespace j2cpp { namespace android { namespace text { class Spannable; } } }
namespace j2cpp { namespace android { namespace widget { class TextView; } } }


#include <android/text/Spannable.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/view/MotionEvent.hpp>
#include <android/widget/TextView.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace method {

	class MovementMethod;
	class MovementMethod
		: public object<MovementMethod>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)

		explicit MovementMethod(jobject jobj)
		: object<MovementMethod>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void initialize(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&);
		jboolean onKeyDown(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyUp(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		jboolean onKeyOther(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&, local_ref< android::view::KeyEvent >  const&);
		void onTakeFocus(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&, jint);
		jboolean onTrackballEvent(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&, local_ref< android::view::MotionEvent >  const&);
		jboolean onTouchEvent(local_ref< android::widget::TextView >  const&, local_ref< android::text::Spannable >  const&, local_ref< android::view::MotionEvent >  const&);
		jboolean canSelectArbitrarily();
	}; //class MovementMethod

} //namespace method
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_MOVEMENTMETHOD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_METHOD_MOVEMENTMETHOD_HPP_IMPL
#define J2CPP_ANDROID_TEXT_METHOD_MOVEMENTMETHOD_HPP_IMPL

namespace j2cpp {



android::text::method::MovementMethod::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::text::method::MovementMethod::initialize(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1)
{
	return call_method<
		android::text::method::MovementMethod::J2CPP_CLASS_NAME,
		android::text::method::MovementMethod::J2CPP_METHOD_NAME(0),
		android::text::method::MovementMethod::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}

jboolean android::text::method::MovementMethod::onKeyDown(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::MovementMethod::J2CPP_CLASS_NAME,
		android::text::method::MovementMethod::J2CPP_METHOD_NAME(1),
		android::text::method::MovementMethod::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::text::method::MovementMethod::onKeyUp(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, jint a2, local_ref< android::view::KeyEvent > const &a3)
{
	return call_method<
		android::text::method::MovementMethod::J2CPP_CLASS_NAME,
		android::text::method::MovementMethod::J2CPP_METHOD_NAME(2),
		android::text::method::MovementMethod::J2CPP_METHOD_SIGNATURE(2), 
		jboolean >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::text::method::MovementMethod::onKeyOther(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, local_ref< android::view::KeyEvent > const &a2)
{
	return call_method<
		android::text::method::MovementMethod::J2CPP_CLASS_NAME,
		android::text::method::MovementMethod::J2CPP_METHOD_NAME(3),
		android::text::method::MovementMethod::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

void android::text::method::MovementMethod::onTakeFocus(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, jint a2)
{
	return call_method<
		android::text::method::MovementMethod::J2CPP_CLASS_NAME,
		android::text::method::MovementMethod::J2CPP_METHOD_NAME(4),
		android::text::method::MovementMethod::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1, a2);
}

jboolean android::text::method::MovementMethod::onTrackballEvent(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, local_ref< android::view::MotionEvent > const &a2)
{
	return call_method<
		android::text::method::MovementMethod::J2CPP_CLASS_NAME,
		android::text::method::MovementMethod::J2CPP_METHOD_NAME(5),
		android::text::method::MovementMethod::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean android::text::method::MovementMethod::onTouchEvent(local_ref< android::widget::TextView > const &a0, local_ref< android::text::Spannable > const &a1, local_ref< android::view::MotionEvent > const &a2)
{
	return call_method<
		android::text::method::MovementMethod::J2CPP_CLASS_NAME,
		android::text::method::MovementMethod::J2CPP_METHOD_NAME(6),
		android::text::method::MovementMethod::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

jboolean android::text::method::MovementMethod::canSelectArbitrarily()
{
	return call_method<
		android::text::method::MovementMethod::J2CPP_CLASS_NAME,
		android::text::method::MovementMethod::J2CPP_METHOD_NAME(7),
		android::text::method::MovementMethod::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::text::method::MovementMethod,"android/text/method/MovementMethod")
J2CPP_DEFINE_METHOD(android::text::method::MovementMethod,0,"initialize","(Landroid/widget/TextView;Landroid/text/Spannable;)V")
J2CPP_DEFINE_METHOD(android::text::method::MovementMethod,1,"onKeyDown","(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::MovementMethod,2,"onKeyUp","(Landroid/widget/TextView;Landroid/text/Spannable;ILandroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::MovementMethod,3,"onKeyOther","(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::MovementMethod,4,"onTakeFocus","(Landroid/widget/TextView;Landroid/text/Spannable;I)V")
J2CPP_DEFINE_METHOD(android::text::method::MovementMethod,5,"onTrackballEvent","(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::MovementMethod,6,"onTouchEvent","(Landroid/widget/TextView;Landroid/text/Spannable;Landroid/view/MotionEvent;)Z")
J2CPP_DEFINE_METHOD(android::text::method::MovementMethod,7,"canSelectArbitrarily","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_METHOD_MOVEMENTMETHOD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
