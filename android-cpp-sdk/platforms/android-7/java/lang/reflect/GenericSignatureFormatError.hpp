/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.reflect.GenericSignatureFormatError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_GENERICSIGNATUREFORMATERROR_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_GENERICSIGNATUREFORMATERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class ClassFormatError; } } }


#include <java/lang/ClassFormatError.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class GenericSignatureFormatError;
	class GenericSignatureFormatError
		: public object<GenericSignatureFormatError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		explicit GenericSignatureFormatError(jobject jobj)
		: object<GenericSignatureFormatError>(jobj)
		{
		}

		operator local_ref<java::lang::ClassFormatError>() const;


		GenericSignatureFormatError();
	}; //class GenericSignatureFormatError

} //namespace reflect
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_GENERICSIGNATUREFORMATERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_GENERICSIGNATUREFORMATERROR_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_GENERICSIGNATUREFORMATERROR_HPP_IMPL

namespace j2cpp {



java::lang::reflect::GenericSignatureFormatError::operator local_ref<java::lang::ClassFormatError>() const
{
	return local_ref<java::lang::ClassFormatError>(get_jobject());
}


java::lang::reflect::GenericSignatureFormatError::GenericSignatureFormatError()
: object<java::lang::reflect::GenericSignatureFormatError>(
	call_new_object<
		java::lang::reflect::GenericSignatureFormatError::J2CPP_CLASS_NAME,
		java::lang::reflect::GenericSignatureFormatError::J2CPP_METHOD_NAME(0),
		java::lang::reflect::GenericSignatureFormatError::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



J2CPP_DEFINE_CLASS(java::lang::reflect::GenericSignatureFormatError,"java/lang/reflect/GenericSignatureFormatError")
J2CPP_DEFINE_METHOD(java::lang::reflect::GenericSignatureFormatError,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_GENERICSIGNATUREFORMATERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
