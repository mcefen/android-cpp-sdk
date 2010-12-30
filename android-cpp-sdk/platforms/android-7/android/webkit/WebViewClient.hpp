/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.webkit.WebViewClient
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace graphics { class Bitmap; } } }
namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace android { namespace webkit { class WebView; } } }
namespace j2cpp { namespace android { namespace webkit { class HttpAuthHandler; } } }
namespace j2cpp { namespace android { namespace os { class Message; } } }


#include <android/graphics/Bitmap.hpp>
#include <android/os/Message.hpp>
#include <android/view/KeyEvent.hpp>
#include <android/webkit/HttpAuthHandler.hpp>
#include <android/webkit/WebView.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class WebViewClient;
	class WebViewClient
		: public object<WebViewClient>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)

		explicit WebViewClient(jobject jobj)
		: object<WebViewClient>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		WebViewClient();
		jboolean shouldOverrideUrlLoading(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&);
		void onPageStarted(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&, local_ref< android::graphics::Bitmap >  const&);
		void onPageFinished(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&);
		void onLoadResource(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&);
		void onTooManyRedirects(local_ref< android::webkit::WebView >  const&, local_ref< android::os::Message >  const&, local_ref< android::os::Message >  const&);
		void onReceivedError(local_ref< android::webkit::WebView >  const&, jint, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void onFormResubmission(local_ref< android::webkit::WebView >  const&, local_ref< android::os::Message >  const&, local_ref< android::os::Message >  const&);
		void doUpdateVisitedHistory(local_ref< android::webkit::WebView >  const&, local_ref< java::lang::String >  const&, jboolean);
		void onReceivedHttpAuthRequest(local_ref< android::webkit::WebView >  const&, local_ref< android::webkit::HttpAuthHandler >  const&, local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		jboolean shouldOverrideKeyEvent(local_ref< android::webkit::WebView >  const&, local_ref< android::view::KeyEvent >  const&);
		void onUnhandledKeyEvent(local_ref< android::webkit::WebView >  const&, local_ref< android::view::KeyEvent >  const&);
		void onScaleChanged(local_ref< android::webkit::WebView >  const&, jfloat, jfloat);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > ERROR_UNKNOWN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > ERROR_HOST_LOOKUP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > ERROR_UNSUPPORTED_AUTH_SCHEME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > ERROR_AUTHENTICATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > ERROR_PROXY_AUTHENTICATION;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > ERROR_CONNECT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > ERROR_IO;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > ERROR_TIMEOUT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > ERROR_REDIRECT_LOOP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > ERROR_UNSUPPORTED_SCHEME;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > ERROR_FAILED_SSL_HANDSHAKE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > ERROR_BAD_URL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > ERROR_FILE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > ERROR_FILE_NOT_FOUND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > ERROR_TOO_MANY_REQUESTS;
	}; //class WebViewClient

} //namespace webkit
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_IMPL

namespace j2cpp {



android::webkit::WebViewClient::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::webkit::WebViewClient::WebViewClient()
: object<android::webkit::WebViewClient>(
	call_new_object<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(0),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


jboolean android::webkit::WebViewClient::shouldOverrideUrlLoading(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(1),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject(), a0, a1);
}

void android::webkit::WebViewClient::onPageStarted(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1, local_ref< android::graphics::Bitmap > const &a2)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(2),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::webkit::WebViewClient::onPageFinished(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(3),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}

void android::webkit::WebViewClient::onLoadResource(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(4),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

void android::webkit::WebViewClient::onTooManyRedirects(local_ref< android::webkit::WebView > const &a0, local_ref< android::os::Message > const &a1, local_ref< android::os::Message > const &a2)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(5),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::webkit::WebViewClient::onReceivedError(local_ref< android::webkit::WebView > const &a0, jint a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(6),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

void android::webkit::WebViewClient::onFormResubmission(local_ref< android::webkit::WebView > const &a0, local_ref< android::os::Message > const &a1, local_ref< android::os::Message > const &a2)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(7),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::webkit::WebViewClient::doUpdateVisitedHistory(local_ref< android::webkit::WebView > const &a0, local_ref< java::lang::String > const &a1, jboolean a2)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(8),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::webkit::WebViewClient::onReceivedHttpAuthRequest(local_ref< android::webkit::WebView > const &a0, local_ref< android::webkit::HttpAuthHandler > const &a1, local_ref< java::lang::String > const &a2, local_ref< java::lang::String > const &a3)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(9),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(9), 
		void >
	(get_jobject(), a0, a1, a2, a3);
}

jboolean android::webkit::WebViewClient::shouldOverrideKeyEvent(local_ref< android::webkit::WebView > const &a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(10),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject(), a0, a1);
}

void android::webkit::WebViewClient::onUnhandledKeyEvent(local_ref< android::webkit::WebView > const &a0, local_ref< android::view::KeyEvent > const &a1)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(11),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(11), 
		void >
	(get_jobject(), a0, a1);
}

