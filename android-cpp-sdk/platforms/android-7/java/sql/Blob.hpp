/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.sql.Blob
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_BLOB_HPP_DECL
#define J2CPP_JAVA_SQL_BLOB_HPP_DECL


namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace java { namespace sql {

	class Blob;
	class Blob
		: public object<Blob>
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
		J2CPP_DECLARE_METHOD(8)

		explicit Blob(jobject jobj)
		: object<Blob>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::io::InputStream > getBinaryStream();
		local_ref< array<jbyte,1> > getBytes(jlong, jint);
		jlong length();
		jlong position(local_ref< java::sql::Blob >  const&, jlong);
		jlong position(local_ref< array<jbyte,1> >  const&, jlong);
		local_ref< java::io::OutputStream > setBinaryStream(jlong);
		jint setBytes(jlong, local_ref< array<jbyte,1> >  const&);
		jint setBytes(jlong, local_ref< array<jbyte,1> >  const&, jint, jint);
		void truncate(jlong);
	}; //class Blob

} //namespace sql
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_BLOB_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SQL_BLOB_HPP_IMPL
#define J2CPP_JAVA_SQL_BLOB_HPP_IMPL

namespace j2cpp {



java::sql::Blob::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< java::io::InputStream > java::sql::Blob::getBinaryStream()
{
	return call_method<
		java::sql::Blob::J2CPP_CLASS_NAME,
		java::sql::Blob::J2CPP_METHOD_NAME(0),
		java::sql::Blob::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::io::InputStream >
	>(get_jobject());
}

local_ref< array<jbyte,1> > java::sql::Blob::getBytes(jlong a0, jint a1)
{
	return call_method<
		java::sql::Blob::J2CPP_CLASS_NAME,
		java::sql::Blob::J2CPP_METHOD_NAME(1),
		java::sql::Blob::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array<jbyte,1> >
	>(get_jobject(), a0, a1);
}

jlong java::sql::Blob::length()
{
	return call_method<
		java::sql::Blob::J2CPP_CLASS_NAME,
		java::sql::Blob::J2CPP_METHOD_NAME(2),
		java::sql::Blob::J2CPP_METHOD_SIGNATURE(2), 
		jlong
	>(get_jobject());
}

jlong java::sql::Blob::position(local_ref< java::sql::Blob > const &a0, jlong a1)
{
	return call_method<
		java::sql::Blob::J2CPP_CLASS_NAME,
		java::sql::Blob::J2CPP_METHOD_NAME(3),
		java::sql::Blob::J2CPP_METHOD_SIGNATURE(3), 
		jlong
	>(get_jobject(), a0, a1);
}

jlong java::sql::Blob::position(local_ref< array<jbyte,1> > const &a0, jlong a1)
{
	return call_method<
		java::sql::Blob::J2CPP_CLASS_NAME,
		java::sql::Blob::J2CPP_METHOD_NAME(4),
		java::sql::Blob::J2CPP_METHOD_SIGNATURE(4), 
		jlong
	>(get_jobject(), a0, a1);
}

local_ref< java::io::OutputStream > java::sql::Blob::setBinaryStream(jlong a0)
{
	return call_method<
		java::sql::Blob::J2CPP_CLASS_NAME,
		java::sql::Blob::J2CPP_METHOD_NAME(5),
		java::sql::Blob::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::io::OutputStream >
	>(get_jobject(), a0);
}

jint java::sql::Blob::setBytes(jlong a0, local_ref< array<jbyte,1> > const &a1)
{
	return call_method<
		java::sql::Blob::J2CPP_CLASS_NAME,
		java::sql::Blob::J2CPP_METHOD_NAME(6),
		java::sql::Blob::J2CPP_METHOD_SIGNATURE(6), 
		jint
	>(get_jobject(), a0, a1);
}

jint java::sql::Blob::setBytes(jlong a0, local_ref< array<jbyte,1> > const &a1, jint a2, jint a3)
{
	return call_method<
		java::sql::Blob::J2CPP_CLASS_NAME,
		java::sql::Blob::J2CPP_METHOD_NAME(7),
		java::sql::Blob::J2CPP_METHOD_SIGNATURE(7), 
		jint
	>(get_jobject(), a0, a1, a2, a3);
}

void java::sql::Blob::truncate(jlong a0)
{
	return call_method<
		java::sql::Blob::J2CPP_CLASS_NAME,
		java::sql::Blob::J2CPP_METHOD_NAME(8),
		java::sql::Blob::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::sql::Blob,"java/sql/Blob")
J2CPP_DEFINE_METHOD(java::sql::Blob,0,"getBinaryStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::sql::Blob,1,"getBytes","(JI)[B")
J2CPP_DEFINE_METHOD(java::sql::Blob,2,"length","()J")
J2CPP_DEFINE_METHOD(java::sql::Blob,3,"position","(Ljava/sql/Blob;J)J")
J2CPP_DEFINE_METHOD(java::sql::Blob,4,"position","([BJ)J")
J2CPP_DEFINE_METHOD(java::sql::Blob,5,"setBinaryStream","(J)Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(java::sql::Blob,6,"setBytes","(J[B)I")
J2CPP_DEFINE_METHOD(java::sql::Blob,7,"setBytes","(J[BII)I")
J2CPP_DEFINE_METHOD(java::sql::Blob,8,"truncate","(J)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SQL_BLOB_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
