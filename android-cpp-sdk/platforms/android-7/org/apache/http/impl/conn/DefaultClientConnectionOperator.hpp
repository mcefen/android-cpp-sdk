/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.DefaultClientConnectionOperator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace net { class InetAddress; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace protocol { class HttpContext; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class OperatedClientConnection; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { class ClientConnectionOperator; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace conn { namespace scheme { class SchemeRegistry; } } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace params { class HttpParams; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpHost; } } } }


#include <java/lang/Object.hpp>
#include <java/net/InetAddress.hpp>
#include <org/apache/http/HttpHost.hpp>
#include <org/apache/http/conn/ClientConnectionOperator.hpp>
#include <org/apache/http/conn/OperatedClientConnection.hpp>
#include <org/apache/http/conn/scheme/SchemeRegistry.hpp>
#include <org/apache/http/params/HttpParams.hpp>
#include <org/apache/http/protocol/HttpContext.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn {

	class DefaultClientConnectionOperator;
	class DefaultClientConnectionOperator
		: public object<DefaultClientConnectionOperator>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_FIELD(0)

		explicit DefaultClientConnectionOperator(jobject jobj)
		: object<DefaultClientConnectionOperator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::conn::ClientConnectionOperator>() const;


		DefaultClientConnectionOperator(local_ref< org::apache::http::conn::scheme::SchemeRegistry > const&);
		local_ref< org::apache::http::conn::OperatedClientConnection > createConnection();
		void openConnection(local_ref< org::apache::http::conn::OperatedClientConnection >  const&, local_ref< org::apache::http::HttpHost >  const&, local_ref< java::net::InetAddress >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&, local_ref< org::apache::http::params::HttpParams >  const&);
		void updateSecureConnection(local_ref< org::apache::http::conn::OperatedClientConnection >  const&, local_ref< org::apache::http::HttpHost >  const&, local_ref< org::apache::http::protocol::HttpContext >  const&, local_ref< org::apache::http::params::HttpParams >  const&);

	}; //class DefaultClientConnectionOperator

} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::DefaultClientConnectionOperator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::conn::DefaultClientConnectionOperator::operator local_ref<org::apache::http::conn::ClientConnectionOperator>() const
{
	return local_ref<org::apache::http::conn::ClientConnectionOperator>(get_jobject());
}


org::apache::http::impl::conn::DefaultClientConnectionOperator::DefaultClientConnectionOperator(local_ref< org::apache::http::conn::scheme::SchemeRegistry > const &a0)
: object<org::apache::http::impl::conn::DefaultClientConnectionOperator>(
	call_new_object<
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


local_ref< org::apache::http::conn::OperatedClientConnection > org::apache::http::impl::conn::DefaultClientConnectionOperator::createConnection()
{
	return call_method<
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< org::apache::http::conn::OperatedClientConnection > >
	(get_jobject());
}

void org::apache::http::impl::conn::DefaultClientConnectionOperator::openConnection(local_ref< org::apache::http::conn::OperatedClientConnection > const &a0, local_ref< org::apache::http::HttpHost > const &a1, local_ref< java::net::InetAddress > const &a2, local_ref< org::apache::http::protocol::HttpContext > const &a3, local_ref< org::apache::http::params::HttpParams > const &a4)
{
	return call_method<
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void org::apache::http::impl::conn::DefaultClientConnectionOperator::updateSecureConnection(local_ref< org::apache::http::conn::OperatedClientConnection > const &a0, local_ref< org::apache::http::HttpHost > const &a1, local_ref< org::apache::http::protocol::HttpContext > const &a2, local_ref< org::apache::http::params::HttpParams > const &a3)
{
	return call_method<
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::conn::DefaultClientConnectionOperator::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}




J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::DefaultClientConnectionOperator,"org/apache/http/impl/conn/DefaultClientConnectionOperator")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnectionOperator,0,"<init>","(Lorg/apache/http/conn/scheme/SchemeRegistry;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnectionOperator,1,"createConnection","()Lorg/apache/http/conn/OperatedClientConnection;")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnectionOperator,2,"openConnection","(Lorg/apache/http/conn/OperatedClientConnection;Lorg/apache/http/HttpHost;Ljava/net/InetAddress;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnectionOperator,3,"updateSecureConnection","(Lorg/apache/http/conn/OperatedClientConnection;Lorg/apache/http/HttpHost;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::DefaultClientConnectionOperator,4,"prepareSocket","(Ljava/net/Socket;Lorg/apache/http/protocol/HttpContext;Lorg/apache/http/params/HttpParams;)V")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::DefaultClientConnectionOperator,0,"schemeRegistry","Lorg/apache/http/conn/scheme/SchemeRegistry;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_DEFAULTCLIENTCONNECTIONOPERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
