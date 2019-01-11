// Generated by gencpp from file mavros_msgs/HilStateQuaternion.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_HILSTATEQUATERNION_H
#define MAVROS_MSGS_MESSAGE_HILSTATEQUATERNION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>
#include <geographic_msgs/GeoPoint.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct HilStateQuaternion_
{
  typedef HilStateQuaternion_<ContainerAllocator> Type;

  HilStateQuaternion_()
    : header()
    , orientation()
    , angular_velocity()
    , linear_acceleration()
    , linear_velocity()
    , geo()
    , ind_airspeed(0.0)
    , true_airspeed(0.0)  {
    }
  HilStateQuaternion_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , orientation(_alloc)
    , angular_velocity(_alloc)
    , linear_acceleration(_alloc)
    , linear_velocity(_alloc)
    , geo(_alloc)
    , ind_airspeed(0.0)
    , true_airspeed(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _angular_velocity_type;
  _angular_velocity_type angular_velocity;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _linear_acceleration_type;
  _linear_acceleration_type linear_acceleration;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _linear_velocity_type;
  _linear_velocity_type linear_velocity;

   typedef  ::geographic_msgs::GeoPoint_<ContainerAllocator>  _geo_type;
  _geo_type geo;

   typedef float _ind_airspeed_type;
  _ind_airspeed_type ind_airspeed;

   typedef float _true_airspeed_type;
  _true_airspeed_type true_airspeed;





  typedef boost::shared_ptr< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> const> ConstPtr;

}; // struct HilStateQuaternion_

typedef ::mavros_msgs::HilStateQuaternion_<std::allocator<void> > HilStateQuaternion;

typedef boost::shared_ptr< ::mavros_msgs::HilStateQuaternion > HilStateQuaternionPtr;
typedef boost::shared_ptr< ::mavros_msgs::HilStateQuaternion const> HilStateQuaternionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/luis/catkin_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c858c0f05d4ab30256be7c53edee8e3c";
  }

  static const char* value(const ::mavros_msgs::HilStateQuaternion_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc858c0f05d4ab302ULL;
  static const uint64_t static_value2 = 0x56be7c53edee8e3cULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/HilStateQuaternion";
  }

  static const char* value(const ::mavros_msgs::HilStateQuaternion_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# HilStateQuaternion.msg\n\
#\n\
# ROS representation of MAVLink HIL_STATE_QUATERNION\n\
# See mavlink message documentation here:\n\
# https://pixhawk.ethz.ch/mavlink/#HIL_STATE_QUATERNION\n\
\n\
std_msgs/Header header\n\
\n\
geometry_msgs/Quaternion orientation\n\
geometry_msgs/Vector3 angular_velocity\n\
geometry_msgs/Vector3 linear_acceleration\n\
geometry_msgs/Vector3 linear_velocity\n\
geographic_msgs/GeoPoint geo\n\
float32 ind_airspeed\n\
float32 true_airspeed\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geographic_msgs/GeoPoint\n\
# Geographic point, using the WGS 84 reference ellipsoid.\n\
\n\
# Latitude [degrees]. Positive is north of equator; negative is south\n\
# (-90 <= latitude <= +90).\n\
float64 latitude\n\
\n\
# Longitude [degrees]. Positive is east of prime meridian; negative is\n\
# west (-180 <= longitude <= +180). At the poles, latitude is -90 or\n\
# +90, and longitude is irrelevant, but must be in range.\n\
float64 longitude\n\
\n\
# Altitude [m]. Positive is above the WGS 84 ellipsoid (NaN if unspecified).\n\
float64 altitude\n\
";
  }

  static const char* value(const ::mavros_msgs::HilStateQuaternion_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.orientation);
      stream.next(m.angular_velocity);
      stream.next(m.linear_acceleration);
      stream.next(m.linear_velocity);
      stream.next(m.geo);
      stream.next(m.ind_airspeed);
      stream.next(m.true_airspeed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct HilStateQuaternion_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::HilStateQuaternion_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::HilStateQuaternion_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "angular_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.angular_velocity);
    s << indent << "linear_acceleration: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear_acceleration);
    s << indent << "linear_velocity: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.linear_velocity);
    s << indent << "geo: ";
    s << std::endl;
    Printer< ::geographic_msgs::GeoPoint_<ContainerAllocator> >::stream(s, indent + "  ", v.geo);
    s << indent << "ind_airspeed: ";
    Printer<float>::stream(s, indent + "  ", v.ind_airspeed);
    s << indent << "true_airspeed: ";
    Printer<float>::stream(s, indent + "  ", v.true_airspeed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_HILSTATEQUATERNION_H
