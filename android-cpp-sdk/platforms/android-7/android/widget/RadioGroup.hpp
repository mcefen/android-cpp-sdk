/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.RadioGroup
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_RADIOGROUP_HPP_DECL
#define J2CPP_ANDROID_WIDGET_RADIOGROUP_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class OnHierarchyChangeListener; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class MarginLayoutParams; } } } }
namespace j2cpp { namespace android { namespace view { namespace ViewGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { class LinearLayout; } } }
namespace j2cpp { namespace android { namespace widget { namespace LinearLayout_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace widget { namespace RadioGroup_ { class OnCheckedChangeListener; } } } }
namespace j2cpp { namespace android { namespace widget { namespace RadioGroup_ { class LayoutParams; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }


#include <android/content/Context.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/LinearLayout.hpp>
#include <android/widget/RadioGroup.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class RadioGroup;
	namespace RadioGroup_ {

		class OnCheckedChangeListener;
		class OnCheckedChangeListener
			: public object<OnCheckedChangeListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnCheckedChangeListener(jobject jobj)
			: object<OnCheckedChangeListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onCheckedChanged(local_ref< android::widget::RadioGroup >  const&, jint);
		}; //class OnCheckedChangeListener

		class LayoutParams;
		class LayoutParams
			: public object<LayoutParams>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)
			J2CPP_DECLARE_METHOD(5)

			explicit LayoutParams(jobject jobj)
			: object<LayoutParams>(jobj)
			{
			}

			operator local_ref<android::widget::LinearLayout_::LayoutParams>() const;


			LayoutParams(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
			LayoutParams(jint, jint);
			LayoutParams(jint, jint, jfloat);
			LayoutParams(local_ref< android::view::ViewGroup_::LayoutParams > const&);
			LayoutParams(local_ref< android::view::ViewGroup_::MarginLayoutParams > const&);
		}; //class LayoutParams

	} //namespace RadioGroup_

	class RadioGroup
		: public object<RadioGroup>
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

		typedef RadioGroup_::OnCheckedChangeListener OnCheckedChangeListener;
		typedef RadioGroup_::LayoutParams LayoutParams;

		explicit RadioGroup(jobject jobj)
		: object<RadioGroup>(jobj)
		{
		}

		operator local_ref<android::widget::LinearLayout>() const;


