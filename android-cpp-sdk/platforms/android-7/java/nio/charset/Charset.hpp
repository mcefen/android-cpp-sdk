/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.nio.charset.Charset
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_DECL
#define J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class SortedMap; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace nio { class CharBuffer; } } }
namespace j2cpp { namespace java { namespace nio { class ByteBuffer; } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CharsetEncoder; } } } }
namespace j2cpp { namespace java { namespace nio { namespace charset { class CharsetDecoder; } } } }


#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/nio/ByteBuffer.hpp>
#include <java/nio/CharBuffer.hpp>
#include <java/nio/charset/CharsetDecoder.hpp>
#include <java/nio/charset/CharsetEncoder.hpp>
#include <java/util/Locale.hpp>
#include <java/util/Set.hpp>
#include <java/util/SortedMap.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace charset {

	class Charset;
	class Charset
		: public object<Charset>
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

		explicit Charset(jobject jobj)
		: object<Charset>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Comparable>() const;


		static local_ref< java::util::SortedMap > availableCharsets();
		static local_ref< java::nio::charset::Charset > forName(local_ref< java::lang::String >  const&);
		static jboolean isSupported(local_ref< java::lang::String >  const&);
		jboolean contains(local_ref< java::nio::charset::Charset >  const&);
		local_ref< java::nio::charset::CharsetEncoder > newEncoder();
		local_ref< java::nio::charset::CharsetDecoder > newDecoder();
		local_ref< java::lang::String > name();
		local_ref< java::util::Set > aliases();
		local_ref< java::lang::String > displayName();
		local_ref< java::lang::String > displayName(local_ref< java::util::Locale >  const&);
		jboolean isRegistered();
		jboolean canEncode();
		local_ref< java::nio::ByteBuffer > encode(local_ref< java::nio::CharBuffer >  const&);
		local_ref< java::nio::ByteBuffer > encode(local_ref< java::lang::String >  const&);
		local_ref< java::nio::CharBuffer > decode(local_ref< java::nio::ByteBuffer >  const&);
		jint compareTo(local_ref< java::nio::charset::Charset >  const&);
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		local_ref< java::lang::String > toString();
		static local_ref< java::nio::charset::Charset > defaultCharset();
		jint compareTo(local_ref< java::lang::Object >  const&);
	}; //class Charset

} //namespace charset
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_IMPL
#define J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_IMPL

namespace j2cpp {



java::nio::charset::Charset::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::nio::charset::Charset::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}


local_ref< java::util::SortedMap > java::nio::charset::Charset::availableCharsets()
{
	return call_static_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(1),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::util::SortedMap > >
	();
}

local_ref< java::nio::charset::Charset > java::nio::charset::Charset::forName(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(2),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::nio::charset::Charset > >
	(a0);
}

jboolean java::nio::charset::Charset::isSupported(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(3),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(a0);
}

jboolean java::nio::charset::Charset::contains(local_ref< java::nio::charset::Charset > const &a0)
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(4),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::nio::charset::CharsetEncoder > java::nio::charset::Charset::newEncoder()
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(5),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::nio::charset::CharsetEncoder > >
	(get_jobject());
}

local_ref< java::nio::charset::CharsetDecoder > java::nio::charset::Charset::newDecoder()
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(6),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::nio::charset::CharsetDecoder > >
	(get_jobject());
}

local_ref< java::lang::String > java::nio::charset::Charset::name()
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(7),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::util::Set > java::nio::charset::Charset::aliases()
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(8),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::util::Set > >
	(get_jobject());
}

local_ref< java::lang::String > java::nio::charset::Charset::displayName()
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(9),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::lang::String > java::nio::charset::Charset::displayName(local_ref< java::util::Locale > const &a0)
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(10),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

jboolean java::nio::charset::Charset::isRegistered()
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(11),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject());
}

jboolean java::nio::charset::Charset::canEncode()
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(12),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(12), 
		jboolean >
	(get_jobject());
}

local_ref< java::nio::ByteBuffer > java::nio::charset::Charset::encode(local_ref< java::nio::CharBuffer > const &a0)
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(13),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::nio::ByteBuffer > >
	(get_jobject(), a0);
}

local_ref< java::nio::ByteBuffer > java::nio::charset::Charset::encode(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(14),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::nio::ByteBuffer > >
	(get_jobject(), a0);
}

local_ref< java::nio::CharBuffer > java::nio::charset::Charset::decode(local_ref< java::nio::ByteBuffer > const &a0)
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(15),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< java::nio::CharBuffer > >
	(get_jobject(), a0);
}

jint java::nio::charset::Charset::compareTo(local_ref< java::nio::charset::Charset > const &a0)
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(16),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	(get_jobject(), a0);
}

jboolean java::nio::charset::Charset::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(17),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(17), 
		jboolean >
	(get_jobject(), a0);
}

jint java::nio::charset::Charset::hashCode()
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(18),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(18), 
		jint >
	(get_jobject());
}

local_ref< java::lang::String > java::nio::charset::Charset::toString()
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(19),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::nio::charset::Charset > java::nio::charset::Charset::defaultCharset()
{
	return call_static_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(20),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::nio::charset::Charset > >
	();
}

jint java::nio::charset::Charset::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::nio::charset::Charset::J2CPP_CLASS_NAME,
		java::nio::charset::Charset::J2CPP_METHOD_NAME(21),
		java::nio::charset::Charset::J2CPP_METHOD_SIGNATURE(21), 
		jint >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::nio::charset::Charset,"java/nio/charset/Charset")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,0,"<init>","(Ljava/lang/String;[java.lang.String)V")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,1,"availableCharsets","()Ljava/util/SortedMap;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,2,"forName","(Ljava/lang/String;)Ljava/nio/charset/Charset;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,3,"isSupported","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,4,"contains","(Ljava/nio/charset/Charset;)Z")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,5,"newEncoder","()Ljava/nio/charset/CharsetEncoder;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,6,"newDecoder","()Ljava/nio/charset/CharsetDecoder;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,7,"name","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,8,"aliases","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,9,"displayName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,10,"displayName","(Ljava/util/Locale;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,11,"isRegistered","()Z")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,12,"canEncode","()Z")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,13,"encode","(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,14,"encode","(Ljava/lang/String;)Ljava/nio/ByteBuffer;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,15,"decode","(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,16,"compareTo","(Ljava/nio/charset/Charset;)I")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,17,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,18,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,19,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,20,"defaultCharset","()Ljava/nio/charset/Charset;")
J2CPP_DEFINE_METHOD(java::nio::charset::Charset,21,"compareTo","(Ljava/lang/Object;)I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHARSET_CHARSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
