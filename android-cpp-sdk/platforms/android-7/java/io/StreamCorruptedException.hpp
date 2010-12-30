/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.StreamCorruptedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_STREAMCORRUPTEDEXCEPTION_HPP_DECL
#define J2CPP_JAVA_IO_STREAMCORRUPTEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class ObjectStreamException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/ObjectStreamException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class StreamCorruptedException;
	class StreamCorruptedException
		: public object<StreamCorruptedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit StreamCorruptedException(jobject jobj)
		: object<StreamCorruptedException>(jobj)
		{
		}

		operator local_ref<java::io::ObjectStreamException>() const;


		StreamCorruptedException();
		StreamCorruptedException(local_ref< java::lang::String > const&);
	}; //class StreamCorruptedException

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_STREAMCORRUPTEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_STREAMCORRUPTEDEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_IO_STREAMCORRUPTEDEXCEPTION_HPP_IMPL

namespace j2cpp {



java::io::StreamCorruptedException::operator local_ref<java::io::ObjectStreamException>() const
{
	return local_ref<java::io::ObjectStreamException>(get_jobject());
}


java::io::StreamCorruptedException::StreamCorruptedException()
: object<java::io::StreamCorruptedException>(
	call_new_object<
		java::io::StreamCorruptedException::J2CPP_CLASS_NAME,
		java::io::StreamCorruptedException::J2CPP_METHOD_NAME(0),
		java::io::StreamCorruptedException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::io::StreamCorruptedException::StreamCorruptedException(local_ref< java::lang::String > const &a0)
: object<java::io::StreamCorruptedException>(
	call_new_object<
		java::io::StreamCorruptedException::J2CPP_CLASS_NAME,
		java::io::StreamCorruptedException::J2CPP_METHOD_NAME(1),
		java::io::StreamCorruptedException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::io::StreamCorruptedException,"java/io/StreamCorruptedException")
J2CPP_DEFINE_METHOD(java::io::StreamCorruptedException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::StreamCorruptedException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_STREAMCORRUPTEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
