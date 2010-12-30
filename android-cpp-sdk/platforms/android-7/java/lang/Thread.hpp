/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.Thread
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_THREAD_HPP_DECL
#define J2CPP_JAVA_LANG_THREAD_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class ClassLoader; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Enum; } } }
namespace j2cpp { namespace java { namespace lang { class ThreadGroup; } } }
namespace j2cpp { namespace java { namespace lang { namespace Thread_ { class UncaughtExceptionHandler; } } } }
namespace j2cpp { namespace java { namespace lang { class StackTraceElement; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { namespace Thread_ { class State; } } } }
namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }


#include <java/lang/ClassLoader.hpp>
#include <java/lang/Enum.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>
#include <java/lang/StackTraceElement.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Thread.hpp>
#include <java/lang/ThreadGroup.hpp>
#include <java/lang/Throwable.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class Thread;
	namespace Thread_ {

		class UncaughtExceptionHandler;
		class UncaughtExceptionHandler
			: public object<UncaughtExceptionHandler>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit UncaughtExceptionHandler(jobject jobj)
			: object<UncaughtExceptionHandler>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void uncaughtException(local_ref< java::lang::Thread >  const&, local_ref< java::lang::Throwable >  const&);
		}; //class UncaughtExceptionHandler

		class State;
		class State
			: public object<State>
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
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)
			J2CPP_DECLARE_FIELD(6)

			explicit State(jobject jobj)
			: object<State>(jobj)
			{
			}

			operator local_ref<java::lang::Enum>() const;


			static local_ref< array< local_ref< java::lang::Thread_::State >, 1> > values();
			static local_ref< java::lang::Thread_::State > valueOf(local_ref< java::lang::String >  const&);

			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::Thread_::State > > BLOCKED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::Thread_::State > > NEW;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::Thread_::State > > RUNNABLE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::Thread_::State > > TERMINATED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::Thread_::State > > TIMED_WAITING;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< java::lang::Thread_::State > > WAITING;
		}; //class State

	} //namespace Thread_

	class Thread
		: public object<Thread>
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
		J2CPP_DECLARE_METHOD(49)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)

		typedef Thread_::UncaughtExceptionHandler UncaughtExceptionHandler;
		typedef Thread_::State State;

		explicit Thread(jobject jobj)
		: object<Thread>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Runnable>() const;


		Thread();
		Thread(local_ref< java::lang::Runnable > const&);
		Thread(local_ref< java::lang::Runnable > const&, local_ref< java::lang::String > const&);
		Thread(local_ref< java::lang::String > const&);
		Thread(local_ref< java::lang::ThreadGroup > const&, local_ref< java::lang::Runnable > const&);
		Thread(local_ref< java::lang::ThreadGroup > const&, local_ref< java::lang::Runnable > const&, local_ref< java::lang::String > const&);
		Thread(local_ref< java::lang::ThreadGroup > const&, local_ref< java::lang::String > const&);
		Thread(local_ref< java::lang::ThreadGroup > const&, local_ref< java::lang::Runnable > const&, local_ref< java::lang::String > const&, jlong);
		static jint activeCount();
		void checkAccess();
		jint countStackFrames();
		static local_ref< java::lang::Thread > currentThread();
		void destroy();
		static void dumpStack();
		static jint enumerate(local_ref< array< local_ref< java::lang::Thread >, 1> >  const&);
		static local_ref< java::util::Map > getAllStackTraces();
		local_ref< java::lang::ClassLoader > getContextClassLoader();
		static local_ref< java::lang::Thread_::UncaughtExceptionHandler > getDefaultUncaughtExceptionHandler();
		jlong getId();
		local_ref< java::lang::String > getName();
		jint getPriority();
		local_ref< array< local_ref< java::lang::StackTraceElement >, 1> > getStackTrace();
		local_ref< java::lang::Thread_::State > getState();
		local_ref< java::lang::ThreadGroup > getThreadGroup();
		local_ref< java::lang::Thread_::UncaughtExceptionHandler > getUncaughtExceptionHandler();
		void interrupt();
		static jboolean interrupted();
		jboolean isAlive();
		jboolean isDaemon();
		jboolean isInterrupted();
		void join();
		void join(jlong);
		void join(jlong, jint);
		void resume();
		void run();
		void setContextClassLoader(local_ref< java::lang::ClassLoader >  const&);
		void setDaemon(jboolean);
		static void setDefaultUncaughtExceptionHandler(local_ref< java::lang::Thread_::UncaughtExceptionHandler >  const&);
		void setName(local_ref< java::lang::String >  const&);
		void setPriority(jint);
		void setUncaughtExceptionHandler(local_ref< java::lang::Thread_::UncaughtExceptionHandler >  const&);
		static void sleep(jlong);
		static void sleep(jlong, jint);
		void start();
		void stop();
		void stop(local_ref< java::lang::Throwable >  const&);
		void suspend();
		local_ref< java::lang::String > toString();
		static void yield();
		static jboolean holdsLock(local_ref< java::lang::Object >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > MAX_PRIORITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > MIN_PRIORITY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > NORM_PRIORITY;
	}; //class Thread

} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_THREAD_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_THREAD_HPP_IMPL
#define J2CPP_JAVA_LANG_THREAD_HPP_IMPL

