/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.sql.ConnectionPoolDataSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_DECL
#define J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace javax { namespace sql { class CommonDataSource; } } }
namespace j2cpp { namespace javax { namespace sql { class PooledConnection; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/sql/CommonDataSource.hpp>
#include <javax/sql/PooledConnection.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class ConnectionPoolDataSource;
	class ConnectionPoolDataSource
		: public object<ConnectionPoolDataSource>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit ConnectionPoolDataSource(jobject jobj)
		: object<ConnectionPoolDataSource>(jobj)
		{
		}

		operator local_ref<javax::sql::CommonDataSource>() const;
		operator local_ref<java::lang::Object>() const;


		local_ref< javax::sql::PooledConnection > getPooledConnection();
		local_ref< javax::sql::PooledConnection > getPooledConnection(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
	}; //class ConnectionPoolDataSource

} //namespace sql
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_IMPL
#define J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_IMPL

namespace j2cpp {



javax::sql::ConnectionPoolDataSource::operator local_ref<javax::sql::CommonDataSource>() const
{
	return local_ref<javax::sql::CommonDataSource>(get_jobject());
}

javax::sql::ConnectionPoolDataSource::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< javax::sql::PooledConnection > javax::sql::ConnectionPoolDataSource::getPooledConnection()
{
	return call_method<
		javax::sql::ConnectionPoolDataSource::J2CPP_CLASS_NAME,
		javax::sql::ConnectionPoolDataSource::J2CPP_METHOD_NAME(0),
		javax::sql::ConnectionPoolDataSource::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< javax::sql::PooledConnection >
	>(get_jobject());
}

local_ref< javax::sql::PooledConnection > javax::sql::ConnectionPoolDataSource::getPooledConnection(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		javax::sql::ConnectionPoolDataSource::J2CPP_CLASS_NAME,
		javax::sql::ConnectionPoolDataSource::J2CPP_METHOD_NAME(1),
		javax::sql::ConnectionPoolDataSource::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< javax::sql::PooledConnection >
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(javax::sql::ConnectionPoolDataSource,"javax/sql/ConnectionPoolDataSource")
J2CPP_DEFINE_METHOD(javax::sql::ConnectionPoolDataSource,0,"getPooledConnection","()Ljavax/sql/PooledConnection;")
J2CPP_DEFINE_METHOD(javax::sql::ConnectionPoolDataSource,1,"getPooledConnection","(Ljava/lang/String;Ljava/lang/String;)Ljavax/sql/PooledConnection;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_CONNECTIONPOOLDATASOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
