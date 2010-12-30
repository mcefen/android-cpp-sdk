/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.ObjectOutputStream
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OBJECTOUTPUTSTREAM_HPP_DECL
#define J2CPP_JAVA_IO_OBJECTOUTPUTSTREAM_HPP_DECL


namespace j2cpp { namespace java { namespace io { class ObjectOutput; } } }
namespace j2cpp { namespace java { namespace io { namespace ObjectOutputStream_ { class PutField; } } } }
namespace j2cpp { namespace java { namespace io { class ObjectStreamConstants; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/ObjectOutput.hpp>
#include <java/io/ObjectOutputStream.hpp>
#include <java/io/ObjectStreamConstants.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace io {

	class ObjectOutputStream;
	namespace ObjectOutputStream_ {

		class PutField;
		class PutField
			: public object<PutField>
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
			J2CPP_DECLARE_METHOD(9)
			J2CPP_DECLARE_METHOD(10)

			explicit PutField(jobject jobj)
			: object<PutField>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			PutField();
			void put(local_ref< java::lang::String >  const&, jboolean);
			void put(local_ref< java::lang::String >  const&, jchar);
			void put(local_ref< java::lang::String >  const&, jbyte);
			void put(local_ref< java::lang::String >  const&, jshort);
			void put(local_ref< java::lang::String >  const&, jint);
			void put(local_ref< java::lang::String >  const&, jlong);
			void put(local_ref< java::lang::String >  const&, jfloat);
			void put(local_ref< java::lang::String >  const&, jdouble);
			void put(local_ref< java::lang::String >  const&, local_ref< java::lang::Object >  const&);
			void write(local_ref< java::io::ObjectOutput >  const&);
		}; //class PutField

	} //namespace ObjectOutputStream_

	class ObjectOutputStream
		: public object<ObjectOutputStream>
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
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)
		J2CPP_DECLARE_METHOD(30)
		J2CPP_DECLARE_METHOD(31)
		J2CPP_DECLARE_METHOD(32)

		typedef ObjectOutputStream_::PutField PutField;

		explicit ObjectOutputStream(jobject jobj)
		: object<ObjectOutputStream>(jobj)
		{
		}

		operator local_ref<java::io::OutputStream>() const;
		operator local_ref<java::io::ObjectOutput>() const;
		operator local_ref<java::io::ObjectStreamConstants>() const;


		ObjectOutputStream(local_ref< java::io::OutputStream > const&);
		void close();
		void defaultWriteObject();
		void flush();
		local_ref< java::io::ObjectOutputStream_::PutField > putFields();
		void reset();
		void useProtocolVersion(jint);
		void write(local_ref< array<jbyte,1> >  const&);
		void write(local_ref< array<jbyte,1> >  const&, jint, jint);
		void write(jint);
		void writeBoolean(jboolean);
		void writeByte(jint);
		void writeBytes(local_ref< java::lang::String >  const&);
		void writeChar(jint);
		void writeChars(local_ref< java::lang::String >  const&);
		void writeDouble(jdouble);
		void writeFields();
		void writeFloat(jfloat);
		void writeInt(jint);
		void writeLong(jlong);
		void writeObject(local_ref< java::lang::Object >  const&);
		void writeUnshared(local_ref< java::lang::Object >  const&);
		void writeShort(jint);
		void writeUTF(local_ref< java::lang::String >  const&);
	}; //class ObjectOutputStream

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OBJECTOUTPUTSTREAM_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_OBJECTOUTPUTSTREAM_HPP_IMPL
#define J2CPP_JAVA_IO_OBJECTOUTPUTSTREAM_HPP_IMPL

namespace j2cpp {




java::io::ObjectOutputStream_::PutField::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::io::ObjectOutputStream_::PutField::PutField()
: object<java::io::ObjectOutputStream_::PutField>(
	call_new_object<
		java::io::ObjectOutputStream_::PutField::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_NAME(0),
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void java::io::ObjectOutputStream_::PutField::put(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		java::io::ObjectOutputStream_::PutField::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_NAME(1),
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

void java::io::ObjectOutputStream_::PutField::put(local_ref< java::lang::String > const &a0, jchar a1)
{
	return call_method<
		java::io::ObjectOutputStream_::PutField::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_NAME(2),
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

void java::io::ObjectOutputStream_::PutField::put(local_ref< java::lang::String > const &a0, jbyte a1)
{
	return call_method<
		java::io::ObjectOutputStream_::PutField::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_NAME(3),
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}

void java::io::ObjectOutputStream_::PutField::put(local_ref< java::lang::String > const &a0, jshort a1)
{
	return call_method<
		java::io::ObjectOutputStream_::PutField::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_NAME(4),
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

void java::io::ObjectOutputStream_::PutField::put(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		java::io::ObjectOutputStream_::PutField::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_NAME(5),
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1);
}

void java::io::ObjectOutputStream_::PutField::put(local_ref< java::lang::String > const &a0, jlong a1)
{
	return call_method<
		java::io::ObjectOutputStream_::PutField::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_NAME(6),
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1);
}

void java::io::ObjectOutputStream_::PutField::put(local_ref< java::lang::String > const &a0, jfloat a1)
{
	return call_method<
		java::io::ObjectOutputStream_::PutField::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_NAME(7),
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1);
}

void java::io::ObjectOutputStream_::PutField::put(local_ref< java::lang::String > const &a0, jdouble a1)
{
	return call_method<
		java::io::ObjectOutputStream_::PutField::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_NAME(8),
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1);
}

void java::io::ObjectOutputStream_::PutField::put(local_ref< java::lang::String > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::io::ObjectOutputStream_::PutField::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_NAME(9),
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1);
}

