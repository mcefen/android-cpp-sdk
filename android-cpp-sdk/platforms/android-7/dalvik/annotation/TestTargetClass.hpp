/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: dalvik.annotation.TestTargetClass
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_DECL
#define J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Class; } } }
namespace j2cpp { namespace java { namespace lang { namespace annotation { class Annotation; } } } }


#include <java/lang/Class.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/annotation/Annotation.hpp>


namespace j2cpp {

namespace dalvik { namespace annotation {

	class TestTargetClass;
	class TestTargetClass
		: public object<TestTargetClass>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit TestTargetClass(jobject jobj)
		: object<TestTargetClass>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::annotation::Annotation>() const;


		local_ref< java::lang::Class > value();
	}; //class TestTargetClass

} //namespace annotation
} //namespace dalvik

} //namespace j2cpp

#endif //J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_IMPL
#define J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_IMPL

namespace j2cpp {



dalvik::annotation::TestTargetClass::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

dalvik::annotation::TestTargetClass::operator local_ref<java::lang::annotation::Annotation>() const
{
	return local_ref<java::lang::annotation::Annotation>(get_jobject());
}

local_ref< java::lang::Class > dalvik::annotation::TestTargetClass::value()
{
	return call_method<
		dalvik::annotation::TestTargetClass::J2CPP_CLASS_NAME,
		dalvik::annotation::TestTargetClass::J2CPP_METHOD_NAME(0),
		dalvik::annotation::TestTargetClass::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< java::lang::Class > >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(dalvik::annotation::TestTargetClass,"dalvik/annotation/TestTargetClass")
J2CPP_DEFINE_METHOD(dalvik::annotation::TestTargetClass,0,"value","()Ljava/lang/Class;")

} //namespace j2cpp

#endif //J2CPP_DALVIK_ANNOTATION_TESTTARGETCLASS_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
