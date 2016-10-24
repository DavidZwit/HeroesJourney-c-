#include "Group.h"
#include "Job.h"


int Group::Start(std::string PlayerName)
{
	SAYNAR("So you decided to do nothing, quite a lazy decision but it’s not mine. ");
	SAYNAR("You start up your computer out of boredom and got on with writing a script to hack into the massive database where all the consciousness of the public is held.");
	SAYNAR("Suddenly you get a weird pop up on your screen. It is a message from the guys you just got in contact with via the dark web.");
	SAYOTHER("Hacker: ", "We are starting a big project to get ourselves into the machines and control them to make people scared of them. This is the best way to stop people from using them. From deep inside.");
	SAYOTHER("Hacker: ", "We have been following you for a while now and you seemed like the perfect candidate to help us reach this goal.");
	SCHOICE("Joint them", "Decline offer");
	int choice = GINT;
	if (choice == 1){
		SAYOTHER("Hacker: ", "Fantastic. I'll face massage you in an hour");
	}
	else if (choice == 2){
		SAYOTHER("Hacker: ", "It is a shame that you have rejected our offer to make the world real again.");
		SAYNAR("Congrats. You chose the laziest options. You will do nothing to help so I will just end the story here.");
		Alter(PlayerName);
		return 0;
	}
	SCHOICE("Go there", "Don't go there");
	choice = GINT;

	if (choice == 1){
		SAYNAR("So when time passes on the group starts to trust you. You start getting more and more important jobs.");
	}
	else if (choice == 2){
		SAYNAR("Great now they are pissed that you did not come.  You try contacting them but they won’t react to your messages. You’ve really done it now.");
		Alter(PlayerName);
		return 0;
	}

	SAYNAR("Everything so far is going flawless. But there needs to be a link from the database to your IP address. You have to sneak into the building and bypass security to plant a device in their database servers. So you travel to the company disguised as an engineer.");
	SAYNAR("You need to get to the second floor but you don’t have access. Luckily there is a guy you know working there. You start a conversation with him. He asks you about what you think of the robots.");
	SCHOICE("You hate them", "You like them");
	choice = GINT;
	if (choice == 1) {
		SAYOTHER("Friend: ", "Oh, ok. I was going to show you the control room but if you don’t like them there is no reason to. ");
		SAYNAR("Great, now you have done it. The mission can’t go on because of you. You have failed the group. ");
		return 0;
	}
	else if (choice == 2){
		SAYOTHER("Friend: ", "Friend: Oh great! I was just about to go to the control room. I can show you how it works if you want to.");
	}

	SAYOTHER(PlayerName, "Ofcourse, why not");

	SAYNAR("You get inside the room and manage to install the device without your friend noticing. Once you have installed it, you say your goodbyes and go back to base.");
	SAYNAR("The day of execution is here and you guys are ready.");
	SAYOTHER("Hacker: ", "Ok we need to be prepared. Execution is in 10 minutes. PlayerName, are you ready to open the gate to their database? ");
	SAYOTHER(PlayerName, "Yes I am.");
	SAYOTHER("Hacker: ", "Ok…. Execute!!.");

	SAYNAR("Droids all around the world stopped responding to their users. They were out of their control. ");
	SAYNAR("Once everything was loaded we could reach droid nearly everywhere, though some were significantly more controllable than others.  there were also a lot of weird things going on which we needed to fix, before we could get total control. In the beginning we could only send them some of them data like sounds or images. It was fun tricking some droid users and making them scared, but this wasn’t a game. We needed to get serious.");
	SAYNAR("with our coders hard at work, we slowly were getting more and more control. A lot of facilities had one or a few weak users, which we could use to affect the other users. One by one they were getting errors and distortions until we had total control of a few, enough to overtake that facility. ");
	SAYNAR("The moment enough users were infected and under total control, we could hid one button and we had total control. There were a lot of hackers and each had their own method of getting control of these facilities. We decided to just shut down every user. Some others decided they wanted revenge and they made the droid tear each other down until there were none left…. ");
	SAYNAR("The operation went great and the impact was enormous.");
	SAYOTHER("Hacker: ", "Now we are one step closer to a world that is not filled with metal microwaves. ");
}

int Group::Alter(std::string PlayerName){
	Job jb;

	SAYNAR("You can still apply for the job. Do you want to do that?");
	SCHOICE("Yes", "No");
	int choice = GINT;
	if (choice == 1){
		SAYNAR("Ok great! You can start working.");
		jb.Start(PlayerName);
		return 0;
	}
	else if (choice == 2){
		SAYNAR("Well, if you don’t want to do anything with your life that is ok with me. I don’t care. I am just the Narrator.");
		return 0;
	}
}