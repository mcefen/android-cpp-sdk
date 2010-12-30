/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.BroadcastReceiver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_BROADCASTRECEIVER_HPP_DECL
#define J2CPP_ANDROID_CONTENT_BROADCASTRECEIVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace content { class Intent; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace os { class IBinder; } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/content/Context.hpp>
#include <android/content/Intent.hpp>
#include <android/os/Bundle.hpp>
#include <android/os/IBinder.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class BroadcastReceiver;
	class BroadcastReceiver
		: public object<BroadcastReceiver>
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

		explicit BroadcastReceiver(jobject jobj)
		: object<BroadcastReceiver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		BroadcastReceiver();
		void onReceive(local_ref< android::content::Context >  const&, local_ref< android::content::Intent >  const&);
		local_ref< android::os::IBinder > peekService(local_ref< android::content::Context >  const&, local_ref< android::content::Intent >  const&);
		void setResultCode(jint);
		jint getResultCode();
		void setResultData(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getResultData();
		void setResultExtras(local_ref< android::os::Bundle >  const&);
		local_ref< android::os::Bundle > getResultExtras(jboolean);
		void setResult(jint, local_ref< java::lang::String >  const&, local_ref< android::os::Bundle >  const&);
		jboolean getAbortBroadcast();
		void abortBroadcast();
		void clearAbortBroadcast();
		jboolean isOrderedBroadcast();
		jboolean isInitialStickyBroadcast();
		void setOrderedHint(jboolean);
		void setDebugUnregister(jboolean);
		jboolean getDebugUnregister();
	}; //class BroadcastReceiver

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_BROADCASTRECEIVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_BROADCASTRECEIVER_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_BROADCASTRECEIVER_HPP_IMPL

namespace j2cpp {



android::content::BroadcastReceiver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::content::BroadcastReceiver::BroadcastReceiver()
: object<android::content::BroadcastReceiver>(
	call_new_object<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(0),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void android::content::BroadcastReceiver::onReceive(local_ref< android::content::Context > const &a0, local_ref< android::content::Intent > const &a1)
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(1),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< android::os::IBinder > android::content::BroadcastReceiver::peekService(local_ref< android::content::Context > const &a0, local_ref< android::content::Intent > const &a1)
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(2),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< android::os::IBinder > >
	(get_jobject(), a0, a1);
}

void android::content::BroadcastReceiver::setResultCode(jint a0)
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(3),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

jint android::content::BroadcastReceiver::getResultCode()
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(4),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

void android::content::BroadcastReceiver::setResultData(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(5),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::content::BroadcastReceiver::getResultData()
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(6),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String > >
	(get_jobject());
}

void android::content::BroadcastReceiver::setResultExtras(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(7),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

local_ref< android::os::Bundle > android::content::BroadcastReceiver::getResultExtras(jboolean a0)
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(8),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::os::Bundle > >
	(get_jobject(), a0);
}

void android::content::BroadcastReceiver::setResult(jint a0, local_ref< java::lang::String > const &a1, local_ref< android::os::Bundle > const &a2)
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(9),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1, a2);
}

jboolean android::content::BroadcastReceiver::getAbortBroadcast()
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(10),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject());
}

void android::content::BroadcastReceiver::abortBroadcast()
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(11),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject());
}

void android::content::BroadcastReceiver::clearAbortBroadcast()
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(12),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject());
}

jboolean android::content::BroadcastReceiver::isOrderedBroadcast()
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(13),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(13), 
		jboolean >
	(get_jobject());
}

jboolean android::content::BroadcastReceiver::isInitialStickyBroadcast()
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(14),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(get_jobject());
}

void android::content::BroadcastReceiver::setOrderedHint(jboolean a0)
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(15),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject(), a0);
}

void android::content::BroadcastReceiver::setDebugUnregister(jboolean a0)
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(16),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

jboolean android::content::BroadcastReceiver::getDebugUnregister()
{
	return call_method<
		android::content::BroadcastReceiver::J2CPP_CLASS_NAME,
		android::content::BroadcastReceiver::J2CPP_METHOD_NAME(17),
		android::content::BroadcastReceiver::J2CPP_METHOD_SIGNATURE(17), 
		jboolean >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::content::BroadcastReceiver,"android/content/BroadcastReceiver")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,1,"onReceive","(Landroid/content/Context;Landroid/content/Intent;)V")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,2,"peekService","(Landroid/content/Context;Landroid/content/Intent;)Landroid/os/IBinder;")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,3,"setResultCode","(I)V")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,4,"getResultCode","()I")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,5,"setResultData","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,6,"getResultData","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,7,"setResultExtras","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,8,"getResultExtras","(Z)Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,9,"setResult","(ILjava/lang/String;Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,10,"getAbortBroadcast","()Z")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,11,"abortBroadcast","()V")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,12,"clearAbortBroadcast","()V")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,13,"isOrderedBroadcast","()Z")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,14,"isInitialStickyBroadcast","()Z")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,15,"setOrderedHint","(Z)V")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,16,"setDebugUnregister","(Z)V")
J2CPP_DEFINE_METHOD(android::content::BroadcastReceiver,17,"getDebugUnregister","()Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_BROADCASTRECEIVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
