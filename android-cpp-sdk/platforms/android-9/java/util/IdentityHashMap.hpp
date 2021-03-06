/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.IdentityHashMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_IDENTITYHASHMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_IDENTITYHASHMAP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class AbstractMap; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>


namespace j2cpp {

namespace java { namespace util {

	class IdentityHashMap;
	class IdentityHashMap
		: public object<IdentityHashMap>
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

		explicit IdentityHashMap(jobject jobj)
		: object<IdentityHashMap>(jobj)
		{
		}

		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::util::AbstractMap>() const;
		operator local_ref<java::util::Map>() const;
		operator local_ref<java::io::Serializable>() const;


		IdentityHashMap();
		IdentityHashMap(jint);
		IdentityHashMap(local_ref< java::util::Map > const&);
		void clear();
		jboolean containsKey(local_ref< java::lang::Object >  const&);
		jboolean containsValue(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > get(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > put(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		void putAll(local_ref< java::util::Map >  const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object >  const&);
		local_ref< java::util::Set > entrySet();
		local_ref< java::util::Set > keySet();
		local_ref< java::util::Collection > values();
		jboolean equals(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > clone();
		jboolean isEmpty();
		jint size();
	}; //class IdentityHashMap

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_IDENTITYHASHMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_IDENTITYHASHMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_IDENTITYHASHMAP_HPP_IMPL

namespace j2cpp {



java::util::IdentityHashMap::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::IdentityHashMap::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::IdentityHashMap::operator local_ref<java::util::AbstractMap>() const
{
	return local_ref<java::util::AbstractMap>(get_jobject());
}

java::util::IdentityHashMap::operator local_ref<java::util::Map>() const
{
	return local_ref<java::util::Map>(get_jobject());
}

java::util::IdentityHashMap::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::IdentityHashMap::IdentityHashMap()
: object<java::util::IdentityHashMap>(
	call_new_object<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(0),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::IdentityHashMap::IdentityHashMap(jint a0)
: object<java::util::IdentityHashMap>(
	call_new_object<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(1),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



java::util::IdentityHashMap::IdentityHashMap(local_ref< java::util::Map > const &a0)
: object<java::util::IdentityHashMap>(
	call_new_object<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(2),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(2)
	>(a0)
)
{
}


void java::util::IdentityHashMap::clear()
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(3),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject());
}

jboolean java::util::IdentityHashMap::containsKey(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(4),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(4), 
		jboolean
	>(get_jobject(), a0);
}

jboolean java::util::IdentityHashMap::containsValue(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(5),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::IdentityHashMap::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(6),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::IdentityHashMap::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(7),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0, a1);
}

void java::util::IdentityHashMap::putAll(local_ref< java::util::Map > const &a0)
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(8),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::IdentityHashMap::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(9),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object >
	>(get_jobject(), a0);
}

local_ref< java::util::Set > java::util::IdentityHashMap::entrySet()
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(10),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::util::Set >
	>(get_jobject());
}

local_ref< java::util::Set > java::util::IdentityHashMap::keySet()
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(11),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::util::Set >
	>(get_jobject());
}

local_ref< java::util::Collection > java::util::IdentityHashMap::values()
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(12),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::util::Collection >
	>(get_jobject());
}

jboolean java::util::IdentityHashMap::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(13),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(13), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::IdentityHashMap::clone()
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(14),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jboolean java::util::IdentityHashMap::isEmpty()
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(15),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(15), 
		jboolean
	>(get_jobject());
}

jint java::util::IdentityHashMap::size()
{
	return call_method<
		java::util::IdentityHashMap::J2CPP_CLASS_NAME,
		java::util::IdentityHashMap::J2CPP_METHOD_NAME(16),
		java::util::IdentityHashMap::J2CPP_METHOD_SIGNATURE(16), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::IdentityHashMap,"java/util/IdentityHashMap")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,2,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,3,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,4,"containsKey","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,5,"containsValue","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,6,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,7,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,8,"putAll","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,9,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,10,"entrySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,11,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,12,"values","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,13,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,14,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,15,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::IdentityHashMap,16,"size","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_IDENTITYHASHMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
