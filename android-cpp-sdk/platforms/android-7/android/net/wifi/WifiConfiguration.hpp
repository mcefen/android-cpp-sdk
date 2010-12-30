/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.net.wifi.WifiConfiguration
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_WIFI_WIFICONFIGURATION_HPP_DECL
#define J2CPP_ANDROID_NET_WIFI_WIFICONFIGURATION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class BitSet; } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/BitSet.hpp>


namespace j2cpp {

namespace android { namespace net { namespace wifi {

	class WifiConfiguration;
	namespace WifiConfiguration_ {

		class Protocol;
		class Protocol
			: public object<Protocol>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			explicit Protocol(jobject jobj)
			: object<Protocol>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > WPA;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > RSN;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > varName;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< array< local_ref< java::lang::String >, 1> > > strings;
		}; //class Protocol

		class GroupCipher;
		class GroupCipher
			: public object<GroupCipher>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)

			explicit GroupCipher(jobject jobj)
			: object<GroupCipher>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > WEP40;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > WEP104;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > TKIP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > CCMP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > varName;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< array< local_ref< java::lang::String >, 1> > > strings;
		}; //class GroupCipher

		class PairwiseCipher;
		class PairwiseCipher
			: public object<PairwiseCipher>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			explicit PairwiseCipher(jobject jobj)
			: object<PairwiseCipher>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > NONE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > TKIP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > CCMP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > varName;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< array< local_ref< java::lang::String >, 1> > > strings;
		}; //class PairwiseCipher

		class KeyMgmt;
		class KeyMgmt
			: public object<KeyMgmt>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)
			J2CPP_DECLARE_FIELD(5)

			explicit KeyMgmt(jobject jobj)
			: object<KeyMgmt>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > NONE;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > WPA_PSK;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > WPA_EAP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > IEEE8021X;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > varName;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< array< local_ref< java::lang::String >, 1> > > strings;
		}; //class KeyMgmt

		class Status;
		class Status
			: public object<Status>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)

			explicit Status(jobject jobj)
			: object<Status>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > CURRENT;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > DISABLED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > ENABLED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< array< local_ref< java::lang::String >, 1> > > strings;
		}; //class Status

		class AuthAlgorithm;
		class AuthAlgorithm
			: public object<AuthAlgorithm>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			explicit AuthAlgorithm(jobject jobj)
			: object<AuthAlgorithm>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;



			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > OPEN;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > SHARED;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > LEAP;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > varName;
			static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< array< local_ref< java::lang::String >, 1> > > strings;
		}; //class AuthAlgorithm

	} //namespace WifiConfiguration_

	class WifiConfiguration
		: public object<WifiConfiguration>
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
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)

		typedef WifiConfiguration_::Protocol Protocol;
		typedef WifiConfiguration_::GroupCipher GroupCipher;
		typedef WifiConfiguration_::PairwiseCipher PairwiseCipher;
		typedef WifiConfiguration_::KeyMgmt KeyMgmt;
		typedef WifiConfiguration_::Status Status;
		typedef WifiConfiguration_::AuthAlgorithm AuthAlgorithm;

		explicit WifiConfiguration(jobject jobj)
		: object<WifiConfiguration>(jobj)
		, networkId(jobj)
		, status(jobj)
		, SSID(jobj)
		, BSSID(jobj)
		, preSharedKey(jobj)
		, wepKeys(jobj)
		, wepTxKeyIndex(jobj)
		, priority(jobj)
		, hiddenSSID(jobj)
		, allowedKeyManagement(jobj)
		, allowedProtocols(jobj)
		, allowedAuthAlgorithms(jobj)
		, allowedPairwiseCiphers(jobj)
		, allowedGroupCiphers(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<android::os::Parcelable>() const;


		WifiConfiguration();
		local_ref< java::lang::String > toString();
		jint describeContents();
		void writeToParcel(local_ref< android::os::Parcel >  const&, jint);

		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > networkId;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > status;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), local_ref< java::lang::String > > SSID;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > BSSID;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > preSharedKey;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), local_ref< array< local_ref< java::lang::String >, 1> > > wepKeys;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > wepTxKeyIndex;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > priority;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jboolean > hiddenSSID;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), local_ref< java::util::BitSet > > allowedKeyManagement;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), local_ref< java::util::BitSet > > allowedProtocols;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< java::util::BitSet > > allowedAuthAlgorithms;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), local_ref< java::util::BitSet > > allowedPairwiseCiphers;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), local_ref< java::util::BitSet > > allowedGroupCiphers;
	}; //class WifiConfiguration

} //namespace wifi
} //namespace net
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_WIFI_WIFICONFIGURATION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_NET_WIFI_WIFICONFIGURATION_HPP_IMPL
#define J2CPP_ANDROID_NET_WIFI_WIFICONFIGURATION_HPP_IMPL

