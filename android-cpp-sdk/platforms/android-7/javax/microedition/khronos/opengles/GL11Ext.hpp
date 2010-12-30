/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.microedition.khronos.opengles.GL11Ext
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_HPP_DECL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_HPP_DECL


namespace j2cpp { namespace javax { namespace microedition { namespace khronos { namespace opengles { class GL; } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { class FloatBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class IntBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class Buffer; } } }
namespace j2cpp { namespace java { namespace nio { class ShortBuffer; } } }


#include <java/lang/Object.hpp>
#include <java/nio/Buffer.hpp>
#include <java/nio/FloatBuffer.hpp>
#include <java/nio/IntBuffer.hpp>
#include <java/nio/ShortBuffer.hpp>
#include <javax/microedition/khronos/opengles/GL.hpp>


namespace j2cpp {

namespace javax { namespace microedition { namespace khronos { namespace opengles {

	class GL11Ext;
	class GL11Ext
		: public object<GL11Ext>
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

		explicit GL11Ext(jobject jobj)
		: object<GL11Ext>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::microedition::khronos::opengles::GL>() const;


		void glTexParameterfv(jint, jint, local_ref< array<jfloat,1> >  const&, jint);
		void glCurrentPaletteMatrixOES(jint);
		void glDrawTexfOES(jfloat, jfloat, jfloat, jfloat, jfloat);
		void glDrawTexfvOES(local_ref< array<jfloat,1> >  const&, jint);
		void glDrawTexfvOES(local_ref< java::nio::FloatBuffer >  const&);
		void glDrawTexiOES(jint, jint, jint, jint, jint);
		void glDrawTexivOES(local_ref< array<jint,1> >  const&, jint);
		void glDrawTexivOES(local_ref< java::nio::IntBuffer >  const&);
		void glDrawTexsOES(jshort, jshort, jshort, jshort, jshort);
		void glDrawTexsvOES(local_ref< array<jshort,1> >  const&, jint);
		void glDrawTexsvOES(local_ref< java::nio::ShortBuffer >  const&);
		void glDrawTexxOES(jint, jint, jint, jint, jint);
		void glDrawTexxvOES(local_ref< array<jint,1> >  const&, jint);
		void glDrawTexxvOES(local_ref< java::nio::IntBuffer >  const&);
		void glEnable(jint);
		void glEnableClientState(jint);
		void glLoadPaletteFromModelViewMatrixOES();
		void glMatrixIndexPointerOES(jint, jint, jint, local_ref< java::nio::Buffer >  const&);
		void glMatrixIndexPointerOES(jint, jint, jint, jint);
		void glWeightPointerOES(jint, jint, jint, local_ref< java::nio::Buffer >  const&);
		void glWeightPointerOES(jint, jint, jint, jint);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > GL_MATRIX_INDEX_ARRAY_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > GL_MATRIX_INDEX_ARRAY_POINTER_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > GL_MATRIX_INDEX_ARRAY_SIZE_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > GL_MATRIX_INDEX_ARRAY_STRIDE_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > GL_MATRIX_INDEX_ARRAY_TYPE_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > GL_MATRIX_PALETTE_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > GL_MAX_PALETTE_MATRICES_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > GL_MAX_VERTEX_UNITS_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > GL_TEXTURE_CROP_RECT_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > GL_WEIGHT_ARRAY_BUFFER_BINDING_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > GL_WEIGHT_ARRAY_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > GL_WEIGHT_ARRAY_POINTER_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > GL_WEIGHT_ARRAY_SIZE_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > GL_WEIGHT_ARRAY_STRIDE_OES;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > GL_WEIGHT_ARRAY_TYPE_OES;
	}; //class GL11Ext

} //namespace opengles
} //namespace khronos
} //namespace microedition
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_HPP_IMPL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_HPP_IMPL

namespace j2cpp {



javax::microedition::khronos::opengles::GL11Ext::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::microedition::khronos::opengles::GL11Ext::operator local_ref<javax::microedition::khronos::opengles::GL>() const
{
	return local_ref<javax::microedition::khronos::opengles::GL>(get_jobject());
}

void javax::microedition::khronos::opengles::GL11Ext::glTexParameterfv(jint a0, jint a1, local_ref< array<jfloat,1> > const &a2, jint a3)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(0),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void javax::microedition::khronos::opengles::GL11Ext::glCurrentPaletteMatrixOES(jint a0)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(1),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexfOES(jfloat a0, jfloat a1, jfloat a2, jfloat a3, jfloat a4)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(2),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexfvOES(local_ref< array<jfloat,1> > const &a0, jint a1)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(3),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexfvOES(local_ref< java::nio::FloatBuffer > const &a0)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(4),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexiOES(jint a0, jint a1, jint a2, jint a3, jint a4)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(5),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexivOES(local_ref< array<jint,1> > const &a0, jint a1)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(6),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexivOES(local_ref< java::nio::IntBuffer > const &a0)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(7),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexsOES(jshort a0, jshort a1, jshort a2, jshort a3, jshort a4)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(8),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexsvOES(local_ref< array<jshort,1> > const &a0, jint a1)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(9),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexsvOES(local_ref< java::nio::ShortBuffer > const &a0)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(10),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexxOES(jint a0, jint a1, jint a2, jint a3, jint a4)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(11),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexxvOES(local_ref< array<jint,1> > const &a0, jint a1)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(12),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0, a1);
}

void javax::microedition::khronos::opengles::GL11Ext::glDrawTexxvOES(local_ref< java::nio::IntBuffer > const &a0)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(13),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

void javax::microedition::khronos::opengles::GL11Ext::glEnable(jint a0)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(14),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0);
}

