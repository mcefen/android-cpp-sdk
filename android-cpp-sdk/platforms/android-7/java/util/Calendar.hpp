/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.Calendar
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CALENDAR_HPP_DECL
#define J2CPP_JAVA_UTIL_CALENDAR_HPP_DECL


namespace j2cpp { namespace java { namespace io { class Serializable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class Comparable; } } }
namespace j2cpp { namespace java { namespace lang { class Cloneable; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Locale; } } }
namespace j2cpp { namespace java { namespace util { class Date; } } }
namespace j2cpp { namespace java { namespace util { class TimeZone; } } }


#include <java/io/Serializable.hpp>
#include <java/lang/Cloneable.hpp>
#include <java/lang/Comparable.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/util/Date.hpp>
#include <java/util/Locale.hpp>
#include <java/util/TimeZone.hpp>


namespace j2cpp {

namespace java { namespace util {

	class Calendar;
	class Calendar
		: public object<Calendar>
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
		J2CPP_DECLARE_METHOD(47)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)
		J2CPP_DECLARE_FIELD(28)
		J2CPP_DECLARE_FIELD(29)
		J2CPP_DECLARE_FIELD(30)
		J2CPP_DECLARE_FIELD(31)
		J2CPP_DECLARE_FIELD(32)
		J2CPP_DECLARE_FIELD(33)
		J2CPP_DECLARE_FIELD(34)
		J2CPP_DECLARE_FIELD(35)
		J2CPP_DECLARE_FIELD(36)
		J2CPP_DECLARE_FIELD(37)
		J2CPP_DECLARE_FIELD(38)
		J2CPP_DECLARE_FIELD(39)
		J2CPP_DECLARE_FIELD(40)
		J2CPP_DECLARE_FIELD(41)
		J2CPP_DECLARE_FIELD(42)
		J2CPP_DECLARE_FIELD(43)
		J2CPP_DECLARE_FIELD(44)
		J2CPP_DECLARE_FIELD(45)

		explicit Calendar(jobject jobj)
		: object<Calendar>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;
		operator local_ref<java::lang::Cloneable>() const;
		operator local_ref<java::lang::Comparable>() const;


		void add(jint, jint);
		jboolean after(local_ref< java::lang::Object >  const&);
		jboolean before(local_ref< java::lang::Object >  const&);
		void clear();
		void clear(jint);
		local_ref< java::lang::Object > clone();
		jboolean equals(local_ref< java::lang::Object >  const&);
		jint get(jint);
		jint getActualMaximum(jint);
		jint getActualMinimum(jint);
		static local_ref< array< local_ref< java::util::Locale >, 1> > getAvailableLocales();
		jint getFirstDayOfWeek();
		jint getGreatestMinimum(jint);
		static local_ref< java::util::Calendar > getInstance();
		static local_ref< java::util::Calendar > getInstance(local_ref< java::util::Locale >  const&);
		static local_ref< java::util::Calendar > getInstance(local_ref< java::util::TimeZone >  const&);
		static local_ref< java::util::Calendar > getInstance(local_ref< java::util::TimeZone >  const&, local_ref< java::util::Locale >  const&);
		jint getLeastMaximum(jint);
		jint getMaximum(jint);
		jint getMinimalDaysInFirstWeek();
		jint getMinimum(jint);
		local_ref< java::util::Date > getTime();
		jlong getTimeInMillis();
		local_ref< java::util::TimeZone > getTimeZone();
		jint hashCode();
		jboolean isLenient();
		jboolean isSet(jint);
		void roll(jint, jint);
		void roll(jint, jboolean);
		void set(jint, jint);
		void set(jint, jint, jint);
		void set(jint, jint, jint, jint, jint);
		void set(jint, jint, jint, jint, jint, jint);
		void setFirstDayOfWeek(jint);
		void setLenient(jboolean);
		void setMinimalDaysInFirstWeek(jint);
		void setTime(local_ref< java::util::Date >  const&);
		void setTimeInMillis(jlong);
		void setTimeZone(local_ref< java::util::TimeZone >  const&);
		local_ref< java::lang::String > toString();
		jint compareTo(local_ref< java::util::Calendar >  const&);
		jint compareTo(local_ref< java::lang::Object >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > JANUARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), jint > FEBRUARY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), jint > MARCH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), jint > APRIL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), jint > MAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), jint > JUNE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), jint > JULY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), jint > AUGUST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), jint > SEPTEMBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), jint > OCTOBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), jint > NOVEMBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), jint > DECEMBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), jint > UNDECIMBER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), jint > SUNDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), jint > MONDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), jint > TUESDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), jint > WEDNESDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), jint > THURSDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), jint > FRIDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), jint > SATURDAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), jint > ERA;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), jint > YEAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), jint > MONTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), jint > WEEK_OF_YEAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), jint > WEEK_OF_MONTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(30), J2CPP_FIELD_SIGNATURE(30), jint > DATE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(31), J2CPP_FIELD_SIGNATURE(31), jint > DAY_OF_MONTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(32), J2CPP_FIELD_SIGNATURE(32), jint > DAY_OF_YEAR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(33), J2CPP_FIELD_SIGNATURE(33), jint > DAY_OF_WEEK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(34), J2CPP_FIELD_SIGNATURE(34), jint > DAY_OF_WEEK_IN_MONTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(35), J2CPP_FIELD_SIGNATURE(35), jint > AM_PM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(36), J2CPP_FIELD_SIGNATURE(36), jint > HOUR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(37), J2CPP_FIELD_SIGNATURE(37), jint > HOUR_OF_DAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(38), J2CPP_FIELD_SIGNATURE(38), jint > MINUTE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(39), J2CPP_FIELD_SIGNATURE(39), jint > SECOND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(40), J2CPP_FIELD_SIGNATURE(40), jint > MILLISECOND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(41), J2CPP_FIELD_SIGNATURE(41), jint > ZONE_OFFSET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(42), J2CPP_FIELD_SIGNATURE(42), jint > DST_OFFSET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(43), J2CPP_FIELD_SIGNATURE(43), jint > FIELD_COUNT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(44), J2CPP_FIELD_SIGNATURE(44), jint > AM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(45), J2CPP_FIELD_SIGNATURE(45), jint > PM;
	}; //class Calendar

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CALENDAR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_CALENDAR_HPP_IMPL
#define J2CPP_JAVA_UTIL_CALENDAR_HPP_IMPL

