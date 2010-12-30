/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.Struct
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_STRUCT_HPP_DECL
#define J2CPP_JAVA_SQL_STRUCT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Struct;
	class Struct
		: public object<Struct>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit Struct(jobject jobj)
		: object<Struct>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::String > getSQLTypeName();
		local_ref< array< local_ref< java::lang::Object >, 1> > getAttributes();
		local_ref< array< local_ref< java::lang::Object >, 1> > getAttributes(local_ref< java::util::Map >  const&);
	}; //class Struct

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_STRUCT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_STRUCT_HPP_IMPL
#define J2CPP_JAVA_SQL_STRUCT_HPP_IMPL

namespace j2cpp {



java::sql::Struct::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::lang::String > java::sql::Struct::getSQLTypeName()
{
	return call_method<
		java::sql::Struct::J2CPP_CLASS_NAME,
		java::sql::Struct::J2CPP_METHOD_NAME(0),
		java::sql::Struct::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::sql::Struct::getAttributes()
{
	return call_method<
		java::sql::Struct::J2CPP_CLASS_NAME,
		java::sql::Struct::J2CPP_METHOD_NAME(1),
		java::sql::Struct::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::sql::Struct::getAttributes(local_ref< java::util::Map > const &a0)
{
	return call_method<
		java::sql::Struct::J2CPP_CLASS_NAME,
		java::sql::Struct::J2CPP_METHOD_NAME(2),
		java::sql::Struct::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::sql::Struct,"java/sql/Struct")
J2CPP_DEFINE_METHOD(java::sql::Struct,0,"getSQLTypeName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::Struct,1,"getAttributes","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::sql::Struct,2,"getAttributes","(Ljava/util/Map;)[java.lang.Object")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_STRUCT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
