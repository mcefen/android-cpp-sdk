/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.tsccm.RefQueueWorker
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEWORKER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEWORKER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { namespace ref { class ReferenceQueue; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class RefQueueHandler; } } } } } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/String.hpp>
#include <java/lang/ref/ReferenceQueue.hpp>
#include <org/apache/http/impl/conn/tsccm/RefQueueHandler.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class RefQueueWorker;
	class RefQueueWorker
		: public object<RefQueueWorker>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		explicit RefQueueWorker(jobject jobj)
		: object<RefQueueWorker>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Runnable>() const;


		RefQueueWorker(local_ref< java::lang::ref::ReferenceQueue > const&, local_ref< org::apache::http::impl::conn::tsccm::RefQueueHandler > const&);
		void run();
		void shutdown();
		local_ref< java::lang::String > toString();

	}; //class RefQueueWorker

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEWORKER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEWORKER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEWORKER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::tsccm::RefQueueWorker::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

org::apache::http::impl::conn::tsccm::RefQueueWorker::operator local_ref<java::lang::Runnable>() const
{
	return local_ref<java::lang::Runnable>(get_jobject());
}


org::apache::http::impl::conn::tsccm::RefQueueWorker::RefQueueWorker(local_ref< java::lang::ref::ReferenceQueue > const &a0, local_ref< org::apache::http::impl::conn::tsccm::RefQueueHandler > const &a1)
: object<org::apache::http::impl::conn::tsccm::RefQueueWorker>(
	call_new_object<
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_METHOD_SIGNATURE(0)
	>(a0, a1)
)
{
}


void org::apache::http::impl::conn::tsccm::RefQueueWorker::run()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}

void org::apache::http::impl::conn::tsccm::RefQueueWorker::shutdown()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject());
}

local_ref< java::lang::String > org::apache::http::impl::conn::tsccm::RefQueueWorker::toString()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_METHOD_NAME(3),
		org::apache::http::impl::conn::tsccm::RefQueueWorker::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(get_jobject());
}



J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::RefQueueWorker,"org/apache/http/impl/conn/tsccm/RefQueueWorker")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RefQueueWorker,0,"<init>","(Ljava/lang/ref/ReferenceQueue;Lorg/apache/http/impl/conn/tsccm/RefQueueHandler;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RefQueueWorker,1,"run","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RefQueueWorker,2,"shutdown","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::RefQueueWorker,3,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::RefQueueWorker,0,"refQueue","Ljava/lang/ref/ReferenceQueue;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::RefQueueWorker,1,"refHandler","Lorg/apache/http/impl/conn/tsccm/RefQueueHandler;")
J2CPP_DEFINE_FIELD(org::apache::http::impl::conn::tsccm::RefQueueWorker,2,"workerThread","Ljava/lang/Thread;")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_REFQUEUEWORKER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
