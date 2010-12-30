/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.auth.AuthScope
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCOPE_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCOPE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace auth {

	class AuthScope;
	class AuthScope
		: public object<AuthScope>
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
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit AuthScope(jobject jobj)
		: object<AuthScope>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		AuthScope(local_ref< java::lang::String > const&, jint, local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		AuthScope(local_ref< java::lang::String > const&, jint, local_ref< java::lang::String > const&);
		AuthScope(local_ref< java::lang::String > const&, jint);
		AuthScope(local_ref< org::apache::http::auth::AuthScope > const&);
		local_ref< java::lang::String > getHost();
		jint getPort();
		local_ref< java::lang::String > getRealm();
		local_ref< java::lang::String > getScheme();
		jint match(local_ref< org::apache::http::auth::AuthScope >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::String > toString();
		jint hashCode();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > ANY_HOST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > ANY_PORT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > ANY_REALM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > ANY_SCHEME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< org::apache::http::auth::AuthScope > > ANY;
	}; //class AuthScope

} //namespace auth
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCOPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCOPE_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCOPE_HPP_IMPL

namespace j2cpp {



org::apache::http::auth::AuthScope::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::auth::AuthScope::AuthScope(local_ref< java::lang::String > const &a0, jint a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
: object<org::apache::http::auth::AuthScope>(
	call_new_object<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(0),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2, a3)
)
{
}



org::apache::http::auth::AuthScope::AuthScope(local_ref< java::lang::String > const &a0, jint a1, local_ref< java::lang::String > const &a2)
: object<org::apache::http::auth::AuthScope>(
	call_new_object<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(1),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}



org::apache::http::auth::AuthScope::AuthScope(local_ref< java::lang::String > const &a0, jint a1)
: object<org::apache::http::auth::AuthScope>(
	call_new_object<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(2),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



org::apache::http::auth::AuthScope::AuthScope(local_ref< org::apache::http::auth::AuthScope > const &a0)
: object<org::apache::http::auth::AuthScope>(
	call_new_object<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(3),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}


local_ref< java::lang::String > org::apache::http::auth::AuthScope::getHost()
{
	return call_method<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(4),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint org::apache::http::auth::AuthScope::getPort()
{
	return call_method<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(5),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > org::apache::http::auth::AuthScope::getRealm()
{
	return call_method<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(6),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > org::apache::http::auth::AuthScope::getScheme()
{
	return call_method<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(7),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint org::apache::http::auth::AuthScope::match(local_ref< org::apache::http::auth::AuthScope > const &a0)
{
	return call_method<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(8),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	(get_jobject(), a0);
}

jboolean org::apache::http::auth::AuthScope::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(9),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::String > org::apache::http::auth::AuthScope::toString()
{
	return call_method<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(10),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint org::apache::http::auth::AuthScope::hashCode()
{
	return call_method<
		org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
		org::apache::http::auth::AuthScope::J2CPP_METHOD_NAME(11),
		org::apache::http::auth::AuthScope::J2CPP_METHOD_SIGNATURE(11), 
		jint >
	(get_jobject());
}



static_field<
	org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
	org::apache::http::auth::AuthScope::J2CPP_FIELD_NAME(0),
	org::apache::http::auth::AuthScope::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::auth::AuthScope::ANY_HOST;

static_field<
	org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
	org::apache::http::auth::AuthScope::J2CPP_FIELD_NAME(1),
	org::apache::http::auth::AuthScope::J2CPP_FIELD_SIGNATURE(1),
	jint
> org::apache::http::auth::AuthScope::ANY_PORT;

static_field<
	org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
	org::apache::http::auth::AuthScope::J2CPP_FIELD_NAME(2),
	org::apache::http::auth::AuthScope::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> org::apache::http::auth::AuthScope::ANY_REALM;

static_field<
	org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
	org::apache::http::auth::AuthScope::J2CPP_FIELD_NAME(3),
	org::apache::http::auth::AuthScope::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> org::apache::http::auth::AuthScope::ANY_SCHEME;

static_field<
	org::apache::http::auth::AuthScope::J2CPP_CLASS_NAME,
	org::apache::http::auth::AuthScope::J2CPP_FIELD_NAME(4),
	org::apache::http::auth::AuthScope::J2CPP_FIELD_SIGNATURE(4),
	local_ref< org::apache::http::auth::AuthScope >
> org::apache::http::auth::AuthScope::ANY;


J2CPP_DEFINE_CLASS(org::apache::http::auth::AuthScope,"org/apache/http/auth/AuthScope")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,0,"<init>","(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,1,"<init>","(Ljava/lang/String;ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,3,"<init>","(Lorg/apache/http/auth/AuthScope;)V")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,4,"getHost","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,5,"getPort","()I")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,6,"getRealm","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,7,"getScheme","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,8,"match","(Lorg/apache/http/auth/AuthScope;)I")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,9,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,10,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,11,"hashCode","()I")
J2CPP_DEFINE_METHOD(org::apache::http::auth::AuthScope,12,"<clinit>","()V")
J2CPP_DEFINE_FIELD(org::apache::http::auth::AuthScope,0,"ANY_HOST","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::auth::AuthScope,1,"ANY_PORT","I")
J2CPP_DEFINE_FIELD(org::apache::http::auth::AuthScope,2,"ANY_REALM","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::auth::AuthScope,3,"ANY_SCHEME","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::auth::AuthScope,4,"ANY","Lorg/apache/http/auth/AuthScope;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_AUTH_AUTHSCOPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
