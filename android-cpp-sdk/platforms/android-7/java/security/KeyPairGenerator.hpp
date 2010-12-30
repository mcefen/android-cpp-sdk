/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.KeyPairGenerator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYPAIRGENERATOR_HPP_DECL
#define J2CPP_JAVA_SECURITY_KEYPAIRGENERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Provider; } } }
namespace j2cpp { namespace java { namespace security { class KeyPair; } } }
namespace j2cpp { namespace java { namespace security { class KeyPairGeneratorSpi; } } }
namespace j2cpp { namespace java { namespace security { class SecureRandom; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class AlgorithmParameterSpec; } } } }


#include <java/lang/String.hpp>
#include <java/security/KeyPair.hpp>
#include <java/security/KeyPairGeneratorSpi.hpp>
#include <java/security/Provider.hpp>
#include <java/security/SecureRandom.hpp>
#include <java/security/spec/AlgorithmParameterSpec.hpp>


namespace j2cpp {

namespace java { namespace security {

	class KeyPairGenerator;
	class KeyPairGenerator
		: public object<KeyPairGenerator>
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

		explicit KeyPairGenerator(jobject jobj)
		: object<KeyPairGenerator>(jobj)
		{
		}

		operator local_ref<java::security::KeyPairGeneratorSpi>() const;


		local_ref< java::lang::String > getAlgorithm();
		static local_ref< java::security::KeyPairGenerator > getInstance(local_ref< java::lang::String >  const&);
		static local_ref< java::security::KeyPairGenerator > getInstance(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		static local_ref< java::security::KeyPairGenerator > getInstance(local_ref< java::lang::String >  const&, local_ref< java::security::Provider >  const&);
		local_ref< java::security::Provider > getProvider();
		void initialize(jint);
		void initialize(local_ref< java::security::spec::AlgorithmParameterSpec >  const&);
		local_ref< java::security::KeyPair > genKeyPair();
		local_ref< java::security::KeyPair > generateKeyPair();
		void initialize(jint, local_ref< java::security::SecureRandom >  const&);
		void initialize(local_ref< java::security::spec::AlgorithmParameterSpec >  const&, local_ref< java::security::SecureRandom >  const&);
	}; //class KeyPairGenerator

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYPAIRGENERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_KEYPAIRGENERATOR_HPP_IMPL
#define J2CPP_JAVA_SECURITY_KEYPAIRGENERATOR_HPP_IMPL

namespace j2cpp {



java::security::KeyPairGenerator::operator local_ref<java::security::KeyPairGeneratorSpi>() const
{
	return local_ref<java::security::KeyPairGeneratorSpi>(get_jobject());
}


local_ref< java::lang::String > java::security::KeyPairGenerator::getAlgorithm()
{
	return call_method<
		java::security::KeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::KeyPairGenerator::J2CPP_METHOD_NAME(1),
		java::security::KeyPairGenerator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::security::KeyPairGenerator > java::security::KeyPairGenerator::getInstance(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::security::KeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::KeyPairGenerator::J2CPP_METHOD_NAME(2),
		java::security::KeyPairGenerator::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::security::KeyPairGenerator > >
	(a0);
}

local_ref< java::security::KeyPairGenerator > java::security::KeyPairGenerator::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_static_method<
		java::security::KeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::KeyPairGenerator::J2CPP_METHOD_NAME(3),
		java::security::KeyPairGenerator::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::security::KeyPairGenerator > >
	(a0, a1);
}

local_ref< java::security::KeyPairGenerator > java::security::KeyPairGenerator::getInstance(local_ref< java::lang::String > const &a0, local_ref< java::security::Provider > const &a1)
{
	return call_static_method<
		java::security::KeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::KeyPairGenerator::J2CPP_METHOD_NAME(4),
		java::security::KeyPairGenerator::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::security::KeyPairGenerator > >
	(a0, a1);
}

local_ref< java::security::Provider > java::security::KeyPairGenerator::getProvider()
{
	return call_method<
		java::security::KeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::KeyPairGenerator::J2CPP_METHOD_NAME(5),
		java::security::KeyPairGenerator::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::security::Provider > >
	(get_jobject());
}

void java::security::KeyPairGenerator::initialize(jint a0)
{
	return call_method<
		java::security::KeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::KeyPairGenerator::J2CPP_METHOD_NAME(6),
		java::security::KeyPairGenerator::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void java::security::KeyPairGenerator::initialize(local_ref< java::security::spec::AlgorithmParameterSpec > const &a0)
{
	return call_method<
		java::security::KeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::KeyPairGenerator::J2CPP_METHOD_NAME(7),
		java::security::KeyPairGenerator::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

local_ref< java::security::KeyPair > java::security::KeyPairGenerator::genKeyPair()
{
	return call_method<
		java::security::KeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::KeyPairGenerator::J2CPP_METHOD_NAME(8),
		java::security::KeyPairGenerator::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::security::KeyPair > >
	(get_jobject());
}

local_ref< java::security::KeyPair > java::security::KeyPairGenerator::generateKeyPair()
{
	return call_method<
		java::security::KeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::KeyPairGenerator::J2CPP_METHOD_NAME(9),
		java::security::KeyPairGenerator::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::security::KeyPair > >
	(get_jobject());
}

void java::security::KeyPairGenerator::initialize(jint a0, local_ref< java::security::SecureRandom > const &a1)
{
	return call_method<
		java::security::KeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::KeyPairGenerator::J2CPP_METHOD_NAME(10),
		java::security::KeyPairGenerator::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0, a1);
}

void java::security::KeyPairGenerator::initialize(local_ref< java::security::spec::AlgorithmParameterSpec > const &a0, local_ref< java::security::SecureRandom > const &a1)
{
	return call_method<
		java::security::KeyPairGenerator::J2CPP_CLASS_NAME,
		java::security::KeyPairGenerator::J2CPP_METHOD_NAME(11),
		java::security::KeyPairGenerator::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::security::KeyPairGenerator,"java/security/KeyPairGenerator")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,1,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,2,"getInstance","(Ljava/lang/String;)Ljava/security/KeyPairGenerator;")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,3,"getInstance","(Ljava/lang/String;Ljava/lang/String;)Ljava/security/KeyPairGenerator;")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,4,"getInstance","(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/KeyPairGenerator;")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,5,"getProvider","()Ljava/security/Provider;")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,6,"initialize","(I)V")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,7,"initialize","(Ljava/security/spec/AlgorithmParameterSpec;)V")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,8,"genKeyPair","()Ljava/security/KeyPair;")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,9,"generateKeyPair","()Ljava/security/KeyPair;")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,10,"initialize","(ILjava/security/SecureRandom;)V")
J2CPP_DEFINE_METHOD(java::security::KeyPairGenerator,11,"initialize","(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/SecureRandom;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_KEYPAIRGENERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