void java::io::ObjectOutputStream_::PutField::write(local_ref< java::io::ObjectOutput > const &a0)
{
	return call_method<
		java::io::ObjectOutputStream_::PutField::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_NAME(10),
		java::io::ObjectOutputStream_::PutField::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::ObjectOutputStream_::PutField,"java/io/ObjectOutputStream$PutField")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream_::PutField,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream_::PutField,1,"put","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream_::PutField,2,"put","(Ljava/lang/String;C)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream_::PutField,3,"put","(Ljava/lang/String;B)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream_::PutField,4,"put","(Ljava/lang/String;S)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream_::PutField,5,"put","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream_::PutField,6,"put","(Ljava/lang/String;J)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream_::PutField,7,"put","(Ljava/lang/String;F)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream_::PutField,8,"put","(Ljava/lang/String;D)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream_::PutField,9,"put","(Ljava/lang/String;Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream_::PutField,10,"write","(Ljava/io/ObjectOutput;)V")



java::io::ObjectOutputStream::operator local_ref<java::io::OutputStream>() const
{
	return local_ref<java::io::OutputStream>(get_jobject());
}

java::io::ObjectOutputStream::operator local_ref<java::io::ObjectOutput>() const
{
	return local_ref<java::io::ObjectOutput>(get_jobject());
}

java::io::ObjectOutputStream::operator local_ref<java::io::ObjectStreamConstants>() const
{
	return local_ref<java::io::ObjectStreamConstants>(get_jobject());
}



java::io::ObjectOutputStream::ObjectOutputStream(local_ref< java::io::OutputStream > const &a0)
: object<java::io::ObjectOutputStream>(
	call_new_object<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(1),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}




void java::io::ObjectOutputStream::close()
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(4),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject());
}

void java::io::ObjectOutputStream::defaultWriteObject()
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(5),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}



void java::io::ObjectOutputStream::flush()
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(8),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject());
}

local_ref< java::io::ObjectOutputStream_::PutField > java::io::ObjectOutputStream::putFields()
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(9),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::io::ObjectOutputStream_::PutField > >
	(get_jobject());
}


void java::io::ObjectOutputStream::reset()
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(11),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject());
}

void java::io::ObjectOutputStream::useProtocolVersion(jint a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(12),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::write(local_ref< array<jbyte,1> > const &a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(13),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::write(local_ref< array<jbyte,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(14),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::io::ObjectOutputStream::write(jint a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(15),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::writeBoolean(jboolean a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(16),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::writeByte(jint a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(17),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::writeBytes(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(18),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::writeChar(jint a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(19),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::writeChars(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(20),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::writeDouble(jdouble a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(21),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::writeFields()
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(22),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject());
}

void java::io::ObjectOutputStream::writeFloat(jfloat a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(23),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::writeInt(jint a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(24),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(24), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::writeLong(jlong a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(25),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject(), a0);
}


void java::io::ObjectOutputStream::writeObject(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(27),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject(), a0);
}

void java::io::ObjectOutputStream::writeUnshared(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(28),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(28), 
		void >
	(get_jobject(), a0);
}


void java::io::ObjectOutputStream::writeShort(jint a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(30),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(30), 
		void >
	(get_jobject(), a0);
}


void java::io::ObjectOutputStream::writeUTF(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::ObjectOutputStream::J2CPP_CLASS_NAME,
		java::io::ObjectOutputStream::J2CPP_METHOD_NAME(32),
		java::io::ObjectOutputStream::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::io::ObjectOutputStream,"java/io/ObjectOutputStream")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,1,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,2,"annotateClass","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,3,"annotateProxyClass","(Ljava/lang/Class;)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,4,"close","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,5,"defaultWriteObject","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,6,"drain","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,7,"enableReplaceObject","(Z)Z")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,8,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,9,"putFields","()Ljava/io/ObjectOutputStream$PutField;")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,10,"replaceObject","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,11,"reset","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,12,"useProtocolVersion","(I)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,13,"write","([B)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,14,"write","([BII)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,15,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,16,"writeBoolean","(Z)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,17,"writeByte","(I)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,18,"writeBytes","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,19,"writeChar","(I)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,20,"writeChars","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,21,"writeDouble","(D)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,22,"writeFields","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,23,"writeFloat","(F)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,24,"writeInt","(I)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,25,"writeLong","(J)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,26,"writeClassDescriptor","(Ljava/io/ObjectStreamClass;)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,27,"writeObject","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,28,"writeUnshared","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,29,"writeObjectOverride","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,30,"writeShort","(I)V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,31,"writeStreamHeader","()V")
J2CPP_DEFINE_METHOD(java::io::ObjectOutputStream,32,"writeUTF","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_OBJECTOUTPUTSTREAM_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
