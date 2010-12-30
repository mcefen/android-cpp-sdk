/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.ReceiverCallNotAllowedException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RECEIVERCALLNOTALLOWEDEXCEPTION_HPP_DECL
#define J2CPP_ANDROID_CONTENT_RECEIVERCALLNOTALLOWEDEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace util { class AndroidRuntimeException; } } }


#include <android/util/AndroidRuntimeException.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace content {

	class ReceiverCallNotAllowedException;
	class ReceiverCallNotAllowedException
		: public object<ReceiverCallNotAllowedException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit ReceiverCallNotAllowedException(jobject jobj)
		: object<ReceiverCallNotAllowedException>(jobj)
		{
		}

		operator local_ref<android::util::AndroidRuntimeException>() const;


		ReceiverCallNotAllowedException(local_ref< java::lang::String > const&);
	}; //class ReceiverCallNotAllowedException

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RECEIVERCALLNOTALLOWEDEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_RECEIVERCALLNOTALLOWEDEXCEPTION_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_RECEIVERCALLNOTALLOWEDEXCEPTION_HPP_IMPL

namespace j2cpp {



android::content::ReceiverCallNotAllowedException::operator local_ref<android::util::AndroidRuntimeException>() const
{
	return local_ref<android::util::AndroidRuntimeException>(get_jobject());
}


android::content::ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(local_ref< java::lang::String > const &a0)
: object<android::content::ReceiverCallNotAllowedException>(
	call_new_object<
		android::content::ReceiverCallNotAllowedException::J2CPP_CLASS_NAME,
		android::content::ReceiverCallNotAllowedException::J2CPP_METHOD_NAME(0),
		android::content::ReceiverCallNotAllowedException::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(android::content::ReceiverCallNotAllowedException,"android/content/ReceiverCallNotAllowedException")
J2CPP_DEFINE_METHOD(android::content::ReceiverCallNotAllowedException,0,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_RECEIVERCALLNOTALLOWEDEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
