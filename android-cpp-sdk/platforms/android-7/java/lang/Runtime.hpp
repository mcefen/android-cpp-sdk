/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Runtime
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_RUNTIME_HPP_DECL
#define J2CPP_JAVA_LANG_RUNTIME_HPP_DECL


namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class Process; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Thread; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/OutputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Process.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Runtime;
	class Runtime
		: public object<Runtime>
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

		explicit Runtime(jobject jobj)
		: object<Runtime>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		local_ref< java::lang::Process > exec(local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< java::lang::Process > exec(local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< java::lang::Process > exec(local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::io::File >  const&);
		local_ref< java::lang::Process > exec(local_ref< java::lang::String >  const&);
		local_ref< java::lang::Process > exec(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&);
		local_ref< java::lang::Process > exec(local_ref< java::lang::String >  const&, local_ref< array< local_ref< java::lang::String >, 1> >  const&, local_ref< java::io::File >  const&);
		void exit(jint);
		jlong freeMemory();
		void gc();
		static local_ref< java::lang::Runtime > getRuntime();
		void load(local_ref< java::lang::String >  const&);
		void loadLibrary(local_ref< java::lang::String >  const&);
		void runFinalization();
		static void runFinalizersOnExit(jboolean);
		jlong totalMemory();
		void traceInstructions(jboolean);
		void traceMethodCalls(jboolean);
		local_ref< java::io::InputStream > getLocalizedInputStream(local_ref< java::io::InputStream >  const&);
		local_ref< java::io::OutputStream > getLocalizedOutputStream(local_ref< java::io::OutputStream >  const&);
		void addShutdownHook(local_ref< java::lang::Thread >  const&);
		jboolean removeShutdownHook(local_ref< java::lang::Thread >  const&);
		void halt(jint);
		jint availableProcessors();
		jlong maxMemory();
	}; //class Runtime

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_RUNTIME_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_RUNTIME_HPP_IMPL
#define J2CPP_JAVA_LANG_RUNTIME_HPP_IMPL

namespace j2cpp {



java::lang::Runtime::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::Process > java::lang::Runtime::exec(local_ref< array< local_ref< java::lang::String >, 1> > const &a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(1),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Process > >
	(get_jobject(), a0);
}

local_ref< java::lang::Process > java::lang::Runtime::exec(local_ref< array< local_ref< java::lang::String >, 1> > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(2),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Process > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::Process > java::lang::Runtime::exec(local_ref< array< local_ref< java::lang::String >, 1> > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< java::io::File > const &a2)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(3),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::Process > >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Process > java::lang::Runtime::exec(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(4),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::Process > >
	(get_jobject(), a0);
}

local_ref< java::lang::Process > java::lang::Runtime::exec(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(5),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::Process > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::Process > java::lang::Runtime::exec(local_ref< java::lang::String > const &a0, local_ref< array< local_ref< java::lang::String >, 1> > const &a1, local_ref< java::io::File > const &a2)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(6),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Process > >
	(get_jobject(), a0, a1, a2);
}

void java::lang::Runtime::exit(jint a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(7),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

jlong java::lang::Runtime::freeMemory()
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(8),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(8), 
		jlong >
	(get_jobject());
}

void java::lang::Runtime::gc()
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(9),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject());
}

local_ref< java::lang::Runtime > java::lang::Runtime::getRuntime()
{
	return call_static_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(10),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::Runtime > >
	();
}

void java::lang::Runtime::load(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(11),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0);
}

void java::lang::Runtime::loadLibrary(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(12),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void java::lang::Runtime::runFinalization()
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(13),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject());
}

void java::lang::Runtime::runFinalizersOnExit(jboolean a0)
{
	return call_static_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(14),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(14), 
		void >
	(a0);
}

jlong java::lang::Runtime::totalMemory()
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(15),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(15), 
		jlong >
	(get_jobject());
}

