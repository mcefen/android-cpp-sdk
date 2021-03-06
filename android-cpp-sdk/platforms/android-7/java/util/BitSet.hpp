/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.BitSet
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_BITSET_HPP_DECL
#define J2CPP_JAVA_UTIL_BITSET_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace util {

	class BitSet;
	class BitSet
		: public object<BitSet>
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

		explicit BitSet(jobject jobj)
		: object<BitSet>(jobj)
		{
		}

		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Cloneable>() const;


		BitSet();
		BitSet(jint);
		local_ref< java::lang::Object > clone();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint hashCode();
		jboolean get(jint);
		local_ref< java::util::BitSet > get(jint, jint);
		void set(jint);
		void set(jint, jboolean);
		void set(jint, jint);
		void set(jint, jint, jboolean);
		void clear();
		void clear(jint);
		void clear(jint, jint);
		void flip(jint);
		void flip(jint, jint);
		jboolean intersects(local_ref< java::util::BitSet >  const&);
		void and_(local_ref< java::util::BitSet >  const&);
		void andNot(local_ref< java::util::BitSet >  const&);
		void or_(local_ref< java::util::BitSet >  const&);
		void xor_(local_ref< java::util::BitSet >  const&);
		jint size();
		jint length();
		local_ref< java::lang::String > toString();
		jint nextSetBit(jint);
		jint nextClearBit(jint);
		jboolean isEmpty();
		jint cardinality();
	}; //class BitSet

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_BITSET_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_BITSET_HPP_IMPL
#define J2CPP_JAVA_UTIL_BITSET_HPP_IMPL

namespace j2cpp {



java::util::BitSet::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::BitSet::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::BitSet::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}


java::util::BitSet::BitSet()
: object<java::util::BitSet>(
	call_new_object<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(0),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



java::util::BitSet::BitSet(jint a0)
: object<java::util::BitSet>(
	call_new_object<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(1),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}


local_ref< java::lang::Object > java::util::BitSet::clone()
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(2),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< java::lang::Object >
	>(get_jobject());
}

jboolean java::util::BitSet::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(3),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(3), 
		jboolean
	>(get_jobject(), a0);
}

jint java::util::BitSet::hashCode()
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(4),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(4), 
		jint
	>(get_jobject());
}

jboolean java::util::BitSet::get(jint a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(5),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(5), 
		jboolean
	>(get_jobject(), a0);
}

local_ref< java::util::BitSet > java::util::BitSet::get(jint a0, jint a1)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(6),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::util::BitSet >
	>(get_jobject(), a0, a1);
}

void java::util::BitSet::set(jint a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(7),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

void java::util::BitSet::set(jint a0, jboolean a1)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(8),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(8), 
		void
	>(get_jobject(), a0, a1);
}

void java::util::BitSet::set(jint a0, jint a1)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(9),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0, a1);
}

void java::util::BitSet::set(jint a0, jint a1, jboolean a2)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(10),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(10), 
		void
	>(get_jobject(), a0, a1, a2);
}

void java::util::BitSet::clear()
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(11),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject());
}

void java::util::BitSet::clear(jint a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(12),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(12), 
		void
	>(get_jobject(), a0);
}

void java::util::BitSet::clear(jint a0, jint a1)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(13),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0, a1);
}

void java::util::BitSet::flip(jint a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(14),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(14), 
		void
	>(get_jobject(), a0);
}

void java::util::BitSet::flip(jint a0, jint a1)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(15),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0, a1);
}

jboolean java::util::BitSet::intersects(local_ref< java::util::BitSet > const &a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(16),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(16), 
		jboolean
	>(get_jobject(), a0);
}

void java::util::BitSet::and_(local_ref< java::util::BitSet > const &a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(17),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(17), 
		void
	>(get_jobject(), a0);
}

void java::util::BitSet::andNot(local_ref< java::util::BitSet > const &a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(18),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(18), 
		void
	>(get_jobject(), a0);
}

void java::util::BitSet::or_(local_ref< java::util::BitSet > const &a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(19),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(19), 
		void
	>(get_jobject(), a0);
}

void java::util::BitSet::xor_(local_ref< java::util::BitSet > const &a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(20),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(20), 
		void
	>(get_jobject(), a0);
}

jint java::util::BitSet::size()
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(21),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(21), 
		jint
	>(get_jobject());
}

jint java::util::BitSet::length()
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(22),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(22), 
		jint
	>(get_jobject());
}

local_ref< java::lang::String > java::util::BitSet::toString()
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(23),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::lang::String >
	>(get_jobject());
}

jint java::util::BitSet::nextSetBit(jint a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(24),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(24), 
		jint
	>(get_jobject(), a0);
}

jint java::util::BitSet::nextClearBit(jint a0)
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(25),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(25), 
		jint
	>(get_jobject(), a0);
}

jboolean java::util::BitSet::isEmpty()
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(26),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(26), 
		jboolean
	>(get_jobject());
}

jint java::util::BitSet::cardinality()
{
	return call_method<
		java::util::BitSet::J2CPP_CLASS_NAME,
		java::util::BitSet::J2CPP_METHOD_NAME(27),
		java::util::BitSet::J2CPP_METHOD_SIGNATURE(27), 
		jint
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::BitSet,"java/util/BitSet")
J2CPP_DEFINE_METHOD(java::util::BitSet,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::BitSet,1,"<init>","(I)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,2,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::BitSet,3,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::BitSet,4,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::BitSet,5,"get","(I)Z")
J2CPP_DEFINE_METHOD(java::util::BitSet,6,"get","(II)Ljava/util/BitSet;")
J2CPP_DEFINE_METHOD(java::util::BitSet,7,"set","(I)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,8,"set","(IZ)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,9,"set","(II)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,10,"set","(IIZ)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,11,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::BitSet,12,"clear","(I)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,13,"clear","(II)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,14,"flip","(I)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,15,"flip","(II)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,16,"intersects","(Ljava/util/BitSet;)Z")
J2CPP_DEFINE_METHOD(java::util::BitSet,17,"and","(Ljava/util/BitSet;)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,18,"andNot","(Ljava/util/BitSet;)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,19,"or","(Ljava/util/BitSet;)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,20,"xor","(Ljava/util/BitSet;)V")
J2CPP_DEFINE_METHOD(java::util::BitSet,21,"size","()I")
J2CPP_DEFINE_METHOD(java::util::BitSet,22,"length","()I")
J2CPP_DEFINE_METHOD(java::util::BitSet,23,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::BitSet,24,"nextSetBit","(I)I")
J2CPP_DEFINE_METHOD(java::util::BitSet,25,"nextClearBit","(I)I")
J2CPP_DEFINE_METHOD(java::util::BitSet,26,"isEmpty","()Z")
J2CPP_DEFINE_METHOD(java::util::BitSet,27,"cardinality","()I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_BITSET_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
