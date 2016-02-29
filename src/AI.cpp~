#include"AI.h"
int AI::id = 0;

AI::AI(myImproc::YOLO &yolo_msg)
{
 yolo_received_msg = yolo_msg;
}

 AI::~AI()
{

}

void AI::yoloCallback(const myImproc::YOLO::ConstPtr &msg)
{
  for(int i=0;i<msg->items.size();i++)
  {
 	const myImproc::BasicItem &data = msg->items[i];
 	printf("AI %f\n %d",data.object_score,id++);
        printf("AI %s\n ",data.object_name.c_str());
	printf("AI %d\n ",data.left);
  }

 
}
