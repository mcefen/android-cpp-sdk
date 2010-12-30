/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.widget.CursorTreeAdapter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CURSORTREEADAPTER_HPP_DECL
#define J2CPP_ANDROID_WIDGET_CURSORTREEADAPTER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace android { namespace database { class Cursor; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class ViewGroup; } } }
namespace j2cpp { namespace android { namespace widget { class Filter; } } }
namespace j2cpp { namespace android { namespace widget { class BaseExpandableListAdapter; } } }
namespace j2cpp { namespace android { namespace widget { class FilterQueryProvider; } } }
namespace j2cpp { namespace android { namespace widget { class Filterable; } } }


#include <android/content/Context.hpp>
#include <android/database/Cursor.hpp>
#include <android/view/View.hpp>
#include <android/view/ViewGroup.hpp>
#include <android/widget/BaseExpandableListAdapter.hpp>
#include <android/widget/Filter.hpp>
#include <android/widget/FilterQueryProvider.hpp>
#include <android/widget/Filterable.hpp>
#include <java/lang/CharSequence.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class CursorTreeAdapter;
	class CursorTreeAdapter
		: public object<CursorTreeAdapter>
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

		explicit CursorTreeAdapter(jobject jobj)
		: object<CursorTreeAdapter>(jobj)
		{
		}

		operator local_ref<android::widget::BaseExpandableListAdapter>() const;
		operator local_ref<android::widget::Filterable>() const;


		CursorTreeAdapter(local_ref< android::database::Cursor > const&, local_ref< android::content::Context > const&);
		CursorTreeAdapter(local_ref< android::database::Cursor > const&, local_ref< android::content::Context > const&, jboolean);
		void setGroupCursor(local_ref< android::database::Cursor >  const&);
		void setChildrenCursor(jint, local_ref< android::database::Cursor >  const&);
		local_ref< android::database::Cursor > getChild(jint, jint);
		jlong getChildId(jint, jint);
		jint getChildrenCount(jint);
		local_ref< android::database::Cursor > getGroup(jint);
		jint getGroupCount();
		jlong getGroupId(jint);
		local_ref< android::view::View > getGroupView(jint, jboolean, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		local_ref< android::view::View > getChildView(jint, jint, jboolean, local_ref< android::view::View >  const&, local_ref< android::view::ViewGroup >  const&);
		jboolean isChildSelectable(jint, jint);
		jboolean hasStableIds();
		void notifyDataSetChanged();
		void notifyDataSetChanged(jboolean);
		void notifyDataSetInvalidated();
		void onGroupCollapsed(jint);
		local_ref< java::lang::String > convertToString(local_ref< android::database::Cursor >  const&);
		local_ref< android::database::Cursor > runQueryOnBackgroundThread(local_ref< java::lang::CharSequence >  const&);
		local_ref< android::widget::Filter > getFilter();
		local_ref< android::widget::FilterQueryProvider > getFilterQueryProvider();
		void setFilterQueryProvider(local_ref< android::widget::FilterQueryProvider >  const&);
		void changeCursor(local_ref< android::database::Cursor >  const&);
		local_ref< android::database::Cursor > getCursor();
		local_ref< java::lang::Object > getChild_1(jint, jint);
		local_ref< java::lang::Object > getGroup_1(jint);
	}; //class CursorTreeAdapter

} //namespace widget
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CURSORTREEADAPTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_CURSORTREEADAPTER_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_CURSORTREEADAPTER_HPP_IMPL

namespace j2cpp {



android::widget::CursorTreeAdapter::operator local_ref<android::widget::BaseExpandableListAdapter>() const
{
	return local_ref<android::widget::BaseExpandableListAdapter>(get_jobject());
}

android::widget::CursorTreeAdapter::operator local_ref<android::widget::Filterable>() const
{
	return local_ref<android::widget::Filterable>(get_jobject());
}


android::widget::CursorTreeAdapter::CursorTreeAdapter(local_ref< android::database::Cursor > const &a0, local_ref< android::content::Context > const &a1)
: object<android::widget::CursorTreeAdapter>(
	call_new_object<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(0),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(0)>
	(a0, a1)
)
{
}



android::widget::CursorTreeAdapter::CursorTreeAdapter(local_ref< android::database::Cursor > const &a0, local_ref< android::content::Context > const &a1, jboolean a2)
: object<android::widget::CursorTreeAdapter>(
	call_new_object<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(1),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1, a2)
)
{
}



void android::widget::CursorTreeAdapter::setGroupCursor(local_ref< android::database::Cursor > const &a0)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(3),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject(), a0);
}

void android::widget::CursorTreeAdapter::setChildrenCursor(jint a0, local_ref< android::database::Cursor > const &a1)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(4),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(4), 
		void >
	(get_jobject(), a0, a1);
}

local_ref< android::database::Cursor > android::widget::CursorTreeAdapter::getChild(jint a0, jint a1)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(5),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< android::database::Cursor > >
	(get_jobject(), a0, a1);
}

jlong android::widget::CursorTreeAdapter::getChildId(jint a0, jint a1)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(6),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(6), 
		jlong >
	(get_jobject(), a0, a1);
}

jint android::widget::CursorTreeAdapter::getChildrenCount(jint a0)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(7),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(7), 
		jint >
	(get_jobject(), a0);
}

local_ref< android::database::Cursor > android::widget::CursorTreeAdapter::getGroup(jint a0)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(8),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< android::database::Cursor > >
	(get_jobject(), a0);
}

jint android::widget::CursorTreeAdapter::getGroupCount()
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(9),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(9), 
		jint >
	(get_jobject());
}