namespace j2cpp {



java::util::Calendar::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::Calendar::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}

java::util::Calendar::operator local_ref<java::lang::Cloneable>() const
{
	return local_ref<java::lang::Cloneable>(get_jobject());
}

java::util::Calendar::operator local_ref<java::lang::Comparable>() const
{
	return local_ref<java::lang::Comparable>(get_jobject());
}



void java::util::Calendar::add(jint a0, jint a1)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(2),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0, a1);
}

jboolean java::util::Calendar::after(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(3),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(3), 
		jboolean >
	(get_jobject(), a0);
}

jboolean java::util::Calendar::before(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(4),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(4), 
		jboolean >
	(get_jobject(), a0);
}

void java::util::Calendar::clear()
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(5),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(5), 
		void >
	(get_jobject());
}

void java::util::Calendar::clear(jint a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(6),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::Object > java::util::Calendar::clone()
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(7),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::Object > >
	(get_jobject());
}




jboolean java::util::Calendar::equals(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(11),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(11), 
		jboolean >
	(get_jobject(), a0);
}

jint java::util::Calendar::get(jint a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(12),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(12), 
		jint >
	(get_jobject(), a0);
}

jint java::util::Calendar::getActualMaximum(jint a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(13),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(13), 
		jint >
	(get_jobject(), a0);
}

jint java::util::Calendar::getActualMinimum(jint a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(14),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(14), 
		jint >
	(get_jobject(), a0);
}

local_ref< array< local_ref< java::util::Locale >, 1> > java::util::Calendar::getAvailableLocales()
{
	return call_static_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(15),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(15), 
		local_ref< array< local_ref< java::util::Locale >, 1> > >
	();
}

jint java::util::Calendar::getFirstDayOfWeek()
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(16),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(16), 
		jint >
	(get_jobject());
}

