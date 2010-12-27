/*================================================================================
  code generated by: java2cpp
  class: android.graphics.PathDashPathEffect
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace graphics { namespace PathDashPathEffect_ { class Style; } } } }
namespace j2cpp { namespace android { namespace graphics { class Path; } } }


#include <android/graphics/Path.hpp>
#include <android/graphics/PathDashPathEffect.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class PathDashPathEffect;
	namespace PathDashPathEffect_ {

		class Style;
		class Style
			: public cpp_object<Style>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			Style(jobject jobj)
			: cpp_object<Style>(jobj)
			{
			}

			static local_ref< cpp_object_array<android::graphics::PathDashPathEffect_::Style, 1> > values();
			static local_ref< android::graphics::PathDashPathEffect_::Style > valueOf(local_ref< java::lang::String > const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< android::graphics::PathDashPathEffect_::Style > > MORPH;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< android::graphics::PathDashPathEffect_::Style > > ROTATE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< android::graphics::PathDashPathEffect_::Style > > TRANSLATE;
		}; //class Style

	} //namespace PathDashPathEffect_

	class PathDashPathEffect
		: public cpp_object<PathDashPathEffect>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		typedef PathDashPathEffect_::Style Style;

		PathDashPathEffect(jobject jobj)
		: cpp_object<PathDashPathEffect>(jobj)
		{
		}

	}; //class PathDashPathEffect

} //namespace graphics
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_IMPL

namespace j2cpp {



local_ref< cpp_object_array<android::graphics::PathDashPathEffect_::Style, 1> > android::graphics::PathDashPathEffect_::Style::values()
{
	return local_ref< cpp_object_array<android::graphics::PathDashPathEffect_::Style, 1> >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), true>()
		)
	);
}

local_ref< android::graphics::PathDashPathEffect_::Style > android::graphics::PathDashPathEffect_::Style::valueOf(local_ref< java::lang::String > const &a0)
{
	return local_ref< android::graphics::PathDashPathEffect_::Style >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::graphics::PathDashPathEffect_::Style > create< android::graphics::PathDashPathEffect_::Style>(local_ref< java::lang::String > const &a0, cpp_int const &a1)
{
	return local_ref< android::graphics::PathDashPathEffect_::Style >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::PathDashPathEffect_::Style::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::PathDashPathEffect_::Style::J2CPP_CLASS_NAME, android::graphics::PathDashPathEffect_::Style::J2CPP_METHOD_NAME(2), android::graphics::PathDashPathEffect_::Style::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::graphics::PathDashPathEffect_::Style::J2CPP_CLASS_NAME,
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_NAME(0),
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_SIGNATURE(0),
	local_ref< android::graphics::PathDashPathEffect_::Style >
> android::graphics::PathDashPathEffect_::Style::MORPH;

static_field<
	android::graphics::PathDashPathEffect_::Style::J2CPP_CLASS_NAME,
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_NAME(1),
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_SIGNATURE(1),
	local_ref< android::graphics::PathDashPathEffect_::Style >
> android::graphics::PathDashPathEffect_::Style::ROTATE;

static_field<
	android::graphics::PathDashPathEffect_::Style::J2CPP_CLASS_NAME,
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_NAME(2),
	android::graphics::PathDashPathEffect_::Style::J2CPP_FIELD_SIGNATURE(2),
	local_ref< android::graphics::PathDashPathEffect_::Style >
> android::graphics::PathDashPathEffect_::Style::TRANSLATE;


J2CPP_DEFINE_CLASS(android::graphics::PathDashPathEffect_::Style,"android/graphics/PathDashPathEffect$Style")
J2CPP_DEFINE_METHOD(android::graphics::PathDashPathEffect_::Style,0,"values","()[android.graphics.PathDashPathEffect.Style")
J2CPP_DEFINE_METHOD(android::graphics::PathDashPathEffect_::Style,1,"valueOf","(Ljava/lang/String;)Landroid/graphics/PathDashPathEffect$Style;")
J2CPP_DEFINE_METHOD(android::graphics::PathDashPathEffect_::Style,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(android::graphics::PathDashPathEffect_::Style,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::graphics::PathDashPathEffect_::Style,0,"MORPH","Landroid/graphics/PathDashPathEffect$Style;")
J2CPP_DEFINE_FIELD(android::graphics::PathDashPathEffect_::Style,1,"ROTATE","Landroid/graphics/PathDashPathEffect$Style;")
J2CPP_DEFINE_FIELD(android::graphics::PathDashPathEffect_::Style,2,"TRANSLATE","Landroid/graphics/PathDashPathEffect$Style;")
J2CPP_DEFINE_FIELD(android::graphics::PathDashPathEffect_::Style,3,"$VALUES","[android.graphics.PathDashPathEffect.Style")


template <>
local_ref< android::graphics::PathDashPathEffect > create< android::graphics::PathDashPathEffect>(local_ref< android::graphics::Path > const &a0, cpp_float const &a1, cpp_float const &a2, local_ref< android::graphics::PathDashPathEffect_::Style > const &a3)
{
	return local_ref< android::graphics::PathDashPathEffect >(
		environment::get().get_jenv()->NewObject(
			get_class<android::graphics::PathDashPathEffect::J2CPP_CLASS_NAME>(),
			get_method_id<android::graphics::PathDashPathEffect::J2CPP_CLASS_NAME, android::graphics::PathDashPathEffect::J2CPP_METHOD_NAME(0), android::graphics::PathDashPathEffect::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::graphics::PathDashPathEffect,"android/graphics/PathDashPathEffect")
J2CPP_DEFINE_METHOD(android::graphics::PathDashPathEffect,0,"<init>","(Landroid/graphics/Path;FFLandroid/graphics/PathDashPathEffect$Style;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_PATHDASHPATHEFFECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION