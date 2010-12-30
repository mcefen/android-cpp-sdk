/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.io.PrintWriter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PRINTWRITER_HPP_DECL
#define J2CPP_JAVA_IO_PRINTWRITER_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace io { class Writer; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Appendable; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }


#include <java/io/File.hpp>
#include <java/io/OutputStream.hpp>
#include <java/io/Writer.hpp>
#include <java/lang/Appendable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Locale.hpp>


namespace j2cpp {

namespace java { namespace io {

	class PrintWriter;
	class PrintWriter
		: public object<PrintWriter>
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
		J2CPP_DECLARE_METHOD(33)
		J2CPP_DECLARE_METHOD(34)
		J2CPP_DECLARE_METHOD(35)
		J2CPP_DECLARE_METHOD(36)
		J2CPP_DECLARE_METHOD(37)
		J2CPP_DECLARE_METHOD(38)
		J2CPP_DECLARE_METHOD(39)
		J2CPP_DECLARE_METHOD(40)
		J2CPP_DECLARE_METHOD(41)
		J2CPP_DECLARE_METHOD(42)
		J2CPP_DECLARE_METHOD(43)
		J2CPP_DECLARE_METHOD(44)
		J2CPP_DECLARE_METHOD(45)
		J2CPP_DECLARE_METHOD(46)
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_METHOD(48)
		J2CPP_DECLARE_FIELD(0)

		explicit PrintWriter(jobject jobj)
		: object<PrintWriter>(jobj)
		{
		}

		operator local_ref<java::io::Writer>() const;


