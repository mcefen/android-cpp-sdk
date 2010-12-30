/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.opengl.Visibility
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_VISIBILITY_HPP_DECL
#define J2CPP_ANDROID_OPENGL_VISIBILITY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace opengl {

	class Visibility;
	class Visibility
		: public object<Visibility>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit Visibility(jobject jobj)
		: object<Visibility>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		Visibility();
		static jint visibilityTest(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jchar,1> >  const&, jint, jint);
		static jint frustumCullSpheres(local_ref< array<jfloat,1> >  const&, jint, local_ref< array<jfloat,1> >  const&, jint, jint, local_ref< array<jint,1> >  const&, jint, jint);
		static void computeBoundingSphere(local_ref< array<jfloat,1> >  const&, jint, jint, local_ref< array<jfloat,1> >  const&, jint);
	}; //class Visibility

} //namespace opengl
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_VISIBILITY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OPENGL_VISIBILITY_HPP_IMPL
#define J2CPP_ANDROID_OPENGL_VISIBILITY_HPP_IMPL

namespace j2cpp {



android::opengl::Visibility::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::opengl::Visibility::Visibility()
: object<android::opengl::Visibility>(
	call_new_object<
		android::opengl::Visibility::J2CPP_CLASS_NAME,
		android::opengl::Visibility::J2CPP_METHOD_NAME(0),
		android::opengl::Visibility::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jint android::opengl::Visibility::visibilityTest(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3, local_ref< array<jchar,1> > const &a4, jint a5, jint a6)
{
	return call_static_method<
		android::opengl::Visibility::J2CPP_CLASS_NAME,
		android::opengl::Visibility::J2CPP_METHOD_NAME(1),
		android::opengl::Visibility::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(a0, a1, a2, a3, a4, a5, a6);
}

jint android::opengl::Visibility::frustumCullSpheres(local_ref< array<jfloat,1> > const &a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3, jint a4, local_ref< array<jint,1> > const &a5, jint a6, jint a7)
{
	return call_static_method<
		android::opengl::Visibility::J2CPP_CLASS_NAME,
		android::opengl::Visibility::J2CPP_METHOD_NAME(2),
		android::opengl::Visibility::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(a0, a1, a2, a3, a4, a5, a6, a7);
}

void android::opengl::Visibility::computeBoundingSphere(local_ref< array<jfloat,1> > const &a0, jint a1, jint a2, local_ref< array<jfloat,1> > const &a3, jint a4)
{
	return call_static_method<
		android::opengl::Visibility::J2CPP_CLASS_NAME,
		android::opengl::Visibility::J2CPP_METHOD_NAME(3),
		android::opengl::Visibility::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(a0, a1, a2, a3, a4);
}


J2CPP_DEFINE_CLASS(android::opengl::Visibility,"android/opengl/Visibility")
J2CPP_DEFINE_METHOD(android::opengl::Visibility,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::opengl::Visibility,1,"visibilityTest","([FI[FI[CII)I")
J2CPP_DEFINE_METHOD(android::opengl::Visibility,2,"frustumCullSpheres","([FI[FII[III)I")
J2CPP_DEFINE_METHOD(android::opengl::Visibility,3,"computeBoundingSphere","([FII[FI)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OPENGL_VISIBILITY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
