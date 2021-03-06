/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.MissingResourceException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_DECL
#define J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class RuntimeException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/RuntimeException.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace java { namespace util {

	class MissingResourceException;
	class MissingResourceException
		: public object<MissingResourceException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit MissingResourceException(jobject jobj)
		: object<MissingResourceException>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::RuntimeException>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Exception>() const;


		MissingResourceException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getClassName();
		local_ref< java::lang::String > getKey();
	}; //class MissingResourceException

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_IMPL

namespace j2cpp {



java::util::MissingResourceException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::MissingResourceException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::MissingResourceException::operator local_ref<java::lang::RuntimeException>() const
{
	return local_ref<java::lang::RuntimeException>(get_jobject());
}

java::util::MissingResourceException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

java::util::MissingResourceException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}


java::util::MissingResourceException::MissingResourceException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
: object<java::util::MissingResourceException>(
	call_new_object<
		java::util::MissingResourceException::J2CPP_CLASS_NAME,
		java::util::MissingResourceException::J2CPP_METHOD_NAME(0),
		java::util::MissingResourceException::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2)
)
{
}


local_ref< java::lang::String > java::util::MissingResourceException::getClassName()
{
	return call_method<
		java::util::MissingResourceException::J2CPP_CLASS_NAME,
		java::util::MissingResourceException::J2CPP_METHOD_NAME(1),
		java::util::MissingResourceException::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(get_jobject());
}

local_ref< java::lang::String > java::util::MissingResourceException::getKey()
{
	return call_method<
		java::util::MissingResourceException::J2CPP_CLASS_NAME,
		java::util::MissingResourceException::J2CPP_METHOD_NAME(2),
		java::util::MissingResourceException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::MissingResourceException,"java/util/MissingResourceException")
J2CPP_DEFINE_METHOD(java::util::MissingResourceException,0,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::MissingResourceException,1,"getClassName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::MissingResourceException,2,"getKey","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_MISSINGRESOURCEEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
