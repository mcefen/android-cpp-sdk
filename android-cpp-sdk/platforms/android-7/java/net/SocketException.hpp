/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.SocketException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SOCKETEXCEPTION_HPP_DECL
#define J2CPP_JAVA_NET_SOCKETEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class IOException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/IOException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace net {

	class SocketException;
	class SocketException
		: public object<SocketException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit SocketException(jobject jobj)
		: object<SocketException>(jobj)
		{
		}

		operator local_ref<java::io::IOException>() const;


		SocketException();
		SocketException(local_ref< java::lang::String > const&);
	}; //class SocketException

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SOCKETEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_SOCKETEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_NET_SOCKETEXCEPTION_HPP_IMPL

namespace j2cpp {



java::net::SocketException::operator local_ref<java::io::IOException>() const
{
	return local_ref<java::io::IOException>(get_jobject());
}


java::net::SocketException::SocketException()
: object<java::net::SocketException>(
	call_new_object<
		java::net::SocketException::J2CPP_CLASS_NAME,
		java::net::SocketException::J2CPP_METHOD_NAME(0),
		java::net::SocketException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::net::SocketException::SocketException(local_ref< java::lang::String > const &a0)
: object<java::net::SocketException>(
	call_new_object<
		java::net::SocketException::J2CPP_CLASS_NAME,
		java::net::SocketException::J2CPP_METHOD_NAME(1),
		java::net::SocketException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::net::SocketException,"java/net/SocketException")
J2CPP_DEFINE_METHOD(java::net::SocketException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::net::SocketException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_SOCKETEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
