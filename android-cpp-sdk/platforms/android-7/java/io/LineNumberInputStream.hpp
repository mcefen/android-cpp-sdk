/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.LineNumberInputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class FilterInputStream; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }


#include <java/io/FilterInputStream.hpp>
#include <java/io/InputStream.hpp>


namespace j2cpp {

namespace java { namespace io {

	class LineNumberInputStream;
	class LineNumberInputStream
		: public object<LineNumberInputStream>
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

		explicit LineNumberInputStream(jobject jobj)
		: object<LineNumberInputStream>(jobj)
		{
		}

		operator local_ref<java::io::FilterInputStream>() const;


		LineNumberInputStream(local_ref< java::io::InputStream > const&);
		jint available();
		jint getLineNumber();
		void mark(jint);
		jint read();
		jint read(local_ref< array<jbyte,1> >  const&, jint, jint);
		void reset();
		void setLineNumber(jint);
		jlong skip(jlong);
	}; //class LineNumberInputStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_IMPL

namespace j2cpp {



java::io::LineNumberInputStream::operator local_ref<java::io::FilterInputStream>() const
{
	return local_ref<java::io::FilterInputStream>(get_jobject());
}


java::io::LineNumberInputStream::LineNumberInputStream(local_ref< java::io::InputStream > const &a0)
: object<java::io::LineNumberInputStream>(
	call_new_object<
		java::io::LineNumberInputStream::J2CPP_CLASS_NAME,
		java::io::LineNumberInputStream::J2CPP_METHOD_NAME(0),
		java::io::LineNumberInputStream::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


jint java::io::LineNumberInputStream::available()
{
	return call_method<
		java::io::LineNumberInputStream::J2CPP_CLASS_NAME,
		java::io::LineNumberInputStream::J2CPP_METHOD_NAME(1),
		java::io::LineNumberInputStream::J2CPP_METHOD_SIGNATURE(1), 
		jint >
	(get_jobject());
}

jint java::io::LineNumberInputStream::getLineNumber()
{
	return call_method<
		java::io::LineNumberInputStream::J2CPP_CLASS_NAME,
		java::io::LineNumberInputStream::J2CPP_METHOD_NAME(2),
		java::io::LineNumberInputStream::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

void java::io::LineNumberInputStream::mark(jint a0)
{
	return call_method<
		java::io::LineNumberInputStream::J2CPP_CLASS_NAME,
		java::io::LineNumberInputStream::J2CPP_METHOD_NAME(3),
		java::io::LineNumberInputStream::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

jint java::io::LineNumberInputStream::read()
{
	return call_method<
		java::io::LineNumberInputStream::J2CPP_CLASS_NAME,
		java::io::LineNumberInputStream::J2CPP_METHOD_NAME(4),
		java::io::LineNumberInputStream::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

jint java::io::LineNumberInputStream::read(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::LineNumberInputStream::J2CPP_CLASS_NAME,
		java::io::LineNumberInputStream::J2CPP_METHOD_NAME(5),
		java::io::LineNumberInputStream::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject(), a0, a1, a2);
}

void java::io::LineNumberInputStream::reset()
{
	return call_method<
		java::io::LineNumberInputStream::J2CPP_CLASS_NAME,
		java::io::LineNumberInputStream::J2CPP_METHOD_NAME(6),
		java::io::LineNumberInputStream::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject());
}

void java::io::LineNumberInputStream::setLineNumber(jint a0)
{
	return call_method<
		java::io::LineNumberInputStream::J2CPP_CLASS_NAME,
		java::io::LineNumberInputStream::J2CPP_METHOD_NAME(7),
		java::io::LineNumberInputStream::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

jlong java::io::LineNumberInputStream::skip(jlong a0)
{
	return call_method<
		java::io::LineNumberInputStream::J2CPP_CLASS_NAME,
		java::io::LineNumberInputStream::J2CPP_METHOD_NAME(8),
		java::io::LineNumberInputStream::J2CPP_METHOD_SIGNATURE(8), 
		jlong >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::LineNumberInputStream,"java/io/LineNumberInputStream")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,0,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,1,"available","()I")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,2,"getLineNumber","()I")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,3,"mark","(I)V")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,4,"read","()I")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,5,"read","([BII)I")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,6,"reset","()V")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,7,"setLineNumber","(I)V")
J2CPP_DEFINE_METHOD(java::io::LineNumberInputStream,8,"skip","(J)J")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_LINENUMBERINPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
