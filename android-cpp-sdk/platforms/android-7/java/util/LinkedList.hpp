/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.LinkedList
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LINKEDLIST_HPP_DECL
#define J2CPP_JAVA_UTIL_LINKEDLIST_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace util { class AbstractSequentialList; } } }
namespace j2cpp { namespace java { namespace util { class ListIterator; } } }
namespace j2cpp { namespace java { namespace util { class Queue; } } }
namespace j2cpp { namespace java { namespace util { class Collection; } } }
namespace j2cpp { namespace java { namespace util { class List; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Object.hpp>
#include <java/util/AbstractSequentialList.hpp>
#include <java/util/Collection.hpp>
#include <java/util/List.hpp>
#include <java/util/ListIterator.hpp>
#include <java/util/Queue.hpp>


namespace j2cpp {

namespace java { namespace util {

	class LinkedList;
	class LinkedList
		: public object<LinkedList>
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

		explicit LinkedList(jobject jobj)
		: object<LinkedList>(jobj)
		{
		}

		operator local_ref<java::util::AbstractSequentialList>() const;
		operator local_ref<java::util::List>() const;
		operator local_ref<java::util::Queue>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::io::Serializable>() const;


		LinkedList();
		LinkedList(local_ref< java::util::Collection > const&);
		void add(jint, local_ref< java::lang::Object >  const&);
		jboolean add(local_ref< java::lang::Object >  const&);
		jboolean addAll(jint, local_ref< java::util::Collection >  const&);
		jboolean addAll(local_ref< java::util::Collection >  const&);
		void addFirst(local_ref< java::lang::Object >  const&);
		void addLast(local_ref< java::lang::Object >  const&);
		void clear();
		local_ref< java::lang::Object > clone();
		jboolean contains(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > get(jint);
		local_ref< java::lang::Object > getFirst();
		local_ref< java::lang::Object > getLast();
		jint indexOf(local_ref< java::lang::Object >  const&);
		jint lastIndexOf(local_ref< java::lang::Object >  const&);
		local_ref< java::util::ListIterator > listIterator(jint);
		local_ref< java::lang::Object > remove(jint);
		jboolean remove(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > removeFirst();
		local_ref< java::lang::Object > removeLast();
		local_ref< java::lang::Object > set(jint, local_ref< java::lang::Object >  const&);
		jint size();
		jboolean offer(local_ref< java::lang::Object >  const&);
		local_ref< java::lang::Object > poll();
		local_ref< java::lang::Object > remove();
		local_ref< java::lang::Object > peek();
		local_ref< java::lang::Object > element();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray();
		local_ref< array< local_ref< java::lang::Object >, 1> > toArray(local_ref< array< local_ref< java::lang::Object >, 1> >  const&);
	}; //class LinkedList

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LINKEDLIST_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_LINKEDLIST_HPP_IMPL
#define J2CPP_JAVA_UTIL_LINKEDLIST_HPP_IMPL

namespace j2cpp {



java::util::LinkedList::operator local_ref<java::util::AbstractSequentialList>() const
{
	return local_ref<java::util::AbstractSequentialList>(get_jobject());
}

java::util::LinkedList::operator local_ref<java::util::List>() const
{
	return local_ref<java::util::List>(get_jobject());
}

java::util::LinkedList::operator local_ref<java::util::Queue>() const
{
	return local_ref<java::util::Queue>(get_jobject());
}

java::util::LinkedList::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::LinkedList::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


java::util::LinkedList::LinkedList()
: object<java::util::LinkedList>(
	call_new_object<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(0),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::util::LinkedList::LinkedList(local_ref< java::util::Collection > const &a0)
: object<java::util::LinkedList>(
	call_new_object<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(1),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}


void java::util::LinkedList::add(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(2),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

jboolean java::util::LinkedList::add(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(3),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::LinkedList::addAll(jint a0, local_ref< java::util::Collection > const &a1)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(4),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean java::util::LinkedList::addAll(local_ref< java::util::Collection > const &a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(5),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(5), 
		jboolean >
	(get_jobject(), a0);
}

void java::util::LinkedList::addFirst(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(6),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

void java::util::LinkedList::addLast(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(7),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject(), a0);
}

void java::util::LinkedList::clear()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(8),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::LinkedList::clone()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(9),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

jboolean java::util::LinkedList::contains(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(10),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(10), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::LinkedList::get(jint a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(11),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::LinkedList::getFirst()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(12),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::LinkedList::getLast()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(13),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(13), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

jint java::util::LinkedList::indexOf(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(14),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject(), a0);
}

jint java::util::LinkedList::lastIndexOf(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(15),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(15), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::util::ListIterator > java::util::LinkedList::listIterator(jint a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(16),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(16), 
		local_ref< java::util::ListIterator > >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::LinkedList::remove(jint a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(17),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(17), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}

jboolean java::util::LinkedList::remove(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(18),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::LinkedList::removeFirst()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(19),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::LinkedList::removeLast()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(20),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::LinkedList::set(jint a0, local_ref< java::lang::Object > const &a1)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(21),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

jint java::util::LinkedList::size()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(22),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(22), 
		jint >
	(get_jobject());
}

jboolean java::util::LinkedList::offer(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(23),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(23), 
		jboolean >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::LinkedList::poll()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(24),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::LinkedList::remove()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(25),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::LinkedList::peek()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(26),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< java::lang::Object > java::util::LinkedList::element()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(27),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(27), 
		local_ref< java::lang::Object > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::LinkedList::toArray()
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(28),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject());
}

local_ref< array< local_ref< java::lang::Object >, 1> > java::util::LinkedList::toArray(local_ref< array< local_ref< java::lang::Object >, 1> > const &a0)
{
	return call_method<
		java::util::LinkedList::J2CPP_CLASS_NAME,
		java::util::LinkedList::J2CPP_METHOD_NAME(29),
		java::util::LinkedList::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< array< local_ref< java::lang::Object >, 1> > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::util::LinkedList,"java/util/LinkedList")
J2CPP_DEFINE_METHOD(java::util::LinkedList,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::LinkedList,1,"<init>","(Ljava/util/Collection;)V")
J2CPP_DEFINE_METHOD(java::util::LinkedList,2,"add","(ILjava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::LinkedList,3,"add","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::LinkedList,4,"addAll","(ILjava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::LinkedList,5,"addAll","(Ljava/util/Collection;)Z")
J2CPP_DEFINE_METHOD(java::util::LinkedList,6,"addFirst","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::LinkedList,7,"addLast","(Ljava/lang/Object;)V")
J2CPP_DEFINE_METHOD(java::util::LinkedList,8,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::LinkedList,9,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,10,"contains","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::LinkedList,11,"get","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,12,"getFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,13,"getLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,14,"indexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::LinkedList,15,"lastIndexOf","(Ljava/lang/Object;)I")
J2CPP_DEFINE_METHOD(java::util::LinkedList,16,"listIterator","(I)Ljava/util/ListIterator;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,17,"remove","(I)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,18,"remove","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::LinkedList,19,"removeFirst","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,20,"removeLast","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,21,"set","(ILjava/lang/Object;)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,22,"size","()I")
J2CPP_DEFINE_METHOD(java::util::LinkedList,23,"offer","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::LinkedList,24,"poll","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,25,"remove","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,26,"peek","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,27,"element","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::LinkedList,28,"toArray","()[java.lang.Object")
J2CPP_DEFINE_METHOD(java::util::LinkedList,29,"toArray","([java.lang.Object)[java.lang.Object")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_LINKEDLIST_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
