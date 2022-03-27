// Generated by gencpp from file sbpl_lattice_planner/SBPLLatticePlannerStats.msg
// DO NOT EDIT!


#ifndef SBPL_LATTICE_PLANNER_MESSAGE_SBPLLATTICEPLANNERSTATS_H
#define SBPL_LATTICE_PLANNER_MESSAGE_SBPLLATTICEPLANNERSTATS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/PoseStamped.h>
#include <geometry_msgs/PoseStamped.h>

namespace sbpl_lattice_planner
{
template <class ContainerAllocator>
struct SBPLLatticePlannerStats_
{
  typedef SBPLLatticePlannerStats_<ContainerAllocator> Type;

  SBPLLatticePlannerStats_()
    : initial_epsilon(0.0)
    , final_epsilon(0.0)
    , plan_to_first_solution(false)
    , allocated_time(0.0)
    , actual_time(0.0)
    , time_to_first_solution(0.0)
    , solution_cost(0.0)
    , path_size(0.0)
    , final_number_of_expands(0)
    , number_of_expands_initial_solution(0)
    , start()
    , goal()  {
    }
  SBPLLatticePlannerStats_(const ContainerAllocator& _alloc)
    : initial_epsilon(0.0)
    , final_epsilon(0.0)
    , plan_to_first_solution(false)
    , allocated_time(0.0)
    , actual_time(0.0)
    , time_to_first_solution(0.0)
    , solution_cost(0.0)
    , path_size(0.0)
    , final_number_of_expands(0)
    , number_of_expands_initial_solution(0)
    , start(_alloc)
    , goal(_alloc)  {
  (void)_alloc;
    }



   typedef double _initial_epsilon_type;
  _initial_epsilon_type initial_epsilon;

   typedef double _final_epsilon_type;
  _final_epsilon_type final_epsilon;

   typedef uint8_t _plan_to_first_solution_type;
  _plan_to_first_solution_type plan_to_first_solution;

   typedef double _allocated_time_type;
  _allocated_time_type allocated_time;

   typedef double _actual_time_type;
  _actual_time_type actual_time;

   typedef double _time_to_first_solution_type;
  _time_to_first_solution_type time_to_first_solution;

   typedef double _solution_cost_type;
  _solution_cost_type solution_cost;

   typedef double _path_size_type;
  _path_size_type path_size;

   typedef int64_t _final_number_of_expands_type;
  _final_number_of_expands_type final_number_of_expands;

   typedef int64_t _number_of_expands_initial_solution_type;
  _number_of_expands_initial_solution_type number_of_expands_initial_solution;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _start_type;
  _start_type start;

   typedef  ::geometry_msgs::PoseStamped_<ContainerAllocator>  _goal_type;
  _goal_type goal;





  typedef boost::shared_ptr< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> const> ConstPtr;

}; // struct SBPLLatticePlannerStats_

typedef ::sbpl_lattice_planner::SBPLLatticePlannerStats_<std::allocator<void> > SBPLLatticePlannerStats;

typedef boost::shared_ptr< ::sbpl_lattice_planner::SBPLLatticePlannerStats > SBPLLatticePlannerStatsPtr;
typedef boost::shared_ptr< ::sbpl_lattice_planner::SBPLLatticePlannerStats const> SBPLLatticePlannerStatsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator1> & lhs, const ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator2> & rhs)
{
  return lhs.initial_epsilon == rhs.initial_epsilon &&
    lhs.final_epsilon == rhs.final_epsilon &&
    lhs.plan_to_first_solution == rhs.plan_to_first_solution &&
    lhs.allocated_time == rhs.allocated_time &&
    lhs.actual_time == rhs.actual_time &&
    lhs.time_to_first_solution == rhs.time_to_first_solution &&
    lhs.solution_cost == rhs.solution_cost &&
    lhs.path_size == rhs.path_size &&
    lhs.final_number_of_expands == rhs.final_number_of_expands &&
    lhs.number_of_expands_initial_solution == rhs.number_of_expands_initial_solution &&
    lhs.start == rhs.start &&
    lhs.goal == rhs.goal;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator1> & lhs, const ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sbpl_lattice_planner

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b1c85b1cec5e7b196cc477ac1440bbf0";
  }

  static const char* value(const ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb1c85b1cec5e7b19ULL;
  static const uint64_t static_value2 = 0x6cc477ac1440bbf0ULL;
};

template<class ContainerAllocator>
struct DataType< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sbpl_lattice_planner/SBPLLatticePlannerStats";
  }

  static const char* value(const ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#planner stats\n"
"float64 initial_epsilon\n"
"float64 final_epsilon\n"
"bool plan_to_first_solution\n"
"float64 allocated_time\n"
"float64 actual_time\n"
"float64 time_to_first_solution\n"
"float64 solution_cost\n"
"float64 path_size\n"
"int64 final_number_of_expands\n"
"int64 number_of_expands_initial_solution\n"
"\n"
"#problem stats\n"
"geometry_msgs/PoseStamped start\n"
"geometry_msgs/PoseStamped goal\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.initial_epsilon);
      stream.next(m.final_epsilon);
      stream.next(m.plan_to_first_solution);
      stream.next(m.allocated_time);
      stream.next(m.actual_time);
      stream.next(m.time_to_first_solution);
      stream.next(m.solution_cost);
      stream.next(m.path_size);
      stream.next(m.final_number_of_expands);
      stream.next(m.number_of_expands_initial_solution);
      stream.next(m.start);
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SBPLLatticePlannerStats_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sbpl_lattice_planner::SBPLLatticePlannerStats_<ContainerAllocator>& v)
  {
    s << indent << "initial_epsilon: ";
    Printer<double>::stream(s, indent + "  ", v.initial_epsilon);
    s << indent << "final_epsilon: ";
    Printer<double>::stream(s, indent + "  ", v.final_epsilon);
    s << indent << "plan_to_first_solution: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.plan_to_first_solution);
    s << indent << "allocated_time: ";
    Printer<double>::stream(s, indent + "  ", v.allocated_time);
    s << indent << "actual_time: ";
    Printer<double>::stream(s, indent + "  ", v.actual_time);
    s << indent << "time_to_first_solution: ";
    Printer<double>::stream(s, indent + "  ", v.time_to_first_solution);
    s << indent << "solution_cost: ";
    Printer<double>::stream(s, indent + "  ", v.solution_cost);
    s << indent << "path_size: ";
    Printer<double>::stream(s, indent + "  ", v.path_size);
    s << indent << "final_number_of_expands: ";
    Printer<int64_t>::stream(s, indent + "  ", v.final_number_of_expands);
    s << indent << "number_of_expands_initial_solution: ";
    Printer<int64_t>::stream(s, indent + "  ", v.number_of_expands_initial_solution);
    s << indent << "start: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.start);
    s << indent << "goal: ";
    s << std::endl;
    Printer< ::geometry_msgs::PoseStamped_<ContainerAllocator> >::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SBPL_LATTICE_PLANNER_MESSAGE_SBPLLATTICEPLANNERSTATS_H