namespace j2cpp {




android::net::wifi::WifiConfiguration_::Protocol::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




static_field<
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_FIELD_NAME(0),
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::net::wifi::WifiConfiguration_::Protocol::WPA;

static_field<
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_FIELD_NAME(1),
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::net::wifi::WifiConfiguration_::Protocol::RSN;

static_field<
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_FIELD_NAME(2),
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_FIELD_SIGNATURE(2),
	local_ref< java::lang::String >
> android::net::wifi::WifiConfiguration_::Protocol::varName;

static_field<
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_FIELD_NAME(3),
	android::net::wifi::WifiConfiguration_::Protocol::J2CPP_FIELD_SIGNATURE(3),
	local_ref< array< local_ref< java::lang::String >, 1> >
> android::net::wifi::WifiConfiguration_::Protocol::strings;


J2CPP_DEFINE_CLASS(android::net::wifi::WifiConfiguration_::Protocol,"android/net/wifi/WifiConfiguration$Protocol")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::Protocol,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::Protocol,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::Protocol,0,"WPA","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::Protocol,1,"RSN","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::Protocol,2,"varName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::Protocol,3,"strings","[java.lang.String")


android::net::wifi::WifiConfiguration_::GroupCipher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




static_field<
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_NAME(0),
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::net::wifi::WifiConfiguration_::GroupCipher::WEP40;

static_field<
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_NAME(1),
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::net::wifi::WifiConfiguration_::GroupCipher::WEP104;

static_field<
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_NAME(2),
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::net::wifi::WifiConfiguration_::GroupCipher::TKIP;

static_field<
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_NAME(3),
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::net::wifi::WifiConfiguration_::GroupCipher::CCMP;

static_field<
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_NAME(4),
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::net::wifi::WifiConfiguration_::GroupCipher::varName;

static_field<
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_NAME(5),
	android::net::wifi::WifiConfiguration_::GroupCipher::J2CPP_FIELD_SIGNATURE(5),
	local_ref< array< local_ref< java::lang::String >, 1> >
> android::net::wifi::WifiConfiguration_::GroupCipher::strings;


J2CPP_DEFINE_CLASS(android::net::wifi::WifiConfiguration_::GroupCipher,"android/net/wifi/WifiConfiguration$GroupCipher")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::GroupCipher,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::GroupCipher,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::GroupCipher,0,"WEP40","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::GroupCipher,1,"WEP104","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::GroupCipher,2,"TKIP","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::GroupCipher,3,"CCMP","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::GroupCipher,4,"varName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::GroupCipher,5,"strings","[java.lang.String")


android::net::wifi::WifiConfiguration_::PairwiseCipher::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




static_field<
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_FIELD_NAME(0),
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::net::wifi::WifiConfiguration_::PairwiseCipher::NONE;

static_field<
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_FIELD_NAME(1),
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::net::wifi::WifiConfiguration_::PairwiseCipher::TKIP;

static_field<
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_FIELD_NAME(2),
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::net::wifi::WifiConfiguration_::PairwiseCipher::CCMP;

static_field<
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_FIELD_NAME(3),
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::net::wifi::WifiConfiguration_::PairwiseCipher::varName;

static_field<
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_FIELD_NAME(4),
	android::net::wifi::WifiConfiguration_::PairwiseCipher::J2CPP_FIELD_SIGNATURE(4),
	local_ref< array< local_ref< java::lang::String >, 1> >
> android::net::wifi::WifiConfiguration_::PairwiseCipher::strings;


J2CPP_DEFINE_CLASS(android::net::wifi::WifiConfiguration_::PairwiseCipher,"android/net/wifi/WifiConfiguration$PairwiseCipher")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::PairwiseCipher,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::PairwiseCipher,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::PairwiseCipher,0,"NONE","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::PairwiseCipher,1,"TKIP","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::PairwiseCipher,2,"CCMP","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::PairwiseCipher,3,"varName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::PairwiseCipher,4,"strings","[java.lang.String")


android::net::wifi::WifiConfiguration_::KeyMgmt::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




static_field<
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_NAME(0),
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::net::wifi::WifiConfiguration_::KeyMgmt::NONE;

static_field<
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_NAME(1),
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::net::wifi::WifiConfiguration_::KeyMgmt::WPA_PSK;

static_field<
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_NAME(2),
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::net::wifi::WifiConfiguration_::KeyMgmt::WPA_EAP;

static_field<
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_NAME(3),
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::net::wifi::WifiConfiguration_::KeyMgmt::IEEE8021X;

static_field<
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_NAME(4),
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_SIGNATURE(4),
	local_ref< java::lang::String >
> android::net::wifi::WifiConfiguration_::KeyMgmt::varName;

static_field<
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_NAME(5),
	android::net::wifi::WifiConfiguration_::KeyMgmt::J2CPP_FIELD_SIGNATURE(5),
	local_ref< array< local_ref< java::lang::String >, 1> >
> android::net::wifi::WifiConfiguration_::KeyMgmt::strings;


J2CPP_DEFINE_CLASS(android::net::wifi::WifiConfiguration_::KeyMgmt,"android/net/wifi/WifiConfiguration$KeyMgmt")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::KeyMgmt,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::KeyMgmt,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::KeyMgmt,0,"NONE","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::KeyMgmt,1,"WPA_PSK","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::KeyMgmt,2,"WPA_EAP","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::KeyMgmt,3,"IEEE8021X","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::KeyMgmt,4,"varName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::KeyMgmt,5,"strings","[java.lang.String")


android::net::wifi::WifiConfiguration_::Status::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




static_field<
	android::net::wifi::WifiConfiguration_::Status::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::Status::J2CPP_FIELD_NAME(0),
	android::net::wifi::WifiConfiguration_::Status::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::net::wifi::WifiConfiguration_::Status::CURRENT;

static_field<
	android::net::wifi::WifiConfiguration_::Status::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::Status::J2CPP_FIELD_NAME(1),
	android::net::wifi::WifiConfiguration_::Status::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::net::wifi::WifiConfiguration_::Status::DISABLED;

static_field<
	android::net::wifi::WifiConfiguration_::Status::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::Status::J2CPP_FIELD_NAME(2),
	android::net::wifi::WifiConfiguration_::Status::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::net::wifi::WifiConfiguration_::Status::ENABLED;

static_field<
	android::net::wifi::WifiConfiguration_::Status::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::Status::J2CPP_FIELD_NAME(3),
	android::net::wifi::WifiConfiguration_::Status::J2CPP_FIELD_SIGNATURE(3),
	local_ref< array< local_ref< java::lang::String >, 1> >
> android::net::wifi::WifiConfiguration_::Status::strings;


J2CPP_DEFINE_CLASS(android::net::wifi::WifiConfiguration_::Status,"android/net/wifi/WifiConfiguration$Status")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::Status,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::Status,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::Status,0,"CURRENT","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::Status,1,"DISABLED","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::Status,2,"ENABLED","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::Status,3,"strings","[java.lang.String")


android::net::wifi::WifiConfiguration_::AuthAlgorithm::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}




static_field<
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_FIELD_NAME(0),
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::net::wifi::WifiConfiguration_::AuthAlgorithm::OPEN;

static_field<
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_FIELD_NAME(1),
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::net::wifi::WifiConfiguration_::AuthAlgorithm::SHARED;

static_field<
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_FIELD_NAME(2),
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::net::wifi::WifiConfiguration_::AuthAlgorithm::LEAP;

static_field<
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_FIELD_NAME(3),
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_FIELD_SIGNATURE(3),
	local_ref< java::lang::String >
> android::net::wifi::WifiConfiguration_::AuthAlgorithm::varName;

static_field<
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_CLASS_NAME,
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_FIELD_NAME(4),
	android::net::wifi::WifiConfiguration_::AuthAlgorithm::J2CPP_FIELD_SIGNATURE(4),
	local_ref< array< local_ref< java::lang::String >, 1> >
> android::net::wifi::WifiConfiguration_::AuthAlgorithm::strings;


J2CPP_DEFINE_CLASS(android::net::wifi::WifiConfiguration_::AuthAlgorithm,"android/net/wifi/WifiConfiguration$AuthAlgorithm")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::AuthAlgorithm,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration_::AuthAlgorithm,1,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::AuthAlgorithm,0,"OPEN","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::AuthAlgorithm,1,"SHARED","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::AuthAlgorithm,2,"LEAP","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::AuthAlgorithm,3,"varName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration_::AuthAlgorithm,4,"strings","[java.lang.String")



android::net::wifi::WifiConfiguration::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

android::net::wifi::WifiConfiguration::operator local_ref<android::os::Parcelable>() const
{
	return local_ref<android::os::Parcelable>(get_jobject());
}


android::net::wifi::WifiConfiguration::WifiConfiguration()
: object<android::net::wifi::WifiConfiguration>(
	call_new_object<
		android::net::wifi::WifiConfiguration::J2CPP_CLASS_NAME,
		android::net::wifi::WifiConfiguration::J2CPP_METHOD_NAME(0),
		android::net::wifi::WifiConfiguration::J2CPP_METHOD_SIGNATURE(0)>
	()
)
, networkId(get_jobject())
, status(get_jobject())
, SSID(get_jobject())
, BSSID(get_jobject())
, preSharedKey(get_jobject())
, wepKeys(get_jobject())
, wepTxKeyIndex(get_jobject())
, priority(get_jobject())
, hiddenSSID(get_jobject())
, allowedKeyManagement(get_jobject())
, allowedProtocols(get_jobject())
, allowedAuthAlgorithms(get_jobject())
, allowedPairwiseCiphers(get_jobject())
, allowedGroupCiphers(get_jobject())
{
}


local_ref< java::lang::String > android::net::wifi::WifiConfiguration::toString()
{
	return call_method<
		android::net::wifi::WifiConfiguration::J2CPP_CLASS_NAME,
		android::net::wifi::WifiConfiguration::J2CPP_METHOD_NAME(1),
		android::net::wifi::WifiConfiguration::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint android::net::wifi::WifiConfiguration::describeContents()
{
	return call_method<
		android::net::wifi::WifiConfiguration::J2CPP_CLASS_NAME,
		android::net::wifi::WifiConfiguration::J2CPP_METHOD_NAME(2),
		android::net::wifi::WifiConfiguration::J2CPP_METHOD_SIGNATURE(2), 
		jint >
	(get_jobject());
}

void android::net::wifi::WifiConfiguration::writeToParcel(local_ref< android::os::Parcel > const &a0, jint a1)
{
	return call_method<
		android::net::wifi::WifiConfiguration::J2CPP_CLASS_NAME,
		android::net::wifi::WifiConfiguration::J2CPP_METHOD_NAME(3),
		android::net::wifi::WifiConfiguration::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0, a1);
}



J2CPP_DEFINE_CLASS(android::net::wifi::WifiConfiguration,"android/net/wifi/WifiConfiguration")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration,1,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration,2,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::net::wifi::WifiConfiguration,3,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,0,"networkId","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,1,"status","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,2,"SSID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,3,"BSSID","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,4,"preSharedKey","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,5,"wepKeys","[java.lang.String")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,6,"wepTxKeyIndex","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,7,"priority","I")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,8,"hiddenSSID","Z")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,9,"allowedKeyManagement","Ljava/util/BitSet;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,10,"allowedProtocols","Ljava/util/BitSet;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,11,"allowedAuthAlgorithms","Ljava/util/BitSet;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,12,"allowedPairwiseCiphers","Ljava/util/BitSet;")
J2CPP_DEFINE_FIELD(android::net::wifi::WifiConfiguration,13,"allowedGroupCiphers","Ljava/util/BitSet;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_NET_WIFI_WIFICONFIGURATION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