void android::webkit::WebViewClient::onScaleChanged(local_ref< android::webkit::WebView > const &a0, jfloat a1, jfloat a2)
{
	return call_method<
		android::webkit::WebViewClient::J2CPP_CLASS_NAME,
		android::webkit::WebViewClient::J2CPP_METHOD_NAME(12),
		android::webkit::WebViewClient::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0, a1, a2);
}


static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(0),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::webkit::WebViewClient::ERROR_UNKNOWN;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(1),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::webkit::WebViewClient::ERROR_HOST_LOOKUP;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(2),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::webkit::WebViewClient::ERROR_UNSUPPORTED_AUTH_SCHEME;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(3),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::webkit::WebViewClient::ERROR_AUTHENTICATION;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(4),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::webkit::WebViewClient::ERROR_PROXY_AUTHENTICATION;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(5),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::webkit::WebViewClient::ERROR_CONNECT;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(6),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(6),
	jint
> android::webkit::WebViewClient::ERROR_IO;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(7),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(7),
	jint
> android::webkit::WebViewClient::ERROR_TIMEOUT;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(8),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(8),
	jint
> android::webkit::WebViewClient::ERROR_REDIRECT_LOOP;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(9),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(9),
	jint
> android::webkit::WebViewClient::ERROR_UNSUPPORTED_SCHEME;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(10),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(10),
	jint
> android::webkit::WebViewClient::ERROR_FAILED_SSL_HANDSHAKE;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(11),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(11),
	jint
> android::webkit::WebViewClient::ERROR_BAD_URL;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(12),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(12),
	jint
> android::webkit::WebViewClient::ERROR_FILE;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(13),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(13),
	jint
> android::webkit::WebViewClient::ERROR_FILE_NOT_FOUND;

static_field<
	android::webkit::WebViewClient::J2CPP_CLASS_NAME,
	android::webkit::WebViewClient::J2CPP_FIELD_NAME(14),
	android::webkit::WebViewClient::J2CPP_FIELD_SIGNATURE(14),
	jint
> android::webkit::WebViewClient::ERROR_TOO_MANY_REQUESTS;


J2CPP_DEFINE_CLASS(android::webkit::WebViewClient,"android/webkit/WebViewClient")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,1,"shouldOverrideUrlLoading","(Landroid/webkit/WebView;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,2,"onPageStarted","(Landroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,3,"onPageFinished","(Landroid/webkit/WebView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,4,"onLoadResource","(Landroid/webkit/WebView;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,5,"onTooManyRedirects","(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,6,"onReceivedError","(Landroid/webkit/WebView;ILjava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,7,"onFormResubmission","(Landroid/webkit/WebView;Landroid/os/Message;Landroid/os/Message;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,8,"doUpdateVisitedHistory","(Landroid/webkit/WebView;Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,9,"onReceivedHttpAuthRequest","(Landroid/webkit/WebView;Landroid/webkit/HttpAuthHandler;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,10,"shouldOverrideKeyEvent","(Landroid/webkit/WebView;Landroid/view/KeyEvent;)Z")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,11,"onUnhandledKeyEvent","(Landroid/webkit/WebView;Landroid/view/KeyEvent;)V")
J2CPP_DEFINE_METHOD(android::webkit::WebViewClient,12,"onScaleChanged","(Landroid/webkit/WebView;FF)V")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,0,"ERROR_UNKNOWN","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,1,"ERROR_HOST_LOOKUP","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,2,"ERROR_UNSUPPORTED_AUTH_SCHEME","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,3,"ERROR_AUTHENTICATION","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,4,"ERROR_PROXY_AUTHENTICATION","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,5,"ERROR_CONNECT","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,6,"ERROR_IO","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,7,"ERROR_TIMEOUT","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,8,"ERROR_REDIRECT_LOOP","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,9,"ERROR_UNSUPPORTED_SCHEME","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,10,"ERROR_FAILED_SSL_HANDSHAKE","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,11,"ERROR_BAD_URL","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,12,"ERROR_FILE","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,13,"ERROR_FILE_NOT_FOUND","I")
J2CPP_DEFINE_FIELD(android::webkit::WebViewClient,14,"ERROR_TOO_MANY_REQUESTS","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_WEBVIEWCLIENT_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
