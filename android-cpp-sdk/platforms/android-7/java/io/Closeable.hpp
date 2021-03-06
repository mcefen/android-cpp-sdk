/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.Closeable
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_CLOSEABLE_HPP_DECL
#define J2CPP_JAVA_IO_CLOSEABLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace io {

	class Closeable;
	class Closeable
		: public object<Closeable>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit Closeable(jobject jobj)
		: object<Closeable>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void close();
	}; //class Closeable

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_CLOSEABLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_CLOSEABLE_HPP_IMPL
#define J2CPP_JAVA_IO_CLOSEABLE_HPP_IMPL

namespace j2cpp {



java::io::Closeable::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::io::Closeable::close()
{
	return call_method<
		java::io::Closeable::J2CPP_CLASS_NAME,
		java::io::Closeable::J2CPP_METHOD_NAME(0),
		java::io::Closeable::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::io::Closeable,"java/io/Closeable")
J2CPP_DEFINE_METHOD(java::io::Closeable,0,"close","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_CLOSEABLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
