#include <string>
#include "FastWrite.h"
#include "Choices.h"
#include "Group.h"
#include "Job.h"

#define SAY(x, y) std::cout << x << ": " << y << std::endl;

int main(){
	Begin TC;
	Group GR;
	Job Jobs;

	int s;
	system("COLOR 70");

	SAY("OP", "Go to next with enter!!!")
	SAYNAR(" In a world where mankind hid themselfes in a robotic body, never to be seen naturally again by anyone but their closes friends or family.");
	SAYNAR("There was a group that refused to hide themselfes, they chose not to live a safe life trapped inside a robot.");
	SAYNAR("Before i continue the story, please tell me youre name: ");

	std::string playerName = GSTRING;
	
	SAYFOUR("Narrator ", " So you are ", playerName, ", and you are about to meet this group i was talking about.");
	SCHOICE("Know more about this group", "Continue on");
	
	int choice = GINT;
	if (choice == 1) { 
		TC.oneOne();
	}
	else if (choice == 2) {
		TC.oneTwo();
		return 0;
	}

	SAYNAR(playerName, " went to sleep");
	SAYNAR("You wake up at 8:00. You have an job interview at 9:30 at MineCrop. This is a mining facility in Central Africa which searches for Dubnium underground.");
	SAYNAR("This element is used to make remote controlled robots.");
	SCHOICE("Attent the job interview", "Dont attent the job interview");

	choice = GINT;

	if (choice == 1){
		Jobs.Start(playerName);
	}
	else if (choice == 2){
		GR.Start(playerName);
	}
	
	return 0;
}