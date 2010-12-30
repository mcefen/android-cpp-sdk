/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.InvalidKeySpecException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_INVALIDKEYSPECEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_INVALIDKEYSPECEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace security { class GeneralSecurityException; } } }


#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>
#include <java/security/GeneralSecurityException.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class InvalidKeySpecException;
	class InvalidKeySpecException
		: public object<InvalidKeySpecException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit InvalidKeySpecException(jobject jobj)
		: object<InvalidKeySpecException>(jobj)
		{
		}

		operator local_ref<java::security::GeneralSecurityException>() const;


		InvalidKeySpecException(local_ref< java::lang::String > const&);
		InvalidKeySpecException();
		InvalidKeySpecException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		InvalidKeySpecException(local_ref< java::lang::Throwable > const&);
	}; //class InvalidKeySpecException

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_INVALIDKEYSPECEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_INVALIDKEYSPECEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_INVALIDKEYSPECEXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::spec::InvalidKeySpecException::operator local_ref<java::security::GeneralSecurityException>() const
{
	return local_ref<java::security::GeneralSecurityException>(get_jobject());
}


java::security::spec::InvalidKeySpecException::InvalidKeySpecException(local_ref< java::lang::String > const &a0)
: object<java::security::spec::InvalidKeySpecException>(
	call_new_object<
		java::security::spec::InvalidKeySpecException::J2CPP_CLASS_NAME,
		java::security::spec::InvalidKeySpecException::J2CPP_METHOD_NAME(0),
		java::security::spec::InvalidKeySpecException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::security::spec::InvalidKeySpecException::InvalidKeySpecException()
: object<java::security::spec::InvalidKeySpecException>(
	call_new_object<
		java::security::spec::InvalidKeySpecException::J2CPP_CLASS_NAME,
		java::security::spec::InvalidKeySpecException::J2CPP_METHOD_NAME(1),
		java::security::spec::InvalidKeySpecException::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}



java::security::spec::InvalidKeySpecException::InvalidKeySpecException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<java::security::spec::InvalidKeySpecException>(
	call_new_object<
		java::security::spec::InvalidKeySpecException::J2CPP_CLASS_NAME,
		java::security::spec::InvalidKeySpecException::J2CPP_METHOD_NAME(2),
		java::security::spec::InvalidKeySpecException::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



java::security::spec::InvalidKeySpecException::InvalidKeySpecException(local_ref< java::lang::Throwable > const &a0)
: object<java::security::spec::InvalidKeySpecException>(
	call_new_object<
		java::security::spec::InvalidKeySpecException::J2CPP_CLASS_NAME,
		java::security::spec::InvalidKeySpecException::J2CPP_METHOD_NAME(3),
		java::security::spec::InvalidKeySpecException::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::security::spec::InvalidKeySpecException,"java/security/spec/InvalidKeySpecException")
J2CPP_DEFINE_METHOD(java::security::spec::InvalidKeySpecException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::spec::InvalidKeySpecException,1,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::spec::InvalidKeySpecException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::security::spec::InvalidKeySpecException,3,"<init>","(Ljava/lang/Throwable;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_INVALIDKEYSPECEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
