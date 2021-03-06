/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.HttpRequest
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPREQUEST_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_HTTPREQUEST_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HttpMessage; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class RequestLine; } } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/HttpMessage.hpp>
#include <org/apache/http/RequestLine.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http {

	class HttpRequest;
	class HttpRequest
		: public object<HttpRequest>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit HttpRequest(jobject jobj)
		: object<HttpRequest>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::HttpMessage>() const;


		local_ref< org::apache::http::RequestLine > getRequestLine();
	}; //class HttpRequest

} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPREQUEST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_HTTPREQUEST_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_HTTPREQUEST_HPP_IMPL

namespace j2cpp {



org::apache::http::HttpRequest::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::HttpRequest::operator local_ref<org::apache::http::HttpMessage>() const
{
	return local_ref<org::apache::http::HttpMessage>(get_jobject());
}

local_ref< org::apache::http::RequestLine > org::apache::http::HttpRequest::getRequestLine()
{
	return call_method<
		org::apache::http::HttpRequest::J2CPP_CLASS_NAME,
		org::apache::http::HttpRequest::J2CPP_METHOD_NAME(0),
		org::apache::http::HttpRequest::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< org::apache::http::RequestLine >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(org::apache::http::HttpRequest,"org/apache/http/HttpRequest")
J2CPP_DEFINE_METHOD(org::apache::http::HttpRequest,0,"getRequestLine","()Lorg/apache/http/RequestLine;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_HTTPREQUEST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
