/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.graphics.SumPathEffect
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_SUMPATHEFFECT_HPP_DECL
#define J2CPP_ANDROID_GRAPHICS_SUMPATHEFFECT_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { class PathEffect; } } }


#include <android/graphics/PathEffect.hpp>


namespace j2cpp {

namespace android { namespace graphics {

	class SumPathEffect;
	class SumPathEffect
		: public object<SumPathEffect>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit SumPathEffect(jobject jobj)
		: object<SumPathEffect>(jobj)
		{
		}

		operator local_ref<android::graphics::PathEffect>() const;


		SumPathEffect(local_ref< android::graphics::PathEffect > const&, local_ref< android::graphics::PathEffect > const&);
	}; //class SumPathEffect

} //namespace graphics
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_SUMPATHEFFECT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_GRAPHICS_SUMPATHEFFECT_HPP_IMPL
#define J2CPP_ANDROID_GRAPHICS_SUMPATHEFFECT_HPP_IMPL

namespace j2cpp {



android::graphics::SumPathEffect::operator local_ref<android::graphics::PathEffect>() const
{
	return local_ref<android::graphics::PathEffect>(get_jobject());
}


android::graphics::SumPathEffect::SumPathEffect(local_ref< android::graphics::PathEffect > const &a0, local_ref< android::graphics::PathEffect > const &a1)
: object<android::graphics::SumPathEffect>(
	call_new_object<
		android::graphics::SumPathEffect::J2CPP_CLASS_NAME,
		android::graphics::SumPathEffect::J2CPP_METHOD_NAME(0),
		android::graphics::SumPathEffect::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(android::graphics::SumPathEffect,"android/graphics/SumPathEffect")
J2CPP_DEFINE_METHOD(android::graphics::SumPathEffect,0,"<init>","(Landroid/graphics/PathEffect;Landroid/graphics/PathEffect;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_GRAPHICS_SUMPATHEFFECT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
