/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.prefs.AbstractPreferences
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_HPP_DECL
#define J2CPP_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_HPP_DECL


namespace j2cpp { namespace java { namespace io { class OutputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { namespace prefs { class PreferenceChangeListener; } } } }
namespace j2cpp { namespace java { namespace util { namespace prefs { class Preferences; } } } }
namespace j2cpp { namespace java { namespace util { namespace prefs { class NodeChangeListener; } } } }


#include <java/io/OutputStream.hpp>
#include <java/lang/String.hpp>
#include <java/util/prefs/NodeChangeListener.hpp>
#include <java/util/prefs/PreferenceChangeListener.hpp>
#include <java/util/prefs/Preferences.hpp>


namespace j2cpp {

namespace java { namespace util { namespace prefs {

	class AbstractPreferences;
	class AbstractPreferences
		: public object<AbstractPreferences>
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
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)

		explicit AbstractPreferences(jobject jobj)
		: object<AbstractPreferences>(jobj)
		{
		}

		operator local_ref<java::util::prefs::Preferences>() const;


		local_ref< java::lang::String > absolutePath();
		local_ref< array< local_ref< java::lang::String >, 1> > childrenNames();
		void clear();
		void exportNode(local_ref< java::io::OutputStream >  const&);
		void exportSubtree(local_ref< java::io::OutputStream >  const&);
		void flush();
		local_ref< java::lang::String > get(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		jboolean getBoolean(local_ref< java::lang::String >  const&, jboolean);
		local_ref< array<jbyte,1> > getByteArray(local_ref< java::lang::String >  const&, local_ref< array<jbyte,1> >  const&);
		jdouble getDouble(local_ref< java::lang::String >  const&, jdouble);
		jfloat getFloat(local_ref< java::lang::String >  const&, jfloat);
		jint getInt(local_ref< java::lang::String >  const&, jint);
		jlong getLong(local_ref< java::lang::String >  const&, jlong);
		jboolean isUserNode();
		local_ref< array< local_ref< java::lang::String >, 1> > keys();
		local_ref< java::lang::String > name();
		local_ref< java::util::prefs::Preferences > node(local_ref< java::lang::String >  const&);
		jboolean nodeExists(local_ref< java::lang::String >  const&);
		local_ref< java::util::prefs::Preferences > parent();
		void put(local_ref< java::lang::String >  const&, local_ref< java::lang::String >  const&);
		void putBoolean(local_ref< java::lang::String >  const&, jboolean);
		void putByteArray(local_ref< java::lang::String >  const&, local_ref< array<jbyte,1> >  const&);
		void putDouble(local_ref< java::lang::String >  const&, jdouble);
		void putFloat(local_ref< java::lang::String >  const&, jfloat);
		void putInt(local_ref< java::lang::String >  const&, jint);
		void putLong(local_ref< java::lang::String >  const&, jlong);
		void remove(local_ref< java::lang::String >  const&);
		void removeNode();
		void addNodeChangeListener(local_ref< java::util::prefs::NodeChangeListener >  const&);
		void addPreferenceChangeListener(local_ref< java::util::prefs::PreferenceChangeListener >  const&);
		void removeNodeChangeListener(local_ref< java::util::prefs::NodeChangeListener >  const&);
		void removePreferenceChangeListener(local_ref< java::util::prefs::PreferenceChangeListener >  const&);
		void sync();
		local_ref< java::lang::String > toString();

	}; //class AbstractPreferences

} //namespace prefs
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_HPP_IMPL
#define J2CPP_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_HPP_IMPL

namespace j2cpp {



java::util::prefs::AbstractPreferences::operator local_ref<java::util::prefs::Preferences>() const
{
	return local_ref<java::util::prefs::Preferences>(get_jobject());
}














local_ref< java::lang::String > java::util::prefs::AbstractPreferences::absolutePath()
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(13),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > java::util::prefs::AbstractPreferences::childrenNames()
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(14),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject());
}

void java::util::prefs::AbstractPreferences::clear()
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(15),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(15), 
		void >
	(get_jobject());
}

void java::util::prefs::AbstractPreferences::exportNode(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(16),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(16), 
		void >
	(get_jobject(), a0);
}

void java::util::prefs::AbstractPreferences::exportSubtree(local_ref< java::io::OutputStream > const &a0)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(17),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject(), a0);
}

