/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.Savepoint
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SAVEPOINT_HPP_DECL
#define J2CPP_JAVA_SQL_SAVEPOINT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Savepoint;
	class Savepoint
		: public object<Savepoint>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit Savepoint(jobject jobj)
		: object<Savepoint>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		jint getSavepointId();
		local_ref< java::lang::String > getSavepointName();
	}; //class Savepoint

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SAVEPOINT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SAVEPOINT_HPP_IMPL
#define J2CPP_JAVA_SQL_SAVEPOINT_HPP_IMPL

namespace j2cpp {



java::sql::Savepoint::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jint java::sql::Savepoint::getSavepointId()
{
	return call_method<
		java::sql::Savepoint::J2CPP_CLASS_NAME,
		java::sql::Savepoint::J2CPP_METHOD_NAME(0),
		java::sql::Savepoint::J2CPP_METHOD_SIGNATURE(0), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > java::sql::Savepoint::getSavepointName()
{
	return call_method<
		java::sql::Savepoint::J2CPP_CLASS_NAME,
		java::sql::Savepoint::J2CPP_METHOD_NAME(1),
		java::sql::Savepoint::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::sql::Savepoint,"java/sql/Savepoint")
J2CPP_DEFINE_METHOD(java::sql::Savepoint,0,"getSavepointId","()I")
J2CPP_DEFINE_METHOD(java::sql::Savepoint,1,"getSavepointName","()Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SAVEPOINT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
