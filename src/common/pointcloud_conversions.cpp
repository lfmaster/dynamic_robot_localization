/**\file localization.cpp
 * \brief Description...
 *
 * @version 1.0
 * @author Carlos Miguel Correia da Costa
 */

// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   <includes>   <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#include <dynamic_robot_localization/common/common.h>
#include <dynamic_robot_localization/common/impl/pointcloud_conversions.hpp>
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   </includes>  <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<


// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   <template instantiations>   <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
#ifndef DRL_NO_PRECOMPILE
#include <pcl/impl/instantiate.hpp>
#include <pcl/point_types.h>
#define PCL_INSTANTIATE_DRLfromROSMsg(T) template bool dynamic_robot_localization::pointcloud_conversions::fromROSMsg<T>(const nav_msgs::OccupancyGrid&, pcl::PointCloud<T>&, int);
PCL_INSTANTIATE(DRLfromROSMsg, DRL_POINT_TYPES)
#define PCL_INSTANTIATE_DRLfromFile(T) template bool dynamic_robot_localization::pointcloud_conversions::fromFile<T>(const std::string&, pcl::PointCloud<T>&);
PCL_INSTANTIATE(DRLfromFile, DRL_POINT_TYPES)
PCL_INSTANTIATE(DRLfromFile, DRL_DESCRIPTOR_TYPES)
#endif
// >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>   </template instantiations>  <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
