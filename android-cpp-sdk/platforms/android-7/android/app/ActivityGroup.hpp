/*================================================================================
  code generated by: java2cpp
  class: android.app.ActivityGroup
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_DECL
#define J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_DECL


namespace j2cpp { namespace android { namespace app { class Activity; } } }
namespace j2cpp { namespace android { namespace app { class LocalActivityManager; } } }


#include <android/app/Activity.hpp>
#include <android/app/LocalActivityManager.hpp>


namespace j2cpp {

namespace android { namespace app {

	class ActivityGroup;
	class ActivityGroup
		: public cpp_object<ActivityGroup>
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

		ActivityGroup(jobject jobj)
		: cpp_object<ActivityGroup>(jobj)
		{
		}

		local_ref< android::app::Activity > getCurrentActivity();
		local_ref< android::app::LocalActivityManager > getLocalActivityManager();
	}; //class ActivityGroup

} //namespace app
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_IMPL
#define J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::app::ActivityGroup > create< android::app::ActivityGroup>()
{
	return local_ref< android::app::ActivityGroup >(
		environment::get().get_jenv()->NewObject(
			get_class<android::app::ActivityGroup::J2CPP_CLASS_NAME>(),
			get_method_id<android::app::ActivityGroup::J2CPP_CLASS_NAME, android::app::ActivityGroup::J2CPP_METHOD_NAME(0), android::app::ActivityGroup::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< android::app::ActivityGroup > create< android::app::ActivityGroup>(cpp_boolean const &a0)
{
	return local_ref< android::app::ActivityGroup >(
		environment::get().get_jenv()->NewObject(
			get_class<android::app::ActivityGroup::J2CPP_CLASS_NAME>(),
			get_method_id<android::app::ActivityGroup::J2CPP_CLASS_NAME, android::app::ActivityGroup::J2CPP_METHOD_NAME(1), android::app::ActivityGroup::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}







local_ref< android::app::Activity > android::app::ActivityGroup::getCurrentActivity()
{
	return local_ref< android::app::Activity >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}

local_ref< android::app::LocalActivityManager > android::app::ActivityGroup::getLocalActivityManager()
{
	return local_ref< android::app::LocalActivityManager >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::app::ActivityGroup,"android/app/ActivityGroup")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,1,"<init>","(Z)V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,2,"onCreate","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,3,"onResume","()V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,4,"onSaveInstanceState","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,5,"onPause","()V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,6,"onStop","()V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,7,"onDestroy","()V")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,8,"getCurrentActivity","()Landroid/app/Activity;")
J2CPP_DEFINE_METHOD(android::app::ActivityGroup,9,"getLocalActivityManager","()Landroid/app/LocalActivityManager;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_ACTIVITYGROUP_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION