/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.spec.ECParameterSpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_DECL
#define J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace math { class BigInteger; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class ECPoint; } } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class EllipticCurve; } } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }


#include <java/lang/Object.hpp>
#include <java/math/BigInteger.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>
#include <java/security/spec/ECPoint.hpp>
#include <java/security/spec/EllipticCurve.hpp>


namespace j2cpp {

namespace java { namespace security { namespace spec {

	class ECParameterSpec;
	class ECParameterSpec
		: public object<ECParameterSpec>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		explicit ECParameterSpec(jobject jobj)
		: object<ECParameterSpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::security::spec::AlgorithmParameterSpec>() const;


		ECParameterSpec(local_ref< java::security::spec::EllipticCurve > const&, local_ref< java::security::spec::ECPoint > const&, local_ref< java::math::BigInteger > const&, jint);
		jint getCofactor();
		local_ref< java::security::spec::EllipticCurve > getCurve();
		local_ref< java::security::spec::ECPoint > getGenerator();
		local_ref< java::math::BigInteger > getOrder();
	}; //class ECParameterSpec

} //namespace spec
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_IMPL
#define J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_IMPL

namespace j2cpp {



java::security::spec::ECParameterSpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::security::spec::ECParameterSpec::operator local_ref<java::security::spec::AlgorithmParameterSpec>() const
{
	return local_ref<java::security::spec::AlgorithmParameterSpec>(get_jobject());
}


java::security::spec::ECParameterSpec::ECParameterSpec(local_ref< java::security::spec::EllipticCurve > const &a0, local_ref< java::security::spec::ECPoint > const &a1, local_ref< java::math::BigInteger > const &a2, jint a3)
: object<java::security::spec::ECParameterSpec>(
	call_new_object<
		java::security::spec::ECParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::ECParameterSpec::J2CPP_METHOD_NAME(0),
		java::security::spec::ECParameterSpec::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1, a2, a3)
)
{
}


jint java::security::spec::ECParameterSpec::getCofactor()
{
	return call_method<
		java::security::spec::ECParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::ECParameterSpec::J2CPP_METHOD_NAME(1),
		java::security::spec::ECParameterSpec::J2CPP_METHOD_SIGNATURE(1), 
		jint
	>(get_jobject());
}

local_ref< java::security::spec::EllipticCurve > java::security::spec::ECParameterSpec::getCurve()
{
	return call_method<
		java::security::spec::ECParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::ECParameterSpec::J2CPP_METHOD_NAME(2),
		java::security::spec::ECParameterSpec::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::spec::EllipticCurve >
	>(get_jobject());
}

local_ref< java::security::spec::ECPoint > java::security::spec::ECParameterSpec::getGenerator()
{
	return call_method<
		java::security::spec::ECParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::ECParameterSpec::J2CPP_METHOD_NAME(3),
		java::security::spec::ECParameterSpec::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::spec::ECPoint >
	>(get_jobject());
}

local_ref< java::math::BigInteger > java::security::spec::ECParameterSpec::getOrder()
{
	return call_method<
		java::security::spec::ECParameterSpec::J2CPP_CLASS_NAME,
		java::security::spec::ECParameterSpec::J2CPP_METHOD_NAME(4),
		java::security::spec::ECParameterSpec::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::math::BigInteger >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::security::spec::ECParameterSpec,"java/security/spec/ECParameterSpec")
J2CPP_DEFINE_METHOD(java::security::spec::ECParameterSpec,0,"<init>","(Ljava/security/spec/EllipticCurve;Ljava/security/spec/ECPoint;Ljava/math/BigInteger;I)V")
J2CPP_DEFINE_METHOD(java::security::spec::ECParameterSpec,1,"getCofactor","()I")
J2CPP_DEFINE_METHOD(java::security::spec::ECParameterSpec,2,"getCurve","()Ljava/security/spec/EllipticCurve;")
J2CPP_DEFINE_METHOD(java::security::spec::ECParameterSpec,3,"getGenerator","()Ljava/security/spec/ECPoint;")
J2CPP_DEFINE_METHOD(java::security::spec::ECParameterSpec,4,"getOrder","()Ljava/math/BigInteger;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_SPEC_ECPARAMETERSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