jlong android::widget::CursorTreeAdapter::getGroupId(jint a0)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(10),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(10), 
		jlong >
	(get_jobject(), a0);
}

local_ref< android::view::View > android::widget::CursorTreeAdapter::getGroupView(jint a0, jboolean a1, local_ref< android::view::View > const &a2, local_ref< android::view::ViewGroup > const &a3)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(11),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(11), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2, a3);
}



local_ref< android::view::View > android::widget::CursorTreeAdapter::getChildView(jint a0, jint a1, jboolean a2, local_ref< android::view::View > const &a3, local_ref< android::view::ViewGroup > const &a4)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(14),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< android::view::View > >
	(get_jobject(), a0, a1, a2, a3, a4);
}



jboolean android::widget::CursorTreeAdapter::isChildSelectable(jint a0, jint a1)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(17),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(17), 
		jboolean >
	(get_jobject(), a0, a1);
}

jboolean android::widget::CursorTreeAdapter::hasStableIds()
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(18),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(18), 
		jboolean >
	(get_jobject());
}

void android::widget::CursorTreeAdapter::notifyDataSetChanged()
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(19),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(19), 
		void >
	(get_jobject());
}

void android::widget::CursorTreeAdapter::notifyDataSetChanged(jboolean a0)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(20),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(20), 
		void >
	(get_jobject(), a0);
}

void android::widget::CursorTreeAdapter::notifyDataSetInvalidated()
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(21),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(21), 
		void >
	(get_jobject());
}

void android::widget::CursorTreeAdapter::onGroupCollapsed(jint a0)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(22),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(22), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > android::widget::CursorTreeAdapter::convertToString(local_ref< android::database::Cursor > const &a0)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(23),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(23), 
		local_ref< java::lang::String > >
	(get_jobject(), a0);
}

local_ref< android::database::Cursor > android::widget::CursorTreeAdapter::runQueryOnBackgroundThread(local_ref< java::lang::CharSequence > const &a0)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(24),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(24), 
		local_ref< android::database::Cursor > >
	(get_jobject(), a0);
}

local_ref< android::widget::Filter > android::widget::CursorTreeAdapter::getFilter()
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(25),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(25), 
		local_ref< android::widget::Filter > >
	(get_jobject());
}

local_ref< android::widget::FilterQueryProvider > android::widget::CursorTreeAdapter::getFilterQueryProvider()
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(26),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< android::widget::FilterQueryProvider > >
	(get_jobject());
}

void android::widget::CursorTreeAdapter::setFilterQueryProvider(local_ref< android::widget::FilterQueryProvider > const &a0)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(27),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(27), 
		void >
	(get_jobject(), a0);
}

void android::widget::CursorTreeAdapter::changeCursor(local_ref< android::database::Cursor > const &a0)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(28),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(28), 
		void >
	(get_jobject(), a0);
}

local_ref< android::database::Cursor > android::widget::CursorTreeAdapter::getCursor()
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(29),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(29), 
		local_ref< android::database::Cursor > >
	(get_jobject());
}

local_ref< java::lang::Object > android::widget::CursorTreeAdapter::getChild_1(jint a0, jint a1)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(30),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(30), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0, a1);
}

local_ref< java::lang::Object > android::widget::CursorTreeAdapter::getGroup_1(jint a0)
{
	return call_method<
		android::widget::CursorTreeAdapter::J2CPP_CLASS_NAME,
		android::widget::CursorTreeAdapter::J2CPP_METHOD_NAME(31),
		android::widget::CursorTreeAdapter::J2CPP_METHOD_SIGNATURE(31), 
		local_ref< java::lang::Object > >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::widget::CursorTreeAdapter,"android/widget/CursorTreeAdapter")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,0,"<init>","(Landroid/database/Cursor;Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,1,"<init>","(Landroid/database/Cursor;Landroid/content/Context;Z)V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,2,"getChildrenCursor","(Landroid/database/Cursor;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,3,"setGroupCursor","(Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,4,"setChildrenCursor","(ILandroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,5,"getChild","(II)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,6,"getChildId","(II)J")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,7,"getChildrenCount","(I)I")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,8,"getGroup","(I)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,9,"getGroupCount","()I")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,10,"getGroupId","(I)J")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,11,"getGroupView","(IZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,12,"newGroupView","(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,13,"bindGroupView","(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;Z)V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,14,"getChildView","(IIZLandroid/view/View;Landroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,15,"newChildView","(Landroid/content/Context;Landroid/database/Cursor;ZLandroid/view/ViewGroup;)Landroid/view/View;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,16,"bindChildView","(Landroid/view/View;Landroid/content/Context;Landroid/database/Cursor;Z)V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,17,"isChildSelectable","(II)Z")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,18,"hasStableIds","()Z")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,19,"notifyDataSetChanged","()V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,20,"notifyDataSetChanged","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,21,"notifyDataSetInvalidated","()V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,22,"onGroupCollapsed","(I)V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,23,"convertToString","(Landroid/database/Cursor;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,24,"runQueryOnBackgroundThread","(Ljava/lang/CharSequence;)Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,25,"getFilter","()Landroid/widget/Filter;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,26,"getFilterQueryProvider","()Landroid/widget/FilterQueryProvider;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,27,"setFilterQueryProvider","(Landroid/widget/FilterQueryProvider;)V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,28,"changeCursor","(Landroid/database/Cursor;)V")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,29,"getCursor","()Landroid/database/Cursor;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,30,"getChild","(II)Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(android::widget::CursorTreeAdapter,31,"getGroup","(I)Ljava/lang/Object;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_CURSORTREEADAPTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