namespace j2cpp {




java::lang::Thread_::UncaughtExceptionHandler::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void java::lang::Thread_::UncaughtExceptionHandler::uncaughtException(local_ref< java::lang::Thread > const &a0, local_ref< java::lang::Throwable > const &a1)
{
	return call_method<
		java::lang::Thread_::UncaughtExceptionHandler::J2CPP_CLASS_NAME,
		java::lang::Thread_::UncaughtExceptionHandler::J2CPP_METHOD_NAME(0),
		java::lang::Thread_::UncaughtExceptionHandler::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(java::lang::Thread_::UncaughtExceptionHandler,"java/lang/Thread$UncaughtExceptionHandler")
J2CPP_DEFINE_METHOD(java::lang::Thread_::UncaughtExceptionHandler,0,"uncaughtException","(Ljava/lang/Thread;Ljava/lang/Throwable;)V")


java::lang::Thread_::State::operator local_ref<java::lang::Enum>() const
{
	return local_ref<java::lang::Enum>(get_jobject());
}

local_ref< array< local_ref< java::lang::Thread_::State >, 1> > java::lang::Thread_::State::values()
{
	return call_static_method<
		java::lang::Thread_::State::J2CPP_CLASS_NAME,
		java::lang::Thread_::State::J2CPP_METHOD_NAME(0),
		java::lang::Thread_::State::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< java::lang::Thread_::State >, 1> > >
	();
}

local_ref< java::lang::Thread_::State > java::lang::Thread_::State::valueOf(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::lang::Thread_::State::J2CPP_CLASS_NAME,
		java::lang::Thread_::State::J2CPP_METHOD_NAME(1),
		java::lang::Thread_::State::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::Thread_::State > >
	(a0);
}




static_field<
	java::lang::Thread_::State::J2CPP_CLASS_NAME,
	java::lang::Thread_::State::J2CPP_FIELD_NAME(0),
	java::lang::Thread_::State::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::Thread_::State >
> java::lang::Thread_::State::BLOCKED;

static_field<
	java::lang::Thread_::State::J2CPP_CLASS_NAME,
	java::lang::Thread_::State::J2CPP_FIELD_NAME(1),
	java::lang::Thread_::State::J2CPP_FIELD_SIGNATURE(1),
	local_ref< java::lang::Thread_::State >
> java::lang::Thread_::State::NEW;

static_field<
	java::lang::Thread_::State::J2CPP_CLASS_NAME,
	java::lang::Thread_::State::J2CPP_FIELD_NAME(2),
	java::lang::Thread_::State::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::Thread_::State >
> java::lang::Thread_::State::RUNNABLE;

static_field<
	java::lang::Thread_::State::J2CPP_CLASS_NAME,
	java::lang::Thread_::State::J2CPP_FIELD_NAME(3),
	java::lang::Thread_::State::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::Thread_::State >
> java::lang::Thread_::State::TERMINATED;

static_field<
	java::lang::Thread_::State::J2CPP_CLASS_NAME,
	java::lang::Thread_::State::J2CPP_FIELD_NAME(4),
	java::lang::Thread_::State::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::Thread_::State >
> java::lang::Thread_::State::TIMED_WAITING;

static_field<
	java::lang::Thread_::State::J2CPP_CLASS_NAME,
	java::lang::Thread_::State::J2CPP_FIELD_NAME(5),
	java::lang::Thread_::State::J2CPP_FIELD_SIGNATURE(5),
	local_ref< java::lang::Thread_::State >
> java::lang::Thread_::State::WAITING;


J2CPP_DEFINE_CLASS(java::lang::Thread_::State,"java/lang/Thread$State")
J2CPP_DEFINE_METHOD(java::lang::Thread_::State,0,"values","()[java.lang.Thread.State")
J2CPP_DEFINE_METHOD(java::lang::Thread_::State,1,"valueOf","(Ljava/lang/String;)Ljava/lang/Thread$State;")
J2CPP_DEFINE_METHOD(java::lang::Thread_::State,2,"<init>","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::lang::Thread_::State,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(java::lang::Thread_::State,0,"BLOCKED","Ljava/lang/Thread$State;")
J2CPP_DEFINE_FIELD(java::lang::Thread_::State,1,"NEW","Ljava/lang/Thread$State;")
J2CPP_DEFINE_FIELD(java::lang::Thread_::State,2,"RUNNABLE","Ljava/lang/Thread$State;")
J2CPP_DEFINE_FIELD(java::lang::Thread_::State,3,"TERMINATED","Ljava/lang/Thread$State;")
J2CPP_DEFINE_FIELD(java::lang::Thread_::State,4,"TIMED_WAITING","Ljava/lang/Thread$State;")
J2CPP_DEFINE_FIELD(java::lang::Thread_::State,5,"WAITING","Ljava/lang/Thread$State;")
J2CPP_DEFINE_FIELD(java::lang::Thread_::State,6,"$VALUES","[java.lang.Thread.State")



java::lang::Thread::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::lang::Thread::operator local_ref<java::lang::Runnable>() const
{
	return local_ref<java::lang::Runnable>(get_jobject());
}


java::lang::Thread::Thread()
: object<java::lang::Thread>(
	call_new_object<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(0),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::lang::Thread::Thread(local_ref< java::lang::Runnable > const &a0)
: object<java::lang::Thread>(
	call_new_object<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(1),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::lang::Thread::Thread(local_ref< java::lang::Runnable > const &a0, local_ref< java::lang::String > const &a1)
: object<java::lang::Thread>(
	call_new_object<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(2),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1)
)
{
}



java::lang::Thread::Thread(local_ref< java::lang::String > const &a0)
: object<java::lang::Thread>(
	call_new_object<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(3),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}



java::lang::Thread::Thread(local_ref< java::lang::ThreadGroup > const &a0, local_ref< java::lang::Runnable > const &a1)
: object<java::lang::Thread>(
	call_new_object<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(4),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(4)>
	(a0, a1)
)
{
}



java::lang::Thread::Thread(local_ref< java::lang::ThreadGroup > const &a0, local_ref< java::lang::Runnable > const &a1, local_ref< java::lang::String > const &a2)
: object<java::lang::Thread>(
	call_new_object<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(5),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(5)>
	(a0, a1, a2)
)
{
}



java::lang::Thread::Thread(local_ref< java::lang::ThreadGroup > const &a0, local_ref< java::lang::String > const &a1)
: object<java::lang::Thread>(
	call_new_object<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(6),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(6)>
	(a0, a1)
)
{
}



java::lang::Thread::Thread(local_ref< java::lang::ThreadGroup > const &a0, local_ref< java::lang::Runnable > const &a1, local_ref< java::lang::String > const &a2, jlong a3)
: object<java::lang::Thread>(
	call_new_object<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(7),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(7)>
	(a0, a1, a2, a3)
)
{
}


jint java::lang::Thread::activeCount()
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(8),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(8), 
		jint >
	();
}

void java::lang::Thread::checkAccess()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(9),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject());
}

jint java::lang::Thread::countStackFrames()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(10),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(10), 
		jint >
	(get_jobject());
}

local_ref< java::lang::Thread > java::lang::Thread::currentThread()
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(11),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Thread > >
	();
}

void java::lang::Thread::destroy()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(12),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject());
}

void java::lang::Thread::dumpStack()
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(13),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(13), 
		void >
	();
}

jint java::lang::Thread::enumerate(local_ref< array< local_ref< java::lang::Thread >, 1> > const &a0)
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(14),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(a0);
}

local_ref< java::util::Map > java::lang::Thread::getAllStackTraces()
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(15),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::util::Map > >
	();
}

local_ref< java::lang::ClassLoader > java::lang::Thread::getContextClassLoader()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(16),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::ClassLoader > >
	(get_jobject());
}

local_ref< java::lang::Thread_::UncaughtExceptionHandler > java::lang::Thread::getDefaultUncaughtExceptionHandler()
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(17),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::Thread_::UncaughtExceptionHandler > >
	();
}

jlong java::lang::Thread::getId()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(18),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(18), 
		jlong >
	(get_jobject());
}

local_ref< java::lang::String > java::lang::Thread::getName()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(19),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint java::lang::Thread::getPriority()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(20),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(20), 
		jint >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::StackTraceElement >, 1> > java::lang::Thread::getStackTrace()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(21),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< array< local_ref< java::lang::StackTraceElement >, 1> > >
	(get_jobject());
}