jint java::util::Calendar::getGreatestMinimum(jint a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(17),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(17), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::util::Calendar > java::util::Calendar::getInstance()
{
	return call_static_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(18),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(18), 
		local_ref< java::util::Calendar > >
	();
}

local_ref< java::util::Calendar > java::util::Calendar::getInstance(local_ref< java::util::Locale > const &a0)
{
	return call_static_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(19),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(19), 
		local_ref< java::util::Calendar > >
	(a0);
}

local_ref< java::util::Calendar > java::util::Calendar::getInstance(local_ref< java::util::TimeZone > const &a0)
{
	return call_static_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(20),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(20), 
		local_ref< java::util::Calendar > >
	(a0);
}

local_ref< java::util::Calendar > java::util::Calendar::getInstance(local_ref< java::util::TimeZone > const &a0, local_ref< java::util::Locale > const &a1)
{
	return call_static_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(21),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(21), 
		local_ref< java::util::Calendar > >
	(a0, a1);
}

jint java::util::Calendar::getLeastMaximum(jint a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(22),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(22), 
		jint >
	(get_jobject(), a0);
}

jint java::util::Calendar::getMaximum(jint a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(23),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(23), 
		jint >
	(get_jobject(), a0);
}

jint java::util::Calendar::getMinimalDaysInFirstWeek()
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(24),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(24), 
		jint >
	(get_jobject());
}

jint java::util::Calendar::getMinimum(jint a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(25),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(25), 
		jint >
	(get_jobject(), a0);
}

local_ref< java::util::Date > java::util::Calendar::getTime()
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(26),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(26), 
		local_ref< java::util::Date > >
	(get_jobject());
}

jlong java::util::Calendar::getTimeInMillis()
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(27),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(27), 
		jlong >
	(get_jobject());
}

local_ref< java::util::TimeZone > java::util::Calendar::getTimeZone()
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(28),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(28), 
		local_ref< java::util::TimeZone > >
	(get_jobject());
}

jint java::util::Calendar::hashCode()
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(29),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(29), 
		jint >
	(get_jobject());
}


jboolean java::util::Calendar::isLenient()
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(31),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(31), 
		jboolean >
	(get_jobject());
}

jboolean java::util::Calendar::isSet(jint a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(32),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(32), 
		jboolean >
	(get_jobject(), a0);
}

void java::util::Calendar::roll(jint a0, jint a1)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(33),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(33), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::Calendar::roll(jint a0, jboolean a1)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(34),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(34), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::Calendar::set(jint a0, jint a1)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(35),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(35), 
		void >
	(get_jobject(), a0, a1);
}

void java::util::Calendar::set(jint a0, jint a1, jint a2)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(36),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(36), 
		void >
	(get_jobject(), a0, a1, a2);
}

void java::util::Calendar::set(jint a0, jint a1, jint a2, jint a3, jint a4)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(37),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(37), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4);
}

void java::util::Calendar::set(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(38),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(38), 
		void >
	(get_jobject(), a0, a1, a2, a3, a4, a5);
}

void java::util::Calendar::setFirstDayOfWeek(jint a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(39),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(39), 
		void >
	(get_jobject(), a0);
}

void java::util::Calendar::setLenient(jboolean a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(40),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(40), 
		void >
	(get_jobject(), a0);
}

void java::util::Calendar::setMinimalDaysInFirstWeek(jint a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(41),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(41), 
		void >
	(get_jobject(), a0);
}

void java::util::Calendar::setTime(local_ref< java::util::Date > const &a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(42),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(42), 
		void >
	(get_jobject(), a0);
}

void java::util::Calendar::setTimeInMillis(jlong a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(43),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(43), 
		void >
	(get_jobject(), a0);
}

void java::util::Calendar::setTimeZone(local_ref< java::util::TimeZone > const &a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(44),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(44), 
		void >
	(get_jobject(), a0);
}

local_ref< java::lang::String > java::util::Calendar::toString()
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(45),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(45), 
		local_ref< java::lang::String > >
	(get_jobject());
}

jint java::util::Calendar::compareTo(local_ref< java::util::Calendar > const &a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(46),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(46), 
		jint >
	(get_jobject(), a0);
}

jint java::util::Calendar::compareTo(local_ref< java::lang::Object > const &a0)
{
	return call_method<
		java::util::Calendar::J2CPP_CLASS_NAME,
		java::util::Calendar::J2CPP_METHOD_NAME(47),
		java::util::Calendar::J2CPP_METHOD_SIGNATURE(47), 
		jint >
	(get_jobject(), a0);
}


static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(5),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(5),
	jint
> java::util::Calendar::JANUARY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(6),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(6),
	jint
