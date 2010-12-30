/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.crypto.spec.SecretKeySpec
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_DECL
#define J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace javax { namespace crypto { class SecretKey; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { namespace spec { class KeySpec; } } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/security/spec/KeySpec.hpp>
#include <javax/crypto/SecretKey.hpp>


namespace j2cpp {

namespace javax { namespace crypto { namespace spec {

	class SecretKeySpec;
	class SecretKeySpec
		: public object<SecretKeySpec>
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

		explicit SecretKeySpec(jobject jobj)
		: object<SecretKeySpec>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::crypto::SecretKey>() const;
		operator local_ref<java::security::spec::KeySpec>() const;
		operator local_ref<java::io::Serializable>() const;


		SecretKeySpec(local_ref< array<jbyte,1> > const&, local_ref< java::lang::String > const&);
		SecretKeySpec(local_ref< array<jbyte,1> > const&, jint, jint, local_ref< java::lang::String > const&);
		local_ref< java::lang::String > getAlgorithm();
		local_ref< java::lang::String > getFormat();
		local_ref< array<jbyte,1> > getEncoded();
		jint hashCode();
		jboolean equals(local_ref< java::lang::Object >  const&);
	}; //class SecretKeySpec

} //namespace spec
} //namespace crypto
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_IMPL
#define J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_IMPL

namespace j2cpp {



javax::crypto::spec::SecretKeySpec::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::crypto::spec::SecretKeySpec::operator local_ref<javax::crypto::SecretKey>() const
{
	return local_ref<javax::crypto::SecretKey>(get_jobject());
}

javax::crypto::spec::SecretKeySpec::operator local_ref<java::security::spec::KeySpec>() const
{
	return local_ref<java::security::spec::KeySpec>(get_jobject());
}

javax::crypto::spec::SecretKeySpec::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


javax::crypto::spec::SecretKeySpec::SecretKeySpec(local_ref< array<jbyte,1> > const &a0, local_ref< java::lang::String > const &a1)
: object<javax::crypto::spec::SecretKeySpec>(
	call_new_object<
		javax::crypto::spec::SecretKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_NAME(0),
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



javax::crypto::spec::SecretKeySpec::SecretKeySpec(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2, local_ref< java::lang::String > const &a3)
: object<javax::crypto::spec::SecretKeySpec>(
	call_new_object<
		javax::crypto::spec::SecretKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_NAME(1),
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2, a3)
)
{
}


local_ref< java::lang::String > javax::crypto::spec::SecretKeySpec::getAlgorithm()
{
	return call_method<
		javax::crypto::spec::SecretKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_NAME(2),
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > javax::crypto::spec::SecretKeySpec::getFormat()
{
	return call_method<
		javax::crypto::spec::SecretKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_NAME(3),
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< array<jbyte,1> > javax::crypto::spec::SecretKeySpec::getEncoded()
{
	return call_method<
		javax::crypto::spec::SecretKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_NAME(4),
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< array<jbyte,1> > >
	(get_jobject());
}

jint javax::crypto::spec::SecretKeySpec::hashCode()
{
	return call_method<
		javax::crypto::spec::SecretKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_NAME(5),
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

jboolean javax::crypto::spec::SecretKeySpec::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		javax::crypto::spec::SecretKeySpec::J2CPP_CLASS_NAME,
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_NAME(6),
		javax::crypto::spec::SecretKeySpec::J2CPP_METHOD_SIGNATURE(6), 
		jboolean >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::crypto::spec::SecretKeySpec,"javax/crypto/spec/SecretKeySpec")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,0,"<init>","([BLjava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,1,"<init>","([BIILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,2,"getAlgorithm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,3,"getFormat","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,4,"getEncoded","()[B")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,5,"hashCode","()I")
J2CPP_DEFINE_METHOD(javax::crypto::spec::SecretKeySpec,6,"equals","(Ljava/lang/Object;)Z")

} //namespace j2cpp

#endif //J2CPP_JAVAX_CRYPTO_SPEC_SECRETKEYSPEC_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
