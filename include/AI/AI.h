/*********************************************
                Created by Xiaobo
		   Feb 26 2016

*********************************************/

#ifndef AI_NODE_XIAOBO
#define AI_NODE_XIAOBO

//ros include
#include <ros/ros.h>
#include <ros/time.h>

//Custom message include
#include "myImproc/BasicItem.h"
#include "myImproc/YOLO.h"

class AI
{
public :
  AI();
 ~AI();
  
 //void yoloCallback(const myImproc::YOLO::ConstrPtr &msg);

private:
 myImproc::YOLO yolo_received_msg;

};
#endif

