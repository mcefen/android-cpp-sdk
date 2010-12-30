/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.Surface
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_SURFACE_HPP_DECL
#define J2CPP_ANDROID_VIEW_SURFACE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Region; } } }
namespace j2cpp { namespace android { namespace graphics { class Rect; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }
namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }


#include <android/graphics/Canvas.hpp>
#include <android/graphics/Rect.hpp>
#include <android/graphics/Region.hpp>
#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace view {

	class Surface;
	namespace Surface_ {

		class OutOfResourcesException;
		class OutOfResourcesException
			: public object<OutOfResourcesException>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)

			explicit OutOfResourcesException(jobject jobj)
			: object<OutOfResourcesException>(jobj)
			{
			}

			operator local_ref<java::lang::Exception>() const;


			OutOfResourcesException();
			OutOfResourcesException(local_ref< java::lang::String > const&);
		}; //class OutOfResourcesException

	} //namespace Surface_

	class Surface
		: public object<Surface>
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
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)

		typedef Surface_::OutOfResourcesException OutOfResourcesException;

		explicit Surface(jobject jobj)
		: object<Surface>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		jboolean isValid();
		local_ref< android::graphics::Canvas > lockCanvas(local_ref< android::graphics::Rect >  const&);
		void unlockCanvasAndPost(local_ref< android::graphics::Canvas >  const&);
		void unlockCanvas(local_ref< android::graphics::Canvas >  const&);
		static void setOrientation(jint, jint);
		void setLayer(jint);
		void setPosition(jint, jint);
		void setSize(jint, jint);
		void hide();
		void show();
		void setTransparentRegionHint(local_ref< android::graphics::Region >  const&);
		void setAlpha(jfloat);
		void setMatrix(jfloat, jfloat, jfloat, jfloat);
		void freeze();
		void unfreeze();
		void setFreezeTint(jint);
		void setFlags(jint, jint);
		local_ref< java::lang::String > toString();
		jint describeContents();
		void readFromParcel(local_ref< android::os::Parcel >  const&);
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > HIDDEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > HARDWARE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > GPU;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > SECURE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > NON_PREMULTIPLIED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > PUSH_BUFFERS;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > FX_SURFACE_NORMAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > FX_SURFACE_BLUR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > FX_SURFACE_DIM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > FX_SURFACE_MASK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > SURFACE_HIDDEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > SURFACE_FROZEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > SURACE_FROZEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > SURFACE_DITHER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > SURFACE_BLUR_FREEZE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > ROTATION_0;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > ROTATION_90;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > ROTATION_180;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > ROTATION_270;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class Surface

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_SURFACE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_SURFACE_HPP_IMPL
#define J2CPP_ANDROID_VIEW_SURFACE_HPP_IMPL

namespace j2cpp {




android::view::Surface_::OutOfResourcesException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


android::view::Surface_::OutOfResourcesException::OutOfResourcesException()
: object<android::view::Surface_::OutOfResourcesException>(
	call_new_object<
		android::view::Surface_::OutOfResourcesException::J2CPP_CLASS_NAME,
		android::view::Surface_::OutOfResourcesException::J2CPP_METHOD_NAME(0),
		android::view::Surface_::OutOfResourcesException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



android::view::Surface_::OutOfResourcesException::OutOfResourcesException(local_ref< java::lang::String > const &a0)
: object<android::view::Surface_::OutOfResourcesException>(
	call_new_object<
		android::view::Surface_::OutOfResourcesException::J2CPP_CLASS_NAME,
		android::view::Surface_::OutOfResourcesException::J2CPP_METHOD_NAME(1),
		android::view::Surface_::OutOfResourcesException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::view::Surface_::OutOfResourcesException,"android/view/Surface$OutOfResourcesException")
J2CPP_DEFINE_METHOD(android::view::Surface_::OutOfResourcesException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::Surface_::OutOfResourcesException,1,"<init>","(Ljava/lang/String;)V")



android::view::Surface::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::view::Surface::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


jboolean android::view::Surface::isValid()
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(1),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject());
}

local_ref< android::graphics::Canvas > android::view::Surface::lockCanvas(local_ref< android::graphics::Rect > const &a0)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(2),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::graphics::Canvas > >
	(get_jobject(), a0);
}

void android::view::Surface::unlockCanvasAndPost(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(3),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::view::Surface::unlockCanvas(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(4),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void android::view::Surface::setOrientation(jint a0, jint a1)
{
	return call_static_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(5),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(a0, a1);
}

void android::view::Surface::setLayer(jint a0)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(6),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void android::view::Surface::setPosition(jint a0, jint a1)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(7),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::Surface::setSize(jint a0, jint a1)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(8),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}

void android::view::Surface::hide()
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(9),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject());
}

void android::view::Surface::show()
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(10),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject());
}

void android::view::Surface::setTransparentRegionHint(local_ref< android::graphics::Region > const &a0)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(11),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void android::view::Surface::setAlpha(jfloat a0)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(12),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void android::view::Surface::setMatrix(jfloat a0, jfloat a1, jfloat a2, jfloat a3)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(13),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::view::Surface::freeze()
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(14),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject());
}

void android::view::Surface::unfreeze()
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(15),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject());
}

void android::view::Surface::setFreezeTint(jint a0)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(16),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

void android::view::Surface::setFlags(jint a0, jint a1)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(17),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::String > android::view::Surface::toString()
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(18),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::view::Surface::describeContents()
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(19),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(19), 
		jint >
	(get_jobject());
}

void android::view::Surface::readFromParcel(local_ref< android::os::Parcel > const &a0)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(20),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0);
}

void android::view::Surface::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::view::Surface::J2CPP_CLASS_NAME,
		android::view::Surface::J2CPP_METHOD_NAME(21),
		android::view::Surface::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0, a1);
}