void java::lang::Runtime::traceInstructions(jboolean a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(16),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

void java::lang::Runtime::traceMethodCalls(jboolean a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(17),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

local_ref< java::io::InputStream > java::lang::Runtime::getLocalizedInputStream(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(18),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::io::InputStream > >
	(get_jobject(), a0);
}

local_ref< java::io::OutputStream > java::lang::Runtime::getLocalizedOutputStream(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(19),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::io::OutputStream > >
	(get_jobject(), a0);
}

void java::lang::Runtime::addShutdownHook(local_ref< java::lang::Thread > const &a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(20),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0);
}

jboolean java::lang::Runtime::removeShutdownHook(local_ref< java::lang::Thread > const &a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(21),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(21), 
		jboolean >
	(get_jobject(), a0);
}

void java::lang::Runtime::halt(jint a0)
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(22),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0);
}

jint java::lang::Runtime::availableProcessors()
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(23),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(23), 
		jint >
	(get_jobject());
}

jlong java::lang::Runtime::maxMemory()
{
	return call_method<
		java::lang::Runtime::J2CPP_CLASS_NAME,
		java::lang::Runtime::J2CPP_METHOD_NAME(24),
		java::lang::Runtime::J2CPP_METHOD_SIGNATURE(24), 
		jlong >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::Runtime,"java/lang/Runtime")
J2CPP_DEFINE_METHOD(java::lang::Runtime,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::Runtime,1,"exec","([java.lang.String)Ljava/lang/Process;")
J2CPP_DEFINE_METHOD(java::lang::Runtime,2,"exec","([java.lang.String[java.lang.String)Ljava/lang/Process;")
J2CPP_DEFINE_METHOD(java::lang::Runtime,3,"exec","([java.lang.String[java.lang.StringLjava/io/File;)Ljava/lang/Process;")
J2CPP_DEFINE_METHOD(java::lang::Runtime,4,"exec","(Ljava/lang/String;)Ljava/lang/Process;")
J2CPP_DEFINE_METHOD(java::lang::Runtime,5,"exec","(Ljava/lang/String;[java.lang.String)Ljava/lang/Process;")
J2CPP_DEFINE_METHOD(java::lang::Runtime,6,"exec","(Ljava/lang/String;[java.lang.StringLjava/io/File;)Ljava/lang/Process;")
J2CPP_DEFINE_METHOD(java::lang::Runtime,7,"exit","(I)V")
J2CPP_DEFINE_METHOD(java::lang::Runtime,8,"freeMemory","()J")
J2CPP_DEFINE_METHOD(java::lang::Runtime,9,"gc","()V")
J2CPP_DEFINE_METHOD(java::lang::Runtime,10,"getRuntime","()Ljava/lang/Runtime;")
J2CPP_DEFINE_METHOD(java::lang::Runtime,11,"load","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Runtime,12,"loadLibrary","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Runtime,13,"runFinalization","()V")
J2CPP_DEFINE_METHOD(java::lang::Runtime,14,"runFinalizersOnExit","(Z)V")
J2CPP_DEFINE_METHOD(java::lang::Runtime,15,"totalMemory","()J")
J2CPP_DEFINE_METHOD(java::lang::Runtime,16,"traceInstructions","(Z)V")
J2CPP_DEFINE_METHOD(java::lang::Runtime,17,"traceMethodCalls","(Z)V")
J2CPP_DEFINE_METHOD(java::lang::Runtime,18,"getLocalizedInputStream","(Ljava/io/InputStream;)Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::lang::Runtime,19,"getLocalizedOutputStream","(Ljava/io/OutputStream;)Ljava/io/OutputStream;")
J2CPP_DEFINE_METHOD(java::lang::Runtime,20,"addShutdownHook","(Ljava/lang/Thread;)V")
J2CPP_DEFINE_METHOD(java::lang::Runtime,21,"removeShutdownHook","(Ljava/lang/Thread;)Z")
J2CPP_DEFINE_METHOD(java::lang::Runtime,22,"halt","(I)V")
J2CPP_DEFINE_METHOD(java::lang::Runtime,23,"availableProcessors","()I")
J2CPP_DEFINE_METHOD(java::lang::Runtime,24,"maxMemory","()J")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_RUNTIME_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