void javax::microedition::khronos::opengles::GL11Ext::glEnableClientState(jint a0)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(15),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

void javax::microedition::khronos::opengles::GL11Ext::glLoadPaletteFromModelViewMatrixOES()
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(16),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject());
}

void javax::microedition::khronos::opengles::GL11Ext::glMatrixIndexPointerOES(jint a0, jint a1, jint a2, local_ref< java::nio::Buffer > const &a3)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(17),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void javax::microedition::khronos::opengles::GL11Ext::glMatrixIndexPointerOES(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(18),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void javax::microedition::khronos::opengles::GL11Ext::glWeightPointerOES(jint a0, jint a1, jint a2, local_ref< java::nio::Buffer > const &a3)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(19),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void javax::microedition::khronos::opengles::GL11Ext::glWeightPointerOES(jint a0, jint a1, jint a2, jint a3)
{
	return call_method<
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_NAME(20),
		javax::microedition::khronos::opengles::GL11Ext::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}


static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(0),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(0),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(1),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(1),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_MATRIX_INDEX_ARRAY_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(2),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(2),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_MATRIX_INDEX_ARRAY_POINTER_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(3),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(3),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_MATRIX_INDEX_ARRAY_SIZE_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(4),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(4),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_MATRIX_INDEX_ARRAY_STRIDE_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(5),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(5),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_MATRIX_INDEX_ARRAY_TYPE_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(6),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(6),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_MATRIX_PALETTE_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(7),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(7),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_MAX_PALETTE_MATRICES_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(8),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(8),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_MAX_VERTEX_UNITS_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(9),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(9),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_TEXTURE_CROP_RECT_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(10),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(10),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_WEIGHT_ARRAY_BUFFER_BINDING_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(11),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(11),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_WEIGHT_ARRAY_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(12),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(12),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_WEIGHT_ARRAY_POINTER_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(13),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(13),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_WEIGHT_ARRAY_SIZE_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(14),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(14),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_WEIGHT_ARRAY_STRIDE_OES;

static_field<
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_CLASS_NAME,
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_NAME(15),
	javax::microedition::khronos::opengles::GL11Ext::J2CPP_FIELD_SIGNATURE(15),
	jint
> javax::microedition::khronos::opengles::GL11Ext::GL_WEIGHT_ARRAY_TYPE_OES;


J2CPP_DEFINE_CLASS(javax::microedition::khronos::opengles::GL11Ext,"javax/microedition/khronos/opengles/GL11Ext")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,0,"glTexParameterfv","(II[FI)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,1,"glCurrentPaletteMatrixOES","(I)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,2,"glDrawTexfOES","(FFFFF)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,3,"glDrawTexfvOES","([FI)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,4,"glDrawTexfvOES","(Ljava/nio/FloatBuffer;)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,5,"glDrawTexiOES","(IIIII)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,6,"glDrawTexivOES","([II)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,7,"glDrawTexivOES","(Ljava/nio/IntBuffer;)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,8,"glDrawTexsOES","(SSSSS)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,9,"glDrawTexsvOES","([SI)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,10,"glDrawTexsvOES","(Ljava/nio/ShortBuffer;)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,11,"glDrawTexxOES","(IIIII)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,12,"glDrawTexxvOES","([II)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,13,"glDrawTexxvOES","(Ljava/nio/IntBuffer;)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,14,"glEnable","(I)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,15,"glEnableClientState","(I)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,16,"glLoadPaletteFromModelViewMatrixOES","()V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,17,"glMatrixIndexPointerOES","(IIILjava/nio/Buffer;)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,18,"glMatrixIndexPointerOES","(IIII)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,19,"glWeightPointerOES","(IIILjava/nio/Buffer;)V")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::opengles::GL11Ext,20,"glWeightPointerOES","(IIII)V")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,0,"GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,1,"GL_MATRIX_INDEX_ARRAY_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,2,"GL_MATRIX_INDEX_ARRAY_POINTER_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,3,"GL_MATRIX_INDEX_ARRAY_SIZE_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,4,"GL_MATRIX_INDEX_ARRAY_STRIDE_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,5,"GL_MATRIX_INDEX_ARRAY_TYPE_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,6,"GL_MATRIX_PALETTE_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,7,"GL_MAX_PALETTE_MATRICES_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,8,"GL_MAX_VERTEX_UNITS_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,9,"GL_TEXTURE_CROP_RECT_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,10,"GL_WEIGHT_ARRAY_BUFFER_BINDING_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,11,"GL_WEIGHT_ARRAY_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,12,"GL_WEIGHT_ARRAY_POINTER_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,13,"GL_WEIGHT_ARRAY_SIZE_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,14,"GL_WEIGHT_ARRAY_STRIDE_OES","I")
J2CPP_DEFINE_FIELD(javax::microedition::khronos::opengles::GL11Ext,15,"GL_WEIGHT_ARRAY_TYPE_OES","I")

} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_OPENGLES_GL11EXT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
