/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.InvalidPropertiesFormatException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }


#include <java/io/IOException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace util {

	class InvalidPropertiesFormatException;
	class InvalidPropertiesFormatException
		: public object<InvalidPropertiesFormatException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit InvalidPropertiesFormatException(jobject jobj)
		: object<InvalidPropertiesFormatException>(jobj)
		{
		}

		operator local_ref<java::io::IOException>() const;


		InvalidPropertiesFormatException(local_ref< java::lang::String > const&);
		InvalidPropertiesFormatException(local_ref< java::lang::Throwable > const&);
	}; //class InvalidPropertiesFormatException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::InvalidPropertiesFormatException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}


java::util::InvalidPropertiesFormatException::InvalidPropertiesFormatException(local_ref< java::lang::String > const &a0)
: object<java::util::InvalidPropertiesFormatException>(
	call_new_object<
		java::util::InvalidPropertiesFormatException::J2CPP_CLASS_NAME,
		java::util::InvalidPropertiesFormatException::J2CPP_METHOD_NAME(0),
		java::util::InvalidPropertiesFormatException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::util::InvalidPropertiesFormatException::InvalidPropertiesFormatException(local_ref< java::lang::Throwable > const &a0)
: object<java::util::InvalidPropertiesFormatException>(
	call_new_object<
		java::util::InvalidPropertiesFormatException::J2CPP_CLASS_NAME,
		java::util::InvalidPropertiesFormatException::J2CPP_METHOD_NAME(1),
		java::util::InvalidPropertiesFormatException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::util::InvalidPropertiesFormatException,"java/util/InvalidPropertiesFormatException")
J2CPP_DEFINE_METHOD(java::util::InvalidPropertiesFormatException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::InvalidPropertiesFormatException,1,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_INVALIDPROPERTIESFORMATEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