static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(0),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::view::Surface::HIDDEN;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(1),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::view::Surface::HARDWARE;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(2),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::view::Surface::GPU;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(3),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::view::Surface::SECURE;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(4),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::view::Surface::NON_PREMULTIPLIED;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(5),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::view::Surface::PUSH_BUFFERS;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(6),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::view::Surface::FX_SURFACE_NORMAL;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(7),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::view::Surface::FX_SURFACE_BLUR;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(8),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::view::Surface::FX_SURFACE_DIM;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(9),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::view::Surface::FX_SURFACE_MASK;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(10),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::view::Surface::SURFACE_HIDDEN;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(11),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::view::Surface::SURFACE_FROZEN;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(12),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::view::Surface::SURACE_FROZEN;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(13),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::view::Surface::SURFACE_DITHER;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(14),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::view::Surface::SURFACE_BLUR_FREEZE;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(15),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(15),
	jint
> android::view::Surface::ROTATION_0;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(16),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(16),
	jint
> android::view::Surface::ROTATION_90;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(17),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(17),
	jint
> android::view::Surface::ROTATION_180;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(18),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(18),
	jint
> android::view::Surface::ROTATION_270;

static_field<
	android::view::Surface::J2CPP_CLASS_NAME,
	android::view::Surface::J2CPP_FIELD_NAME(19),
	android::view::Surface::J2CPP_FIELD_SIGNATURE(19),
	local_ref< android::os::Parcelable_::Creator >
> android::view::Surface::CREATOR;


J2CPP_DEFINE_CLASS(android::view::Surface,"android/view/Surface")
J2CPP_DEFINE_METHOD(android::view::Surface,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::view::Surface,1,"isValid","()Z")
J2CPP_DEFINE_METHOD(android::view::Surface,2,"lockCanvas","(Landroid/graphics/Rect;)Landroid/graphics/Canvas;")
J2CPP_DEFINE_METHOD(android::view::Surface,3,"unlockCanvasAndPost","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::view::Surface,4,"unlockCanvas","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::view::Surface,5,"setOrientation","(II)V")
J2CPP_DEFINE_METHOD(android::view::Surface,6,"setLayer","(I)V")
J2CPP_DEFINE_METHOD(android::view::Surface,7,"setPosition","(II)V")
J2CPP_DEFINE_METHOD(android::view::Surface,8,"setSize","(II)V")
J2CPP_DEFINE_METHOD(android::view::Surface,9,"hide","()V")
J2CPP_DEFINE_METHOD(android::view::Surface,10,"show","()V")
J2CPP_DEFINE_METHOD(android::view::Surface,11,"setTransparentRegionHint","(Landroid/graphics/Region;)V")
J2CPP_DEFINE_METHOD(android::view::Surface,12,"setAlpha","(F)V")
J2CPP_DEFINE_METHOD(android::view::Surface,13,"setMatrix","(FFFF)V")
J2CPP_DEFINE_METHOD(android::view::Surface,14,"freeze","()V")
J2CPP_DEFINE_METHOD(android::view::Surface,15,"unfreeze","()V")
J2CPP_DEFINE_METHOD(android::view::Surface,16,"setFreezeTint","(I)V")
J2CPP_DEFINE_METHOD(android::view::Surface,17,"setFlags","(II)V")
J2CPP_DEFINE_METHOD(android::view::Surface,18,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::view::Surface,19,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::view::Surface,20,"readFromParcel","(Landroid/os/Parcel;)V")
J2CPP_DEFINE_METHOD(android::view::Surface,21,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::view::Surface,22,"finalize","()V")
J2CPP_DEFINE_METHOD(android::view::Surface,23,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::view::Surface,0,"HIDDEN","I")
J2CPP_DEFINE_FIELD(android::view::Surface,1,"HARDWARE","I")
J2CPP_DEFINE_FIELD(android::view::Surface,2,"GPU","I")
J2CPP_DEFINE_FIELD(android::view::Surface,3,"SECURE","I")
J2CPP_DEFINE_FIELD(android::view::Surface,4,"NON_PREMULTIPLIED","I")
J2CPP_DEFINE_FIELD(android::view::Surface,5,"PUSH_BUFFERS","I")
J2CPP_DEFINE_FIELD(android::view::Surface,6,"FX_SURFACE_NORMAL","I")
J2CPP_DEFINE_FIELD(android::view::Surface,7,"FX_SURFACE_BLUR","I")
J2CPP_DEFINE_FIELD(android::view::Surface,8,"FX_SURFACE_DIM","I")
J2CPP_DEFINE_FIELD(android::view::Surface,9,"FX_SURFACE_MASK","I")
J2CPP_DEFINE_FIELD(android::view::Surface,10,"SURFACE_HIDDEN","I")
J2CPP_DEFINE_FIELD(android::view::Surface,11,"SURFACE_FROZEN","I")
J2CPP_DEFINE_FIELD(android::view::Surface,12,"SURACE_FROZEN","I")
J2CPP_DEFINE_FIELD(android::view::Surface,13,"SURFACE_DITHER","I")
J2CPP_DEFINE_FIELD(android::view::Surface,14,"SURFACE_BLUR_FREEZE","I")
J2CPP_DEFINE_FIELD(android::view::Surface,15,"ROTATION_0","I")
J2CPP_DEFINE_FIELD(android::view::Surface,16,"ROTATION_90","I")
J2CPP_DEFINE_FIELD(android::view::Surface,17,"ROTATION_180","I")
J2CPP_DEFINE_FIELD(android::view::Surface,18,"ROTATION_270","I")
J2CPP_DEFINE_FIELD(android::view::Surface,19,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_SURFACE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
