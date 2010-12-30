/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.conn.MultihomePlainSocketFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_MULTIHOMEPLAINSOCKETFACTORY_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_CONN_MULTIHOMEPLAINSOCKETFACTORY_HPP_DECL


namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace net { class Socket; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SocketFactory; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/net/InetAddress.hpp>
#include <java/net/Socket.hpp>
#include <org/apache/http/conn/scheme/SocketFactory.hpp>
#include <org/apache/http/params/HttpParams.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace conn {

	class MultihomePlainSocketFactory;
	class MultihomePlainSocketFactory
		: public object<MultihomePlainSocketFactory>
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

		explicit MultihomePlainSocketFactory(jobject jobj)
		: object<MultihomePlainSocketFactory>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::scheme::SocketFactory>() const;


		static local_ref< org::apache::http::conn::MultihomePlainSocketFactory > getSocketFactory();
		local_ref< java::net::Socket > createSocket();
		local_ref< java::net::Socket > connectSocket(local_ref< java::net::Socket >  const&, local_ref< java::lang::String >  const&, jint, local_ref< java::net::InetAddress >  const&, jint, local_ref< org::apache::http::params::HttpParams >  const&);
		jboolean isSecure(local_ref< java::net::Socket >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
	}; //class MultihomePlainSocketFactory

} //namespace conn
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_MULTIHOMEPLAINSOCKETFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_CONN_MULTIHOMEPLAINSOCKETFACTORY_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_CONN_MULTIHOMEPLAINSOCKETFACTORY_HPP_IMPL

namespace j2cpp {



org::apache::http::conn::MultihomePlainSocketFactory::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::conn::MultihomePlainSocketFactory::operator local_ref<org::apache::http::conn::scheme::SocketFactory>() const
{
	return local_ref<org::apache::http::conn::scheme::SocketFactory>(get_jobject());
}


local_ref< org::apache::http::conn::MultihomePlainSocketFactory > org::apache::http::conn::MultihomePlainSocketFactory::getSocketFactory()
{
	return call_static_method<
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_NAME(1),
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::conn::MultihomePlainSocketFactory > >
	();
}

local_ref< java::net::Socket > org::apache::http::conn::MultihomePlainSocketFactory::createSocket()
{
	return call_method<
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_NAME(2),
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::net::Socket > >
	(get_jobject());
}

local_ref< java::net::Socket > org::apache::http::conn::MultihomePlainSocketFactory::connectSocket(local_ref< java::net::Socket > const &a0, local_ref< java::lang::String > const &a1, jint a2, local_ref< java::net::InetAddress > const &a3, jint a4, local_ref< org::apache::http::params::HttpParams > const &a5)
{
	return call_method<
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_NAME(3),
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::net::Socket > >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

jboolean org::apache::http::conn::MultihomePlainSocketFactory::isSecure(local_ref< java::net::Socket > const &a0)
{
	return call_method<
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_NAME(4),
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0);
}

jboolean org::apache::http::conn::MultihomePlainSocketFactory::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_NAME(5),
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

jint org::apache::http::conn::MultihomePlainSocketFactory::hashCode()
{
	return call_method<
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_CLASS_NAME,
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_NAME(6),
		org::apache::http::conn::MultihomePlainSocketFactory::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::conn::MultihomePlainSocketFactory,"org/apache/http/conn/MultihomePlainSocketFactory")
J2CPP_DEFINE_METHOD(org::apache::http::conn::MultihomePlainSocketFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::conn::MultihomePlainSocketFactory,1,"getSocketFactory","()Lorg/apache/http/conn/MultihomePlainSocketFactory;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::MultihomePlainSocketFactory,2,"createSocket","()Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::MultihomePlainSocketFactory,3,"connectSocket","(Ljava/net/Socket;Ljava/lang/String;ILjava/net/InetAddress;ILorg/apache/http/params/HttpParams;)Ljava/net/Socket;")
J2CPP_DEFINE_METHOD(org::apache::http::conn::MultihomePlainSocketFactory,4,"isSecure","(Ljava/net/Socket;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::MultihomePlainSocketFactory,5,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::conn::MultihomePlainSocketFactory,6,"hashCode","()I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_CONN_MULTIHOMEPLAINSOCKETFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