local_ref< java::lang::Thread_::State > java::lang::Thread::getState()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(22),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::lang::Thread_::State > >
	(get_jobject());
}

local_ref< java::lang::ThreadGroup > java::lang::Thread::getThreadGroup()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(23),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::lang::ThreadGroup > >
	(get_jobject());
}

local_ref< java::lang::Thread_::UncaughtExceptionHandler > java::lang::Thread::getUncaughtExceptionHandler()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(24),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::lang::Thread_::UncaughtExceptionHandler > >
	(get_jobject());
}

void java::lang::Thread::interrupt()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(25),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(25), 
		void >
	(get_jobject());
}

jboolean java::lang::Thread::interrupted()
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(26),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(26), 
		jboolean >
	();
}

jboolean java::lang::Thread::isAlive()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(27),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(27), 
		jboolean >
	(get_jobject());
}

jboolean java::lang::Thread::isDaemon()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(28),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(28), 
		jboolean >
	(get_jobject());
}

jboolean java::lang::Thread::isInterrupted()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(29),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(29), 
		jboolean >
	(get_jobject());
}

void java::lang::Thread::join()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(30),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(30), 
		void >
	(get_jobject());
}

void java::lang::Thread::join(jlong a0)
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(31),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(31), 
		void >
	(get_jobject(), a0);
}

void java::lang::Thread::join(jlong a0, jint a1)
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(32),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0, a1);
}

void java::lang::Thread::resume()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(33),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(33), 
		void >
	(get_jobject());
}

void java::lang::Thread::run()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(34),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(34), 
		void >
	(get_jobject());
}

void java::lang::Thread::setContextClassLoader(local_ref< java::lang::ClassLoader > const &a0)
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(35),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(35), 
		void >
	(get_jobject(), a0);
}

void java::lang::Thread::setDaemon(jboolean a0)
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(36),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(36), 
		void >
	(get_jobject(), a0);
}

void java::lang::Thread::setDefaultUncaughtExceptionHandler(local_ref< java::lang::Thread_::UncaughtExceptionHandler > const &a0)
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(37),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(37), 
		void >
	(a0);
}

void java::lang::Thread::setName(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(38),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(38), 
		void >
	(get_jobject(), a0);
}

void java::lang::Thread::setPriority(jint a0)
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(39),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(39), 
		void >
	(get_jobject(), a0);
}

void java::lang::Thread::setUncaughtExceptionHandler(local_ref< java::lang::Thread_::UncaughtExceptionHandler > const &a0)
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(40),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(40), 
		void >
	(get_jobject(), a0);
}

void java::lang::Thread::sleep(jlong a0)
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(41),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(41), 
		void >
	(a0);
}

void java::lang::Thread::sleep(jlong a0, jint a1)
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(42),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(42), 
		void >
	(a0, a1);
}

void java::lang::Thread::start()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(43),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(43), 
		void >
	(get_jobject());
}

void java::lang::Thread::stop()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(44),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(44), 
		void >
	(get_jobject());
}

void java::lang::Thread::stop(local_ref< java::lang::Throwable > const &a0)
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(45),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(45), 
		void >
	(get_jobject(), a0);
}

void java::lang::Thread::suspend()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(46),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(46), 
		void >
	(get_jobject());
}

local_ref< java::lang::String > java::lang::Thread::toString()
{
	return call_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(47),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(47), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void java::lang::Thread::yield()
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(48),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(48), 
		void >
	();
}

jboolean java::lang::Thread::holdsLock(local_ref< java::lang::Object > const &a0)
{
	return call_static_method<
		java::lang::Thread::J2CPP_CLASS_NAME,
		java::lang::Thread::J2CPP_METHOD_NAME(49),
		java::lang::Thread::J2CPP_METHOD_SIGNATURE(49), 
		jboolean >
	(a0);
}


static_field<
	java::lang::Thread::J2CPP_CLASS_NAME,
	java::lang::Thread::J2CPP_FIELD_NAME(0),
	java::lang::Thread::J2CPP_FIELD_SIGNATURE(0),
	jint
