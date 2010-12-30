/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.net.NetPermission
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_NETPERMISSION_HPP_DECL
#define J2CPP_JAVA_NET_NETPERMISSION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class BasicPermission; } } }


#include <java/lang/String.hpp>
#include <java/security/BasicPermission.hpp>


namespace j2cpp {

namespace java { namespace net {

	class NetPermission;
	class NetPermission
		: public object<NetPermission>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit NetPermission(jobject jobj)
		: object<NetPermission>(jobj)
		{
		}

		operator local_ref<java::security::BasicPermission>() const;


		NetPermission(local_ref< java::lang::String > const&);
		NetPermission(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
	}; //class NetPermission

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_NETPERMISSION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_NETPERMISSION_HPP_IMPL
#define J2CPP_JAVA_NET_NETPERMISSION_HPP_IMPL

namespace j2cpp {



java::net::NetPermission::operator local_ref<java::security::BasicPermission>() const
{
	return local_ref<java::security::BasicPermission>(get_jobject());
}


java::net::NetPermission::NetPermission(local_ref< java::lang::String > const &a0)
: object<java::net::NetPermission>(
	call_new_object<
		java::net::NetPermission::J2CPP_CLASS_NAME,
		java::net::NetPermission::J2CPP_METHOD_NAME(0),
		java::net::NetPermission::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::net::NetPermission::NetPermission(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::net::NetPermission>(
	call_new_object<
		java::net::NetPermission::J2CPP_CLASS_NAME,
		java::net::NetPermission::J2CPP_METHOD_NAME(1),
		java::net::NetPermission::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



J2CPP_DEFINE_CLASS(java::net::NetPermission,"java/net/NetPermission")
J2CPP_DEFINE_METHOD(java::net::NetPermission,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::NetPermission,1,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_NETPERMISSION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