> java::util::Calendar::FEBRUARY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(7),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(7),
	jint
> java::util::Calendar::MARCH;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(8),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(8),
	jint
> java::util::Calendar::APRIL;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(9),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(9),
	jint
> java::util::Calendar::MAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(10),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(10),
	jint
> java::util::Calendar::JUNE;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(11),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(11),
	jint
> java::util::Calendar::JULY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(12),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(12),
	jint
> java::util::Calendar::AUGUST;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(13),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(13),
	jint
> java::util::Calendar::SEPTEMBER;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(14),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(14),
	jint
> java::util::Calendar::OCTOBER;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(15),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(15),
	jint
> java::util::Calendar::NOVEMBER;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(16),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(16),
	jint
> java::util::Calendar::DECEMBER;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(17),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(17),
	jint
> java::util::Calendar::UNDECIMBER;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(18),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(18),
	jint
> java::util::Calendar::SUNDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(19),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(19),
	jint
> java::util::Calendar::MONDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(20),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(20),
	jint
> java::util::Calendar::TUESDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(21),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(21),
	jint
> java::util::Calendar::WEDNESDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(22),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(22),
	jint
> java::util::Calendar::THURSDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(23),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(23),
	jint
> java::util::Calendar::FRIDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(24),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(24),
	jint
> java::util::Calendar::SATURDAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(25),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(25),
	jint
> java::util::Calendar::ERA;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(26),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(26),
	jint
> java::util::Calendar::YEAR;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(27),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(27),
	jint
> java::util::Calendar::MONTH;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(28),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(28),
	jint
> java::util::Calendar::WEEK_OF_YEAR;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(29),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(29),
	jint
> java::util::Calendar::WEEK_OF_MONTH;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(30),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(30),
	jint
> java::util::Calendar::DATE;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(31),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(31),
	jint
> java::util::Calendar::DAY_OF_MONTH;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(32),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(32),
	jint
> java::util::Calendar::DAY_OF_YEAR;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(33),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(33),
	jint
> java::util::Calendar::DAY_OF_WEEK;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(34),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(34),
	jint
> java::util::Calendar::DAY_OF_WEEK_IN_MONTH;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(35),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(35),
	jint
> java::util::Calendar::AM_PM;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(36),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(36),
	jint
> java::util::Calendar::HOUR;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(37),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(37),
	jint
> java::util::Calendar::HOUR_OF_DAY;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(38),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(38),
	jint
> java::util::Calendar::MINUTE;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(39),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(39),
	jint
> java::util::Calendar::SECOND;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(40),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(40),
	jint
> java::util::Calendar::MILLISECOND;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(41),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(41),
	jint
> java::util::Calendar::ZONE_OFFSET;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(42),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(42),
	jint
> java::util::Calendar::DST_OFFSET;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(43),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(43),
	jint
> java::util::Calendar::FIELD_COUNT;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(44),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(44),
	jint
> java::util::Calendar::AM;

static_field<
	java::util::Calendar::J2CPP_CLASS_NAME,
	java::util::Calendar::J2CPP_FIELD_NAME(45),
	java::util::Calendar::J2CPP_FIELD_SIGNATURE(45),
	jint
> java::util::Calendar::PM;


