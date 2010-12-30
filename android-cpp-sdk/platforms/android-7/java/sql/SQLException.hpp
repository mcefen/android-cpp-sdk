/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.SQLException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SQL_SQLEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Exception; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class SQLException;
	class SQLException
		: public object<SQLException>
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

		explicit SQLException(jobject jobj)
		: object<SQLException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::io::Serializable>() const;


		SQLException();
		SQLException(local_ref< java::lang::String > const&);
		SQLException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		SQLException(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&, jint);
		jint getErrorCode();
		local_ref< java::sql::SQLException > getNextException();
		local_ref< java::lang::String > getSQLState();
		void setNextException(local_ref< java::sql::SQLException >  const&);
	}; //class SQLException

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_SQLEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SQL_SQLEXCEPTION_HPP_IMPL

namespace j2cpp {



java::sql::SQLException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

java::sql::SQLException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::sql::SQLException::SQLException()
: object<java::sql::SQLException>(
	call_new_object<
		java::sql::SQLException::J2CPP_CLASS_NAME,
		java::sql::SQLException::J2CPP_METHOD_NAME(0),
		java::sql::SQLException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::sql::SQLException::SQLException(local_ref< java::lang::String > const &a0)
: object<java::sql::SQLException>(
	call_new_object<
		java::sql::SQLException::J2CPP_CLASS_NAME,
		java::sql::SQLException::J2CPP_METHOD_NAME(1),
		java::sql::SQLException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::sql::SQLException::SQLException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::sql::SQLException>(
	call_new_object<
		java::sql::SQLException::J2CPP_CLASS_NAME,
		java::sql::SQLException::J2CPP_METHOD_NAME(2),
		java::sql::SQLException::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



java::sql::SQLException::SQLException(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, jint a2)
: object<java::sql::SQLException>(
	call_new_object<
		java::sql::SQLException::J2CPP_CLASS_NAME,
		java::sql::SQLException::J2CPP_METHOD_NAME(3),
		java::sql::SQLException::J2CPP_METHOD_SIGNATURE(3)>
	(a0, a1, a2)
)
{
}


jint java::sql::SQLException::getErrorCode()
{
	return call_method<
		java::sql::SQLException::J2CPP_CLASS_NAME,
		java::sql::SQLException::J2CPP_METHOD_NAME(4),
		java::sql::SQLException::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

local_ref< java::sql::SQLException > java::sql::SQLException::getNextException()
{
	return call_method<
		java::sql::SQLException::J2CPP_CLASS_NAME,
		java::sql::SQLException::J2CPP_METHOD_NAME(5),
		java::sql::SQLException::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::sql::SQLException > >
	(get_jobject());
}

local_ref< java::lang::String > java::sql::SQLException::getSQLState()
{
	return call_method<
		java::sql::SQLException::J2CPP_CLASS_NAME,
		java::sql::SQLException::J2CPP_METHOD_NAME(6),
		java::sql::SQLException::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::sql::SQLException::setNextException(local_ref< java::sql::SQLException > const &a0)
{
	return call_method<
		java::sql::SQLException::J2CPP_CLASS_NAME,
		java::sql::SQLException::J2CPP_METHOD_NAME(7),
		java::sql::SQLException::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::sql::SQLException,"java/sql/SQLException")
J2CPP_DEFINE_METHOD(java::sql::SQLException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::sql::SQLException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLException,2,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::sql::SQLException,3,"<init>","(Ljava/lang/String;Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::sql::SQLException,4,"getErrorCode","()I")
J2CPP_DEFINE_METHOD(java::sql::SQLException,5,"getNextException","()Ljava/sql/SQLException;")
J2CPP_DEFINE_METHOD(java::sql::SQLException,6,"getSQLState","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::sql::SQLException,7,"setNextException","(Ljava/sql/SQLException;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_SQLEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