		PrintWriter(local_ref< java::io::OutputStream > const&);
		PrintWriter(local_ref< java::io::OutputStream > const&, jboolean);
		PrintWriter(local_ref< java::io::Writer > const&);
		PrintWriter(local_ref< java::io::Writer > const&, jboolean);
		PrintWriter(local_ref< java::io::File > const&);
		PrintWriter(local_ref< java::io::File > const&, local_ref< java::lang::String > const&);
		PrintWriter(local_ref< java::lang::String > const&);
		PrintWriter(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		jboolean checkError();
		void close();
		void flush();
		local_ref< java::io::PrintWriter > format(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::io::PrintWriter > format(local_ref< java::util::Locale >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::io::PrintWriter > printf(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		local_ref< java::io::PrintWriter > printf(local_ref< java::util::Locale >  const&, local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
		void print(local_ref< array<jchar,1> >  const&);
		void print(jchar);
		void print(jdouble);
		void print(jfloat);
		void print(jint);
		void print(jlong);
		void print(local_ref< java::lang::Object >  const&);
		void print(local_ref< java::lang::String >  const&);
		void print(jboolean);
		void println();
		void println(local_ref< array<jchar,1> >  const&);
		void println(jchar);
		void println(jdouble);
		void println(jfloat);
		void println(jint);
		void println(jlong);
		void println(local_ref< java::lang::Object >  const&);
		void println(local_ref< java::lang::String >  const&);
		void println(jboolean);
		void write(local_ref< array<jchar,1> >  const&);
		void write(local_ref< array<jchar,1> >  const&, jint, jint);
		void write(jint);
		void write(local_ref< java::lang::String >  const&);
		void write(local_ref< java::lang::String >  const&, jint, jint);
		local_ref< java::io::PrintWriter > append(jchar);
		local_ref< java::io::PrintWriter > append(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::io::PrintWriter > append(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::io::Writer > append_1(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::io::Writer > append_1(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::io::Writer > append_1(jchar);
		local_ref< java::lang::Appendable > append_2(local_ref< java::lang::CharSequence >  const&, jint, jint);
		local_ref< java::lang::Appendable > append_2(local_ref< java::lang::CharSequence >  const&);
		local_ref< java::lang::Appendable > append_2(jchar);

	}; //class PrintWriter

} //namespace io
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PRINTWRITER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_IO_PRINTWRITER_HPP_IMPL
#define J2CPP_JAVA_IO_PRINTWRITER_HPP_IMPL

namespace j2cpp {



java::io::PrintWriter::operator local_ref<java::io::Writer>() const
{
	return local_ref<java::io::Writer>(get_jobject());
}


java::io::PrintWriter::PrintWriter(local_ref< java::io::OutputStream > const &a0)
: object<java::io::PrintWriter>(
	call_new_object<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(0),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



java::io::PrintWriter::PrintWriter(local_ref< java::io::OutputStream > const &a0, jboolean a1)
: object<java::io::PrintWriter>(
	call_new_object<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(1),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



java::io::PrintWriter::PrintWriter(local_ref< java::io::Writer > const &a0)
: object<java::io::PrintWriter>(
	call_new_object<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(2),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(2)>
	(a0)
)
{
}



java::io::PrintWriter::PrintWriter(local_ref< java::io::Writer > const &a0, jboolean a1)
: object<java::io::PrintWriter>(
	call_new_object<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(3),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(3)>
	(a0, a1)
)
{
}



java::io::PrintWriter::PrintWriter(local_ref< java::io::File > const &a0)
: object<java::io::PrintWriter>(
	call_new_object<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(4),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(4)>
	(a0)
)
{
}



java::io::PrintWriter::PrintWriter(local_ref< java::io::File > const &a0, local_ref< java::lang::String > const &a1)
: object<java::io::PrintWriter>(
	call_new_object<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(5),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(5)>
	(a0, a1)
)
{
}



java::io::PrintWriter::PrintWriter(local_ref< java::lang::String > const &a0)
: object<java::io::PrintWriter>(
	call_new_object<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(6),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(6)>
	(a0)
)
{
}



java::io::PrintWriter::PrintWriter(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
: object<java::io::PrintWriter>(
	call_new_object<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(7),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(7)>
	(a0, a1)
)
{
}


jboolean java::io::PrintWriter::checkError()
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(8),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject());
}

void java::io::PrintWriter::close()
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(9),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject());
}

void java::io::PrintWriter::flush()
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(10),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject());
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::format(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::Object >, 1> > const &a1)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(11),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::io::PrintWriter > >
	(get_jobject(), a0, a1);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::format(local_ref< java::util::Locale > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(12),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::io::PrintWriter > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::printf(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::Object >, 1> > const &a1)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(13),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::io::PrintWriter > >
	(get_jobject(), a0, a1);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::printf(local_ref< java::util::Locale > const &a0, local_ref< java::lang::String > const &a1, local_ref< array< local_ref< java::lang::Object >, 1> > const &a2)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(14),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::io::PrintWriter > >
	(get_jobject(), a0, a1, a2);
}

void java::io::PrintWriter::print(local_ref< array<jchar,1> > const &a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(15),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::print(jchar a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(16),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::print(jdouble a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(17),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::print(jfloat a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(18),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::print(jint a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(19),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::print(jlong a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(20),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::print(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(21),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::print(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(22),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::print(jboolean a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(23),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(23), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::println()
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(24),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(24), 
		void >
	(get_jobject());
}

void java::io::PrintWriter::println(local_ref< array<jchar,1> > const &a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(25),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::println(jchar a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(26),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(26), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::println(jdouble a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(27),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::println(jfloat a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(28),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(28), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::println(jint a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(29),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(29), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::println(jlong a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(30),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(30), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::println(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(31),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(31), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::println(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(32),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::println(jboolean a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(33),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(33), 
		void >
	(get_jobject(), a0);
}


void java::io::PrintWriter::write(local_ref< array<jchar,1> > const &a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(35),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(35), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::write(local_ref< array<jchar,1> > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(36),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(36), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::io::PrintWriter::write(jint a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(37),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(37), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::write(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(38),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(38), 
		void >
	(get_jobject(), a0);
}

void java::io::PrintWriter::write(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(39),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(39), 
		void >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::append(jchar a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(40),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(40), 
		local_ref< java::io::PrintWriter > >
	(get_jobject(), a0);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::append(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(41),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(41), 
		local_ref< java::io::PrintWriter > >
	(get_jobject(), a0);
}

local_ref< java::io::PrintWriter > java::io::PrintWriter::append(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(42),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(42), 
		local_ref< java::io::PrintWriter > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::io::Writer > java::io::PrintWriter::append_1(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(43),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(43), 
		local_ref< java::io::Writer > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::io::Writer > java::io::PrintWriter::append_1(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(44),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(44), 
		local_ref< java::io::Writer > >
	(get_jobject(), a0);
}

local_ref< java::io::Writer > java::io::PrintWriter::append_1(jchar a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(45),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(45), 
		local_ref< java::io::Writer > >
	(get_jobject(), a0);
}

local_ref< java::lang::Appendable > java::io::PrintWriter::append_2(local_ref< java::lang::CharSequence > const &a0, jint a1, jint a2)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(46),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(46), 
		local_ref< java::lang::Appendable > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Appendable > java::io::PrintWriter::append_2(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(47),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(47), 
		local_ref< java::lang::Appendable > >
	(get_jobject(), a0);
}

local_ref< java::lang::Appendable > java::io::PrintWriter::append_2(jchar a0)
{
	return call_method<
		java::io::PrintWriter::J2CPP_CLASS_NAME,
		java::io::PrintWriter::J2CPP_METHOD_NAME(48),
		java::io::PrintWriter::J2CPP_METHOD_SIGNATURE(48), 
		local_ref< java::lang::Appendable > >
	(get_jobject(), a0);
}



J2CPP_DEFINE_CLASS(java::io::PrintWriter,"java/io/PrintWriter")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,0,"<init>","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,1,"<init>","(Ljava/io/OutputStream;Z)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,2,"<init>","(Ljava/io/Writer;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,3,"<init>","(Ljava/io/Writer;Z)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,4,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,5,"<init>","(Ljava/io/File;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,6,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,7,"<init>","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,8,"checkError","()Z")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,9,"close","()V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,10,"flush","()V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,11,"format","(Ljava/lang/String;[java.lang.Object)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,12,"format","(Ljava/util/Locale;Ljava/lang/String;[java.lang.Object)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,13,"printf","(Ljava/lang/String;[java.lang.Object)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,14,"printf","(Ljava/util/Locale;Ljava/lang/String;[java.lang.Object)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,15,"print","([C)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,16,"print","(C)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,17,"print","(D)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,18,"print","(F)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,19,"print","(I)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,20,"print","(J)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,21,"print","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,22,"print","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,23,"print","(Z)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,24,"println","()V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,25,"println","([C)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,26,"println","(C)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,27,"println","(D)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,28,"println","(F)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,29,"println","(I)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,30,"println","(J)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,31,"println","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,32,"println","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,33,"println","(Z)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,34,"setError","()V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,35,"write","([C)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,36,"write","([CII)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,37,"write","(I)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,38,"write","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,39,"write","(Ljava/lang/String;II)V")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,40,"append","(C)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,41,"append","(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,42,"append","(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,43,"append","(Ljava/lang/CharSequence;II)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,44,"append","(Ljava/lang/CharSequence;)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,45,"append","(C)Ljava/io/Writer;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,46,"append","(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,47,"append","(Ljava/lang/CharSequence;)Ljava/lang/Appendable;")
J2CPP_DEFINE_METHOD(java::io::PrintWriter,48,"append","(C)Ljava/lang/Appendable;")
J2CPP_DEFINE_FIELD(java::io::PrintWriter,0,"out","Ljava/io/Writer;")

} //namespace j2cpp

#endif //J2CPP_JAVA_IO_PRINTWRITER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