J2CPP_DEFINE_CLASS(java::util::Calendar,"java/util/Calendar")
J2CPP_DEFINE_METHOD(java::util::Calendar,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::Calendar,1,"<init>","(Ljava/util/TimeZone;Ljava/util/Locale;)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,2,"add","(II)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,3,"after","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Calendar,4,"before","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Calendar,5,"clear","()V")
J2CPP_DEFINE_METHOD(java::util::Calendar,6,"clear","(I)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,7,"clone","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(java::util::Calendar,8,"complete","()V")
J2CPP_DEFINE_METHOD(java::util::Calendar,9,"computeFields","()V")
J2CPP_DEFINE_METHOD(java::util::Calendar,10,"computeTime","()V")
J2CPP_DEFINE_METHOD(java::util::Calendar,11,"equals","(Ljava/lang/Object;)Z")
J2CPP_DEFINE_METHOD(java::util::Calendar,12,"get","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,13,"getActualMaximum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,14,"getActualMinimum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,15,"getAvailableLocales","()[java.util.Locale")
J2CPP_DEFINE_METHOD(java::util::Calendar,16,"getFirstDayOfWeek","()I")
J2CPP_DEFINE_METHOD(java::util::Calendar,17,"getGreatestMinimum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,18,"getInstance","()Ljava/util/Calendar;")
J2CPP_DEFINE_METHOD(java::util::Calendar,19,"getInstance","(Ljava/util/Locale;)Ljava/util/Calendar;")
J2CPP_DEFINE_METHOD(java::util::Calendar,20,"getInstance","(Ljava/util/TimeZone;)Ljava/util/Calendar;")
J2CPP_DEFINE_METHOD(java::util::Calendar,21,"getInstance","(Ljava/util/TimeZone;Ljava/util/Locale;)Ljava/util/Calendar;")
J2CPP_DEFINE_METHOD(java::util::Calendar,22,"getLeastMaximum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,23,"getMaximum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,24,"getMinimalDaysInFirstWeek","()I")
J2CPP_DEFINE_METHOD(java::util::Calendar,25,"getMinimum","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,26,"getTime","()Ljava/util/Date;")
J2CPP_DEFINE_METHOD(java::util::Calendar,27,"getTimeInMillis","()J")
J2CPP_DEFINE_METHOD(java::util::Calendar,28,"getTimeZone","()Ljava/util/TimeZone;")
J2CPP_DEFINE_METHOD(java::util::Calendar,29,"hashCode","()I")
J2CPP_DEFINE_METHOD(java::util::Calendar,30,"internalGet","(I)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,31,"isLenient","()Z")
J2CPP_DEFINE_METHOD(java::util::Calendar,32,"isSet","(I)Z")
J2CPP_DEFINE_METHOD(java::util::Calendar,33,"roll","(II)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,34,"roll","(IZ)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,35,"set","(II)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,36,"set","(III)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,37,"set","(IIIII)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,38,"set","(IIIIII)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,39,"setFirstDayOfWeek","(I)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,40,"setLenient","(Z)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,41,"setMinimalDaysInFirstWeek","(I)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,42,"setTime","(Ljava/util/Date;)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,43,"setTimeInMillis","(J)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,44,"setTimeZone","(Ljava/util/TimeZone;)V")
J2CPP_DEFINE_METHOD(java::util::Calendar,45,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::util::Calendar,46,"compareTo","(Ljava/util/Calendar;)I")
J2CPP_DEFINE_METHOD(java::util::Calendar,47,"compareTo","(Ljava/lang/Object;)I")
J2CPP_DEFINE_FIELD(java::util::Calendar,0,"areFieldsSet","Z")
J2CPP_DEFINE_FIELD(java::util::Calendar,1,"fields","[I")
J2CPP_DEFINE_FIELD(java::util::Calendar,2,"isSet","[Z")
J2CPP_DEFINE_FIELD(java::util::Calendar,3,"isTimeSet","Z")
J2CPP_DEFINE_FIELD(java::util::Calendar,4,"time","J")
J2CPP_DEFINE_FIELD(java::util::Calendar,5,"JANUARY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,6,"FEBRUARY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,7,"MARCH","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,8,"APRIL","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,9,"MAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,10,"JUNE","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,11,"JULY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,12,"AUGUST","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,13,"SEPTEMBER","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,14,"OCTOBER","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,15,"NOVEMBER","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,16,"DECEMBER","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,17,"UNDECIMBER","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,18,"SUNDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,19,"MONDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,20,"TUESDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,21,"WEDNESDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,22,"THURSDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,23,"FRIDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,24,"SATURDAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,25,"ERA","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,26,"YEAR","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,27,"MONTH","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,28,"WEEK_OF_YEAR","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,29,"WEEK_OF_MONTH","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,30,"DATE","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,31,"DAY_OF_MONTH","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,32,"DAY_OF_YEAR","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,33,"DAY_OF_WEEK","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,34,"DAY_OF_WEEK_IN_MONTH","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,35,"AM_PM","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,36,"HOUR","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,37,"HOUR_OF_DAY","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,38,"MINUTE","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,39,"SECOND","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,40,"MILLISECOND","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,41,"ZONE_OFFSET","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,42,"DST_OFFSET","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,43,"FIELD_COUNT","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,44,"AM","I")
J2CPP_DEFINE_FIELD(java::util::Calendar,45,"PM","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_CALENDAR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