void java::util::prefs::AbstractPreferences::flush()
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(18),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(18), 
		void >
	(get_jobject());
}

local_ref< java::lang::String > java::util::prefs::AbstractPreferences::get(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(19),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::String > >
	(get_jobject(), a0, a1);
}

jboolean java::util::prefs::AbstractPreferences::getBoolean(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(20),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(20), 
		jboolean >
	(get_jobject(), a0, a1);
}

local_ref< array<jbyte,1> > java::util::prefs::AbstractPreferences::getByteArray(local_ref< java::lang::String > const &a0, local_ref< array<jbyte,1> > const &a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(21),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< array<jbyte,1> > >
	(get_jobject(), a0, a1);
}

jdouble java::util::prefs::AbstractPreferences::getDouble(local_ref< java::lang::String > const &a0, jdouble a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(22),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(22), 
		jdouble >
	(get_jobject(), a0, a1);
}

jfloat java::util::prefs::AbstractPreferences::getFloat(local_ref< java::lang::String > const &a0, jfloat a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(23),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(23), 
		jfloat >
	(get_jobject(), a0, a1);
}

jint java::util::prefs::AbstractPreferences::getInt(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(24),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(24), 
		jint >
	(get_jobject(), a0, a1);
}

jlong java::util::prefs::AbstractPreferences::getLong(local_ref< java::lang::String > const &a0, jlong a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(25),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(25), 
		jlong >
	(get_jobject(), a0, a1);
}

jboolean java::util::prefs::AbstractPreferences::isUserNode()
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(26),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(26), 
		jboolean >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::String >, 1> > java::util::prefs::AbstractPreferences::keys()
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(27),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< array< local_ref< java::lang::String >, 1> > >
	(get_jobject());
}

local_ref< java::lang::String > java::util::prefs::AbstractPreferences::name()
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(28),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< java::lang::String > >
	(get_jobject());
}

local_ref< java::util::prefs::Preferences > java::util::prefs::AbstractPreferences::node(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(29),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< java::util::prefs::Preferences > >
	(get_jobject(), a0);
}

jboolean java::util::prefs::AbstractPreferences::nodeExists(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(30),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(30), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::util::prefs::Preferences > java::util::prefs::AbstractPreferences::parent()
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(31),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< java::util::prefs::Preferences > >
	(get_jobject());
}

void java::util::prefs::AbstractPreferences::put(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(32),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(32), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::prefs::AbstractPreferences::putBoolean(local_ref< java::lang::String > const &a0, jboolean a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(33),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(33), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::prefs::AbstractPreferences::putByteArray(local_ref< java::lang::String > const &a0, local_ref< array<jbyte,1> > const &a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(34),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(34), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::prefs::AbstractPreferences::putDouble(local_ref< java::lang::String > const &a0, jdouble a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(35),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(35), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::prefs::AbstractPreferences::putFloat(local_ref< java::lang::String > const &a0, jfloat a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(36),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(36), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::prefs::AbstractPreferences::putInt(local_ref< java::lang::String > const &a0, jint a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(37),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(37), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::prefs::AbstractPreferences::putLong(local_ref< java::lang::String > const &a0, jlong a1)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(38),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(38), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::prefs::AbstractPreferences::remove(local_ref< java::lang::String > const &a0)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(39),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(39), 
		void >
	(get_jobject(), a0);
}

void java::util::prefs::AbstractPreferences::removeNode()
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(40),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(40), 
		void >
	(get_jobject());
}

void java::util::prefs::AbstractPreferences::addNodeChangeListener(local_ref< java::util::prefs::NodeChangeListener > const &a0)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(41),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(41), 
		void >
	(get_jobject(), a0);
}

void java::util::prefs::AbstractPreferences::addPreferenceChangeListener(local_ref< java::util::prefs::PreferenceChangeListener > const &a0)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(42),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(42), 
		void >
	(get_jobject(), a0);
}

void java::util::prefs::AbstractPreferences::removeNodeChangeListener(local_ref< java::util::prefs::NodeChangeListener > const &a0)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(43),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(43), 
		void >
	(get_jobject(), a0);
}

void java::util::prefs::AbstractPreferences::removePreferenceChangeListener(local_ref< java::util::prefs::PreferenceChangeListener > const &a0)
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(44),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(44), 
		void >
	(get_jobject(), a0);
}

