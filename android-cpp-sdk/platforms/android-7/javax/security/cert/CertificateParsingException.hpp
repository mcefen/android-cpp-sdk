/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.security.cert.CertificateParsingException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION_HPP_DECL


namespace j2cpp { namespace javax { namespace security { namespace cert { class CertificateException; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <javax/security/cert/CertificateException.hpp>


namespace j2cpp {

namespace javax { namespace security { namespace cert {

	class CertificateParsingException;
	class CertificateParsingException
		: public object<CertificateParsingException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit CertificateParsingException(jobject jobj)
		: object<CertificateParsingException>(jobj)
		{
		}

		operator local_ref<javax::security::cert::CertificateException>() const;


		CertificateParsingException(local_ref< java::lang::String > const&);
		CertificateParsingException();
	}; //class CertificateParsingException

} //namespace cert
} //namespace security
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION_HPP_IMPL

namespace j2cpp {



javax::security::cert::CertificateParsingException::operator local_ref<javax::security::cert::CertificateException>() const
{
	return local_ref<javax::security::cert::CertificateException>(get_jobject());
}


javax::security::cert::CertificateParsingException::CertificateParsingException(local_ref< java::lang::String > const &a0)
: object<javax::security::cert::CertificateParsingException>(
	call_new_object<
		javax::security::cert::CertificateParsingException::J2CPP_CLASS_NAME,
		javax::security::cert::CertificateParsingException::J2CPP_METHOD_NAME(0),
		javax::security::cert::CertificateParsingException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



javax::security::cert::CertificateParsingException::CertificateParsingException()
: object<javax::security::cert::CertificateParsingException>(
	call_new_object<
		javax::security::cert::CertificateParsingException::J2CPP_CLASS_NAME,
		javax::security::cert::CertificateParsingException::J2CPP_METHOD_NAME(1),
		javax::security::cert::CertificateParsingException::J2CPP_METHOD_SIGNATURE(1)>
	()
)
{
}



J2CPP_DEFINE_CLASS(javax::security::cert::CertificateParsingException,"javax/security/cert/CertificateParsingException")
J2CPP_DEFINE_METHOD(javax::security::cert::CertificateParsingException,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::security::cert::CertificateParsingException,1,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SECURITY_CERT_CERTIFICATEPARSINGEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