		RadioGroup(local_ref< android::content::Context > const&);
		RadioGroup(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		void setOnHierarchyChangeListener(local_ref< android::view::ViewGroup_::OnHierarchyChangeListener >  const&);
		void addView(local_ref< android::view::View >  const&, jint, local_ref< android::view::ViewGroup_::LayoutParams >  const&);
		void check(jint);
		jint getCheckedRadioButtonId();
		void clearCheck();
		void setOnCheckedChangeListener(local_ref< android::widget::RadioGroup_::OnCheckedChangeListener >  const&);
		local_ref< android::widget::RadioGroup_::LayoutParams > generateLayoutParams(local_ref< android::util::AttributeSet >  const&);
		local_ref< android::widget::LinearLayout_::LayoutParams > generateLayoutParams_1(local_ref< android::util::AttributeSet >  const&);
		local_ref< android::view::ViewGroup_::LayoutParams > generateLayoutParams_2(local_ref< android::util::AttributeSet >  const&);
	}; //class RadioGroup

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_RADIOGROUP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_RADIOGROUP_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_RADIOGROUP_HPP_IMPL

namespace j2cpp {




android::widget::RadioGroup_::OnCheckedChangeListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::widget::RadioGroup_::OnCheckedChangeListener::onCheckedChanged(local_ref< android::widget::RadioGroup > const &a0, jint a1)
{
	return call_method<
		android::widget::RadioGroup_::OnCheckedChangeListener::J2CPP_CLASS_NAME,
		android::widget::RadioGroup_::OnCheckedChangeListener::J2CPP_METHOD_NAME(0),
		android::widget::RadioGroup_::OnCheckedChangeListener::J2CPP_METHOD_SIGNATURE(0), 
		void >
	(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::widget::RadioGroup_::OnCheckedChangeListener,"android/widget/RadioGroup$OnCheckedChangeListener")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup_::OnCheckedChangeListener,0,"onCheckedChanged","(Landroid/widget/RadioGroup;I)V")


android::widget::RadioGroup_::LayoutParams::operator local_ref<android::widget::LinearLayout_::LayoutParams>() const
{
	return local_ref<android::widget::LinearLayout_::LayoutParams>(get_jobject());
}


android::widget::RadioGroup_::LayoutParams::LayoutParams(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::RadioGroup_::LayoutParams>(
	call_new_object<
		android::widget::RadioGroup_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::RadioGroup_::LayoutParams::J2CPP_METHOD_NAME(0),
		android::widget::RadioGroup_::LayoutParams::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



android::widget::RadioGroup_::LayoutParams::LayoutParams(jint a0, jint a1)
: object<android::widget::RadioGroup_::LayoutParams>(
	call_new_object<
		android::widget::RadioGroup_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::RadioGroup_::LayoutParams::J2CPP_METHOD_NAME(1),
		android::widget::RadioGroup_::LayoutParams::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::widget::RadioGroup_::LayoutParams::LayoutParams(jint a0, jint a1, jfloat a2)
: object<android::widget::RadioGroup_::LayoutParams>(
	call_new_object<
		android::widget::RadioGroup_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::RadioGroup_::LayoutParams::J2CPP_METHOD_NAME(2),
		android::widget::RadioGroup_::LayoutParams::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}



android::widget::RadioGroup_::LayoutParams::LayoutParams(local_ref< android::view::ViewGroup_::LayoutParams > const &a0)
: object<android::widget::RadioGroup_::LayoutParams>(
	call_new_object<
		android::widget::RadioGroup_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::RadioGroup_::LayoutParams::J2CPP_METHOD_NAME(3),
		android::widget::RadioGroup_::LayoutParams::J2CPP_METHOD_SIGNATURE(3)>
	(a0)
)
{
}



android::widget::RadioGroup_::LayoutParams::LayoutParams(local_ref< android::view::ViewGroup_::MarginLayoutParams > const &a0)
: object<android::widget::RadioGroup_::LayoutParams>(
	call_new_object<
		android::widget::RadioGroup_::LayoutParams::J2CPP_CLASS_NAME,
		android::widget::RadioGroup_::LayoutParams::J2CPP_METHOD_NAME(4),
		android::widget::RadioGroup_::LayoutParams::J2CPP_METHOD_SIGNATURE(4)>
	(a0)
)
{
}




J2CPP_DEFINE_CLASS(android::widget::RadioGroup_::LayoutParams,"android/widget/RadioGroup$LayoutParams")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup_::LayoutParams,0,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup_::LayoutParams,1,"<init>","(II)V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup_::LayoutParams,2,"<init>","(IIF)V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup_::LayoutParams,3,"<init>","(Landroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup_::LayoutParams,4,"<init>","(Landroid/view/ViewGroup$MarginLayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup_::LayoutParams,5,"setBaseAttributes","(Landroid/content/res/TypedArray;II)V")



android::widget::RadioGroup::operator local_ref<android::widget::LinearLayout>() const
{
	return local_ref<android::widget::LinearLayout>(get_jobject());
}


android::widget::RadioGroup::RadioGroup(local_ref< android::content::Context > const &a0)
: object<android::widget::RadioGroup>(
	call_new_object<
		android::widget::RadioGroup::J2CPP_CLASS_NAME,
		android::widget::RadioGroup::J2CPP_METHOD_NAME(0),
		android::widget::RadioGroup::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::widget::RadioGroup::RadioGroup(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::widget::RadioGroup>(
	call_new_object<
		android::widget::RadioGroup::J2CPP_CLASS_NAME,
		android::widget::RadioGroup::J2CPP_METHOD_NAME(1),
		android::widget::RadioGroup::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}


void android::widget::RadioGroup::setOnHierarchyChangeListener(local_ref< android::view::ViewGroup_::OnHierarchyChangeListener > const &a0)
{
	return call_method<
		android::widget::RadioGroup::J2CPP_CLASS_NAME,
		android::widget::RadioGroup::J2CPP_METHOD_NAME(2),
		android::widget::RadioGroup::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}


void android::widget::RadioGroup::addView(local_ref< android::view::View > const &a0, jint a1, local_ref< android::view::ViewGroup_::LayoutParams > const &a2)
{
	return call_method<
		android::widget::RadioGroup::J2CPP_CLASS_NAME,
		android::widget::RadioGroup::J2CPP_METHOD_NAME(4),
		android::widget::RadioGroup::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1, a2);
}

void android::widget::RadioGroup::check(jint a0)
{
	return call_method<
		android::widget::RadioGroup::J2CPP_CLASS_NAME,
		android::widget::RadioGroup::J2CPP_METHOD_NAME(5),
		android::widget::RadioGroup::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject(), a0);
}

jint android::widget::RadioGroup::getCheckedRadioButtonId()
{
	return call_method<
		android::widget::RadioGroup::J2CPP_CLASS_NAME,
		android::widget::RadioGroup::J2CPP_METHOD_NAME(6),
		android::widget::RadioGroup::J2CPP_METHOD_SIGNATURE(6), 
		jint >
	(get_jobject());
}

void android::widget::RadioGroup::clearCheck()
{
	return call_method<
		android::widget::RadioGroup::J2CPP_CLASS_NAME,
		android::widget::RadioGroup::J2CPP_METHOD_NAME(7),
		android::widget::RadioGroup::J2CPP_METHOD_SIGNATURE(7), 
		void >
	(get_jobject());
}

void android::widget::RadioGroup::setOnCheckedChangeListener(local_ref< android::widget::RadioGroup_::OnCheckedChangeListener > const &a0)
{
	return call_method<
		android::widget::RadioGroup::J2CPP_CLASS_NAME,
		android::widget::RadioGroup::J2CPP_METHOD_NAME(8),
		android::widget::RadioGroup::J2CPP_METHOD_SIGNATURE(8), 
		void >
	(get_jobject(), a0);
}

local_ref< android::widget::RadioGroup_::LayoutParams > android::widget::RadioGroup::generateLayoutParams(local_ref< android::util::AttributeSet > const &a0)
{
	return call_method<
		android::widget::RadioGroup::J2CPP_CLASS_NAME,
		android::widget::RadioGroup::J2CPP_METHOD_NAME(9),
		android::widget::RadioGroup::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< android::widget::RadioGroup_::LayoutParams > >
	(get_jobject(), a0);
}



local_ref< android::widget::LinearLayout_::LayoutParams > android::widget::RadioGroup::generateLayoutParams_1(local_ref< android::util::AttributeSet > const &a0)
{
	return call_method<
		android::widget::RadioGroup::J2CPP_CLASS_NAME,
		android::widget::RadioGroup::J2CPP_METHOD_NAME(12),
		android::widget::RadioGroup::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< android::widget::LinearLayout_::LayoutParams > >
	(get_jobject(), a0);
}


local_ref< android::view::ViewGroup_::LayoutParams > android::widget::RadioGroup::generateLayoutParams_2(local_ref< android::util::AttributeSet > const &a0)
{
	return call_method<
		android::widget::RadioGroup::J2CPP_CLASS_NAME,
		android::widget::RadioGroup::J2CPP_METHOD_NAME(14),
		android::widget::RadioGroup::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< android::view::ViewGroup_::LayoutParams > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::RadioGroup,"android/widget/RadioGroup")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,2,"setOnHierarchyChangeListener","(Landroid/view/ViewGroup$OnHierarchyChangeListener;)V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,3,"onFinishInflate","()V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,4,"addView","(Landroid/view/View;ILandroid/view/ViewGroup$LayoutParams;)V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,5,"check","(I)V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,6,"getCheckedRadioButtonId","()I")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,7,"clearCheck","()V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,8,"setOnCheckedChangeListener","(Landroid/widget/RadioGroup$OnCheckedChangeListener;)V")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,9,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/RadioGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,10,"checkLayoutParams","(Landroid/view/ViewGroup$LayoutParams;)Z")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,11,"generateDefaultLayoutParams","()Landroid/widget/LinearLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,12,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/widget/LinearLayout$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,13,"generateDefaultLayoutParams","()Landroid/view/ViewGroup$LayoutParams;")
J2CPP_DEFINE_METHOD(android::widget::RadioGroup,14,"generateLayoutParams","(Landroid/util/AttributeSet;)Landroid/view/ViewGroup$LayoutParams;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_RADIOGROUP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
