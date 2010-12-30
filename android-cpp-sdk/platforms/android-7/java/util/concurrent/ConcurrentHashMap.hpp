/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.concurrent.ConcurrentHashMap
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_DECL
#define J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace util { class Set; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace java { namespace util { class Enumeration; } } }
namespace j2cpp { namespace java { namespace util { class AbstractMap; } } }
namespace j2cpp { namespace java { namespace util { namespace concurrent { class ConcurrentMap; } } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractMap.hpp>
#include <java/util/Collection.hpp>
#include <java/util/Enumeration.hpp>
#include <java/util/Map.hpp>
#include <java/util/Set.hpp>
#include <java/util/concurrent/ConcurrentMap.hpp>


namespace j2cpp {

namespace java { namespace util { namespace concurrent {

	class ConcurrentHashMap;
	class ConcurrentHashMap
		: public object<ConcurrentHashMap>
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

		explicit ConcurrentHashMap(jobject jobj)
		: object<ConcurrentHashMap>(jobj)
		{
		}

		operator local_ref<java::util::AbstractMap>() const;
		operator local_ref<java::util::concurrent::ConcurrentMap>() const;
		operator local_ref<java::io::Serializable>() const;


		ConcurrentHashMap(jint, jfloat, jint);
		ConcurrentHashMap(jint);
		ConcurrentHashMap();
		ConcurrentHashMap(local_ref< java::util::Map > const&);
		jboolean isEmpty();
		jint size();
		local_ref< java::lang::Object > get(local_ref< java::lang::Object >  const&);
		jboolean containsKey(local_ref< java::lang::Object >  const&);
		jboolean containsValue(local_ref< java::lang::Object >  const&);
		jboolean contains(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > put(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > putIfAbsent(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		void putAll(local_ref< java::util::Map >  const&);
		local_ref< java::lang::Object > remove(local_ref< java::lang::Object >  const&);
		jboolean remove(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		jboolean replace(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > replace(local_ref< java::lang::Object >  const&, local_ref< java::lang::Object >  const&);
		void clear();
		local_ref< java::util::Set > keySet();
		local_ref< java::util::Collection > values();
		local_ref< java::util::Set > entrySet();
		local_ref< java::util::Enumeration > keys();
		local_ref< java::util::Enumeration > elements();
	}; //class ConcurrentHashMap

} //namespace concurrent
} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_IMPL
#define J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_IMPL

namespace j2cpp {



java::util::concurrent::ConcurrentHashMap::operator local_ref<java::util::AbstractMap>() const
{
	return local_ref<java::util::AbstractMap>(get_jobject());
}

java::util::concurrent::ConcurrentHashMap::operator local_ref<java::util::concurrent::ConcurrentMap>() const
{
	return local_ref<java::util::concurrent::ConcurrentMap>(get_jobject());
}

java::util::concurrent::ConcurrentHashMap::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::concurrent::ConcurrentHashMap::ConcurrentHashMap(jint a0, jfloat a1, jint a2)
: object<java::util::concurrent::ConcurrentHashMap>(
	call_new_object<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(0),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1, a2)
)
{
}



java::util::concurrent::ConcurrentHashMap::ConcurrentHashMap(jint a0)
: object<java::util::concurrent::ConcurrentHashMap>(
	call_new_object<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(1),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



java::util::concurrent::ConcurrentHashMap::ConcurrentHashMap()
: object<java::util::concurrent::ConcurrentHashMap>(
	call_new_object<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(2),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(2)>
	()
)
{
}



java::util::concurrent::ConcurrentHashMap::ConcurrentHashMap(local_ref< java::util::Map > const &a0)
: object<java::util::concurrent::ConcurrentHashMap>(
	call_new_object<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(3),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}


jboolean java::util::concurrent::ConcurrentHashMap::isEmpty()
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(4),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject());
}

jint java::util::concurrent::ConcurrentHashMap::size()
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(5),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(5), 
		jint >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::concurrent::ConcurrentHashMap::get(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(6),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::ConcurrentHashMap::containsKey(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(7),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(7), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::ConcurrentHashMap::containsValue(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(8),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(8), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::ConcurrentHashMap::contains(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(9),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::ConcurrentHashMap::put(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(10),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > java::util::concurrent::ConcurrentHashMap::putIfAbsent(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(11),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

void java::util::concurrent::ConcurrentHashMap::putAll(local_ref< java::util::Map > const &a0)
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(12),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::concurrent::ConcurrentHashMap::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(13),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

jboolean java::util::concurrent::ConcurrentHashMap::remove(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(14),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(14), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean java::util::concurrent::ConcurrentHashMap::replace(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1, local_ref< java::lang::Object > const &a2)
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(15),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(15), 
		jboolean >
	(get_jobject(), a0, a1, a2);
}

local_ref< java::lang::Object > java::util::concurrent::ConcurrentHashMap::replace(local_ref< java::lang::Object > const &a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(16),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

void java::util::concurrent::ConcurrentHashMap::clear()
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(17),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(17), 
		void >
	(get_jobject());
}

local_ref< java::util::Set > java::util::concurrent::ConcurrentHashMap::keySet()
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(18),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::util::Set > >
	(get_jobject());
}

local_ref< java::util::Collection > java::util::concurrent::ConcurrentHashMap::values()
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(19),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::util::Collection > >
	(get_jobject());
}

local_ref< java::util::Set > java::util::concurrent::ConcurrentHashMap::entrySet()
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(20),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::util::Set > >
	(get_jobject());
}

local_ref< java::util::Enumeration > java::util::concurrent::ConcurrentHashMap::keys()
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(21),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::util::Enumeration > >
	(get_jobject());
}

local_ref< java::util::Enumeration > java::util::concurrent::ConcurrentHashMap::elements()
{
	return call_method<
		java::util::concurrent::ConcurrentHashMap::J2CPP_CLASS_NAME,
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_NAME(22),
		java::util::concurrent::ConcurrentHashMap::J2CPP_METHOD_SIGNATURE(22), 
		local_ref< java::util::Enumeration > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::concurrent::ConcurrentHashMap,"java/util/concurrent/ConcurrentHashMap")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,0,"<init>","(IFI)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,2,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,3,"<init>","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,4,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,5,"size","()I")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,6,"get","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,7,"containsKey","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,8,"containsValue","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,9,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,10,"put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,11,"putIfAbsent","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,12,"putAll","(Ljava/util/Map;)V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,13,"remove","(Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,14,"remove","(Ljava/lang/Object;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,15,"replace","(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,16,"replace","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,17,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,18,"keySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,19,"values","()Ljava/util/Collection;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,20,"entrySet","()Ljava/util/Set;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,21,"keys","()Ljava/util/Enumeration;")
J2CPP_DEFINE_METHOD(java::util::concurrent::ConcurrentHashMap,22,"elements","()Ljava/util/Enumeration;")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CONCURRENT_CONCURRENTHASHMAP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
