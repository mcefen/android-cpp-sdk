/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.os.StatFs
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_STATFS_HPP_DECL
#define J2CPP_ANDROID_OS_STATFS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace os {

	class StatFs;
	class StatFs
		: public object<StatFs>
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

		explicit StatFs(jobject jobj)
		: object<StatFs>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		StatFs(local_ref< java::lang::String > const&);
		void restat(local_ref< java::lang::String >  const&);
		jint getBlockSize();
		jint getBlockCount();
		jint getFreeBlocks();
		jint getAvailableBlocks();
	}; //class StatFs

} //namespace os
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_STATFS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_OS_STATFS_HPP_IMPL
#define J2CPP_ANDROID_OS_STATFS_HPP_IMPL

namespace j2cpp {



android::os::StatFs::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::os::StatFs::StatFs(local_ref< java::lang::String > const &a0)
: object<android::os::StatFs>(
	call_new_object<
		android::os::StatFs::J2CPP_CLASS_NAME,
		android::os::StatFs::J2CPP_METHOD_NAME(0),
		android::os::StatFs::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}


void android::os::StatFs::restat(local_ref< java::lang::String > const &a0)
{
	return call_method<
		android::os::StatFs::J2CPP_CLASS_NAME,
		android::os::StatFs::J2CPP_METHOD_NAME(1),
		android::os::StatFs::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject(), a0);
}


jint android::os::StatFs::getBlockSize()
{
	return call_method<
		android::os::StatFs::J2CPP_CLASS_NAME,
		android::os::StatFs::J2CPP_METHOD_NAME(3),
		android::os::StatFs::J2CPP_METHOD_SIGNATURE(3), 
		jint >
	(get_jobject());
}

jint android::os::StatFs::getBlockCount()
{
	return call_method<
		android::os::StatFs::J2CPP_CLASS_NAME,
		android::os::StatFs::J2CPP_METHOD_NAME(4),
		android::os::StatFs::J2CPP_METHOD_SIGNATURE(4), 
		jint >
	(get_jobject());
}

jint android::os::StatFs::getFreeBlocks()
{
	return call_method<
		android::os::StatFs::J2CPP_CLASS_NAME,
		android::os::StatFs::J2CPP_METHOD_NAME(5),
		android::os::StatFs::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

jint android::os::StatFs::getAvailableBlocks()
{
	return call_method<
		android::os::StatFs::J2CPP_CLASS_NAME,
		android::os::StatFs::J2CPP_METHOD_NAME(6),
		android::os::StatFs::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(android::os::StatFs,"android/os/StatFs")
J2CPP_DEFINE_METHOD(android::os::StatFs,0,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::StatFs,1,"restat","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::os::StatFs,2,"finalize","()V")
J2CPP_DEFINE_METHOD(android::os::StatFs,3,"getBlockSize","()I")
J2CPP_DEFINE_METHOD(android::os::StatFs,4,"getBlockCount","()I")
J2CPP_DEFINE_METHOD(android::os::StatFs,5,"getFreeBlocks","()I")
J2CPP_DEFINE_METHOD(android::os::StatFs,6,"getAvailableBlocks","()I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_OS_STATFS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
