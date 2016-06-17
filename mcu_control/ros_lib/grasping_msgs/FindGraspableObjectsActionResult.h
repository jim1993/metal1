#ifndef _ROS_grasping_msgs_FindGraspableObjectsActionResult_h
#define _ROS_grasping_msgs_FindGraspableObjectsActionResult_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "grasping_msgs/FindGraspableObjectsResult.h"

namespace grasping_msgs
{

  class FindGraspableObjectsActionResult : public ros::Msg
  {
    public:
      std_msgs::Header header;
      actionlib_msgs::GoalStatus status;
      grasping_msgs::FindGraspableObjectsResult result;

    FindGraspableObjectsActionResult():
      header(),
      status(),
      result()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      offset += this->header.serialize(outbuffer + offset);
      offset += this->status.serialize(outbuffer + offset);
      offset += this->result.serialize(outbuffer + offset);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->status.deserialize(inbuffer + offset);
      offset += this->result.deserialize(inbuffer + offset);
     return offset;
    }

    const char * getType(){ return "grasping_msgs/FindGraspableObjectsActionResult"; };
    const char * getMD5(){ return "815c3872a35e011e303fdc6f38a6dc62"; };

  };

}
#endif