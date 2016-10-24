#include "Job.h"
#include "Group.h"


int Job::Start(std::string PlayerName)
{
	Group GP;

	SAYTHREE("Interviewer: ", "So your name is", PlayerName);
	SCHOICE("Yes", "No");
	int choice = GINT;

	if (choice == 1){
		SAYOTHER("Interviewer", "Ok good");
	}
	else if (choice == 2){
		SAYOTHER("Interviewer", "oh thats weird... It says here you filled this name yourself some time ago... Well never mind its not that important for now.")
	}

	SAYOTHER("Interviewer", "You do have a working Androbed? Right?");
	SCHOICE("Yes", "No");
	choice = GINT;

	if (choice == 1) {
		SAYOTHER("Interviewer", "Okay that is also good. Would be weird if you made an appointment here without having an Androbed, but you never know, some people... Right?");
		SAYOTHER(PlayerName, "...");
	}
	else if (choice == 2) {
		SAYOTHER("Interviewer: ", "okay, thats unfortunate. Ehm I am afraid I have to cancel this meeting. Please contact us again if you have a working Androbed.");
		SAYNAR("The call comes to an abrupt end. You feel disappointed and decide to do something else to get some distraction.");
		GP.Start(PlayerName);
		return 0;
	}

	SAYOTHER("Interviewer: ", "Okay. So I think you are just the right person for this job. We will contact you tomorrow with the username and password for your Androbed.");
	SAYOTHER("Interviewer: ", "Good luck and welcome to Minecorp central Africa.");
	
	SAYOTHER(PlayerName, "Thank you very much, I will..,");

	SAYNAR("The call ends before you could finish your sentence.");
	SAYNAR("Next day you receive the username and password for your Androbed.");

	SAYOTHER("Computer", "Do you want to login?");
	SCHOICE("Yes", "No");
	choice = GINT;

	if (choice == 2) {
		SAYNAR("You decide not to log in and go on doing something else...");
		GP.Start(PlayerName);
		return 0;
	}
	else if (choice == 1){
		SAYNAR("You login to the system and lie down. You connect yourself to the Androbed. You feel dizzy for a moment and slowly lose the feeling of your body...");
	}

	SAYNAR("You wake up in some facility. You need some time to get a clear vision of the room you are in. It is barely lit and looks like it has seen better times. There are some machines in front of you which look quite expensive but also appear to be in a poor state of condition.");
	SAYNAR("When you try to get up you get a reminder of your body state. You feel some vague feeling of your feet when you set a step to the middle of the room. It is the feeling of your robotic feet trying to simulate the feeling of your natural feet.");
	SAYNAR("It has been some time since you had a job like this. You need some time getting used to this mechanical body. It is weird thought that your own body was lying there deep underwater in your bunker, which you call home. While your mind is here inside of this robot, also deep underground at some mining facility. At this moment you could do anything, swim under water without the need of any oxygen or jumping off a cliff and surviving the fall. The only thing that could happen is the robot getting a scratch and you would probably get fired for damaging their equipment.");
	SAYNAR("Before you could finish your thought, the ground starts shaking and you hear several metal things falling to the ground. Luckily your robot body doesnt have much trouble standing up during the shaking. You remembered how much of a pain in the ass it was to get this metal body back on its feet once you fell over. You grab the nearest pipe to keep your balance and wait for what seemed like an earthquake to pass.");
	SAYNAR("After some time the earthquake stopped. You remember the news about mines in Africa that have caused earthquakes in a large areas around the mines. At the time the media showed a video clip of a city with collapsed buildings with people still inside them…");

	SAYOTHER(PlayerName, "Ok, no time to think about this now… I have already accepted this job, and it is high time to get to work. ");

	SAYNAR("A few hours later you have settled in in your new job. There are a few other remote controlled robots here, but other than that this mine is quite empty and lonely. The droid didn’t have much to talk about and you have the expression that most of them don’t want to be here.");
	SAYNAR("One of the droid seemed out of his mind. He talked about distortion, hateful voices and even vague vision of demons. He also got knocked out of his connection with his droid, when he woke up in his body inside the Androbed, he was unable to move or do anything. After some minutes the droid suddenly restored the connection and his senses got pulled back to the mine. A colleague found him writhing around, and he had to reset the droid for it to work properly again.");
	SAYNAR("You continued your work, which existed of controlling other mining droid to certain coordinates underground, these coordinates have been estimated to contain the precious Dubnium. This resource is used for building the robots which you are using as body right now. When you arrived at your destination you need to get out of the droid and use your mining glove to precisely search for Dubnium. Tedious and dangerous work were it not for your super strong and nearly indestructible body.");
	SAYNAR("A few days passed. Every day when he got back to his own body it was dehydrated and he had a headache. The work situations were a lot better last time you used the Androbed. Now we nearly get no breaks to take care of our bodies. You think about quitting but you need the money and your contract last till the end of this month.");
	SAYNAR("A few weeks pass…");
	SAYNAR("while working you suddenly get slight distortions.");

	SAYOTHER(PlayerName, "Damn, am I going crazy? I might get into trouble but maybe a short break will get me back on track, although they don’t like quitters here.");
	SCHOICE("Take a break", "Continue working");
	choice = GINT;

	if (choice == 1) {
		SAYNAR("You take a few steps before feeling dizzy. ");
	}
	else if (choice == 2) {
		SAYNAR("You continue working, but your condition only starts getting worse. You start to feel dizzy.");
	}

	SAYOTHER(PlayerName, "Shit! Maybe I am losing connection like that other droid, I need to do something quick!. ");

	SAYNAR("Suddenly you hear a voice screaming: YOU!");
	SAYNAR("MURDERER!");
	SAYNAR("I HATE YOU!");
	SAYNAR("WHY?!");
	SAYNAR("IT WAS YOUR CHOICE!");
	SAYNAR("YOU DID THIS!");
	SAYNAR("…");
	SAYNAR("ERROR 913.");
	SAYNAR("  ");
	SAYNAR("SUDDENLY YOU WAKE UP.");
	SAYNAR("SUDDENLY YOU WAKE UP and GRAP THE NEAREST MINING GLOVE.");
	SAYNAR("SUDDENLY YOU WAKE UP and GRAP THE NEAREST MINING GLOVE and CALL YOUR NEAREST COLLEAGUE.");
	SAYNAR("Your colleague accept your call.");

	SAYOTHER(PlayerName, "WHERE ARE YOU!?");

	SAYOTHER("Colleague: ", "whoa, ehm, I am at sector 13 near the first shaft. Whats going on---");

	SAYNAR("You ended the call.");
	SAYNAR("Later you arrive at sector 13, the moment you see your colleague you sprint at him with superspeed and before he can react you smash his head on a rock. ");
	SAYNAR("This causes an alarm to go off. You flee away trying to get out of the mine. On your way you meet a few more unlucky Colleagues. When you get near the exit you see the colleague that was talking about his visions and voices. The moment you looked in his eyes you feel overwhelmed and you feel even less in control than before.");

	SAYOTHER("Colleague: ", "YOU ARE MINE NOW!");

	return 0;
}