> java::lang::Thread::MAX_PRIORITY;

static_field<
	java::lang::Thread::J2CPP_CLASS_NAME,
	java::lang::Thread::J2CPP_FIELD_NAME(1),
	java::lang::Thread::J2CPP_FIELD_SIGNATURE(1),
	jint
> java::lang::Thread::MIN_PRIORITY;

static_field<
	java::lang::Thread::J2CPP_CLASS_NAME,
	java::lang::Thread::J2CPP_FIELD_NAME(2),
	java::lang::Thread::J2CPP_FIELD_SIGNATURE(2),
	jint
> java::lang::Thread::NORM_PRIORITY;


J2CPP_DEFINE_CLASS(java::lang::Thread,"java/lang/Thread")
J2CPP_DEFINE_METHOD(java::lang::Thread,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,1,"<init>","(Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,2,"<init>","(Ljava/lang/Runnable;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,3,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,4,"<init>","(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,5,"<init>","(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,6,"<init>","(Ljava/lang/ThreadGroup;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,7,"<init>","(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,8,"activeCount","()I")
J2CPP_DEFINE_METHOD(java::lang::Thread,9,"checkAccess","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,10,"countStackFrames","()I")
J2CPP_DEFINE_METHOD(java::lang::Thread,11,"currentThread","()Ljava/lang/Thread;")
J2CPP_DEFINE_METHOD(java::lang::Thread,12,"destroy","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,13,"dumpStack","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,14,"enumerate","([java.lang.Thread)I")
J2CPP_DEFINE_METHOD(java::lang::Thread,15,"getAllStackTraces","()Ljava/util/Map;")
J2CPP_DEFINE_METHOD(java::lang::Thread,16,"getContextClassLoader","()Ljava/lang/ClassLoader;")
J2CPP_DEFINE_METHOD(java::lang::Thread,17,"getDefaultUncaughtExceptionHandler","()Ljava/lang/Thread$UncaughtExceptionHandler;")
J2CPP_DEFINE_METHOD(java::lang::Thread,18,"getId","()J")
J2CPP_DEFINE_METHOD(java::lang::Thread,19,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Thread,20,"getPriority","()I")
J2CPP_DEFINE_METHOD(java::lang::Thread,21,"getStackTrace","()[java.lang.StackTraceElement")
J2CPP_DEFINE_METHOD(java::lang::Thread,22,"getState","()Ljava/lang/Thread$State;")
J2CPP_DEFINE_METHOD(java::lang::Thread,23,"getThreadGroup","()Ljava/lang/ThreadGroup;")
J2CPP_DEFINE_METHOD(java::lang::Thread,24,"getUncaughtExceptionHandler","()Ljava/lang/Thread$UncaughtExceptionHandler;")
J2CPP_DEFINE_METHOD(java::lang::Thread,25,"interrupt","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,26,"interrupted","()Z")
J2CPP_DEFINE_METHOD(java::lang::Thread,27,"isAlive","()Z")
J2CPP_DEFINE_METHOD(java::lang::Thread,28,"isDaemon","()Z")
J2CPP_DEFINE_METHOD(java::lang::Thread,29,"isInterrupted","()Z")
J2CPP_DEFINE_METHOD(java::lang::Thread,30,"join","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,31,"join","(J)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,32,"join","(JI)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,33,"resume","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,34,"run","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,35,"setContextClassLoader","(Ljava/lang/ClassLoader;)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,36,"setDaemon","(Z)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,37,"setDefaultUncaughtExceptionHandler","(Ljava/lang/Thread$UncaughtExceptionHandler;)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,38,"setName","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,39,"setPriority","(I)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,40,"setUncaughtExceptionHandler","(Ljava/lang/Thread$UncaughtExceptionHandler;)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,41,"sleep","(J)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,42,"sleep","(JI)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,43,"start","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,44,"stop","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,45,"stop","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(java::lang::Thread,46,"suspend","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,47,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::lang::Thread,48,"yield","()V")
J2CPP_DEFINE_METHOD(java::lang::Thread,49,"holdsLock","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_FIELD(java::lang::Thread,0,"MAX_PRIORITY","I")
J2CPP_DEFINE_FIELD(java::lang::Thread,1,"MIN_PRIORITY","I")
J2CPP_DEFINE_FIELD(java::lang::Thread,2,"NORM_PRIORITY","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_THREAD_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
