/*********************************************
                Created by Xiaobo
		   Feb 26 2016

********************************************/

#ifndef AI_NODE_XIAOBO
#define AI_NODE_XIAOBO

//ros include
#include <ros/ros.h>
#include <ros/time.h>

//Custom message include
#include "myImproc/BasicItem.h"
#include "myImproc/YOLO.h"


#include <stdlib.h>
#include <stdio.h>


class AI
{
public :
  AI(myImproc::YOLO &yolo_received_msg);
 ~AI();
  static int id;
 void yoloCallback(const myImproc::YOLO::ConstPtr &msg);

private:
 myImproc::YOLO yolo_received_msg;

};
//int AI::id = 0; can not define here that would cause multiple defintion ofAI::id

#endif

