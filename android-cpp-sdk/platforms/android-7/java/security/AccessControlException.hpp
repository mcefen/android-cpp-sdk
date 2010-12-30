/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.AccessControlException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACCESSCONTROLEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_ACCESSCONTROLEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class SecurityException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }


#include <java/lang/SecurityException.hpp>
#include <java/lang/String.hpp>
#include <java/security/Permission.hpp>


namespace j2cpp {

namespace java { namespace security {

	class AccessControlException;
	class AccessControlException
		: public object<AccessControlException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit AccessControlException(jobject jobj)
		: object<AccessControlException>(jobj)
		{
		}

		operator local_ref<java::lang::SecurityException>() const;


		AccessControlException(local_ref< java::lang::String > const&);
		AccessControlException(local_ref< java::lang::String > const&, local_ref< java::security::Permission > const&);
		local_ref< java::security::Permission > getPermission();
	}; //class AccessControlException

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACCESSCONTROLEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_ACCESSCONTROLEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_ACCESSCONTROLEXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::AccessControlException::operator local_ref<java::lang::SecurityException>() const
{
	return local_ref<java::lang::SecurityException>(get_jobject());
}


java::security::AccessControlException::AccessControlException(local_ref< java::lang::String > const &a0)
: object<java::security::AccessControlException>(
	call_new_object<
		java::security::AccessControlException::J2CPP_CLASS_NAME,
		java::security::AccessControlException::J2CPP_METHOD_NAME(0),
		java::security::AccessControlException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::security::AccessControlException::AccessControlException(local_ref< java::lang::String > const &a0, local_ref< java::security::Permission > const &a1)
: object<java::security::AccessControlException>(
	call_new_object<
		java::security::AccessControlException::J2CPP_CLASS_NAME,
		java::security::AccessControlException::J2CPP_METHOD_NAME(1),
		java::security::AccessControlException::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}


local_ref< java::security::Permission > java::security::AccessControlException::getPermission()
{
	return call_method<
		java::security::AccessControlException::J2CPP_CLASS_NAME,
		java::security::AccessControlException::J2CPP_METHOD_NAME(2),
		java::security::AccessControlException::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::Permission > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::AccessControlException,"java/security/AccessControlException")
J2CPP_DEFINE_METHOD(java::security::AccessControlException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::AccessControlException,1,"<init>","(Ljava/lang/String;Ljava/security/Permission;)V")
J2CPP_DEFINE_METHOD(java::security::AccessControlException,2,"getPermission","()Ljava/security/Permission;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_ACCESSCONTROLEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