void java::util::prefs::AbstractPreferences::sync()
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(45),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(45), 
		void >
	(get_jobject());
}

local_ref< java::lang::String > java::util::prefs::AbstractPreferences::toString()
{
	return call_method<
		java::util::prefs::AbstractPreferences::J2CPP_CLASS_NAME,
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_NAME(46),
		java::util::prefs::AbstractPreferences::J2CPP_METHOD_SIGNATURE(46), 
		local_ref< java::lang::String > >
	(get_jobject());
}



J2CPP_DEFINE_CLASS(java::util::prefs::AbstractPreferences,"java/util/prefs/AbstractPreferences")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,0,"<init>","(Ljava/util/prefs/AbstractPreferences;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,1,"cachedChildren","()[java.util.prefs.AbstractPreferences")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,2,"getChild","(Ljava/lang/String;)Ljava/util/prefs/AbstractPreferences;")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,3,"isRemoved","()Z")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,4,"flushSpi","()V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,5,"childrenNamesSpi","()[java.lang.String")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,6,"childSpi","(Ljava/lang/String;)Ljava/util/prefs/AbstractPreferences;")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,7,"putSpi","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,8,"getSpi","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,9,"keysSpi","()[java.lang.String")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,10,"removeNodeSpi","()V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,11,"removeSpi","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,12,"syncSpi","()V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,13,"absolutePath","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,14,"childrenNames","()[java.lang.String")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,15,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,16,"exportNode","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,17,"exportSubtree","(Ljava/io/OutputStream;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,18,"flush","()V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,19,"get","(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,20,"getBoolean","(Ljava/lang/String;Z)Z")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,21,"getByteArray","(Ljava/lang/String;[B)[B")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,22,"getDouble","(Ljava/lang/String;D)D")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,23,"getFloat","(Ljava/lang/String;F)F")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,24,"getInt","(Ljava/lang/String;I)I")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,25,"getLong","(Ljava/lang/String;J)J")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,26,"isUserNode","()Z")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,27,"keys","()[java.lang.String")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,28,"name","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,29,"node","(Ljava/lang/String;)Ljava/util/prefs/Preferences;")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,30,"nodeExists","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,31,"parent","()Ljava/util/prefs/Preferences;")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,32,"put","(Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,33,"putBoolean","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,34,"putByteArray","(Ljava/lang/String;[B)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,35,"putDouble","(Ljava/lang/String;D)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,36,"putFloat","(Ljava/lang/String;F)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,37,"putInt","(Ljava/lang/String;I)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,38,"putLong","(Ljava/lang/String;J)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,39,"remove","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,40,"removeNode","()V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,41,"addNodeChangeListener","(Ljava/util/prefs/NodeChangeListener;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,42,"addPreferenceChangeListener","(Ljava/util/prefs/PreferenceChangeListener;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,43,"removeNodeChangeListener","(Ljava/util/prefs/NodeChangeListener;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,44,"removePreferenceChangeListener","(Ljava/util/prefs/PreferenceChangeListener;)V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,45,"sync","()V")
J2CPP_DEFINE_METHOD(java::util::prefs::AbstractPreferences,46,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::util::prefs::AbstractPreferences,0,"lock","Ljava/lang/Object;")
J2CPP_DEFINE_FIELD(java::util::prefs::AbstractPreferences,1,"newNode","Z")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_PREFS_ABSTRACTPREFERENCES_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
