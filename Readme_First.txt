1.Name:	TripleX
2.Developer: Debdip Banerjee
3.Date: 25th May,2019
4.Type:	Numerical Based Puzzle Game

5.Requirements:
		Windows:  
			1.Please Use Visual Studio Community 2018 Or Higher
			2.Main.cpp ,add this File Under Same Project
			3.Run From Main.cpp
			4.If You Use Dev Cpp or Code::Blocks Please Change Unreal Standards
				Or For Sake of Simplicity, Just Use VS Community 2018 Or Higher
		
		   Mac:
			1.Please Use XCODE
			2.Main.cpp ,add this File Under Same Project
			3.Run From Main.cpp
			4.If You Use Dev Cpp or Code::Blocks Please Change Unreal Standards
6.Concept:
		This a Story Based Game where you need to solve Numericals and Win
		You Need to find 3 numbers based on 2 given Hints
		if You find those 3 numbers correcty you will go to next level
		if you can't find 3  numbers and did wrong once you will Fail & GAME OVER
		
		Numbers are RANDOMLY GENEREATED by using RAND() & SRAND() Function based on 
		Current Time Of the Day.
		
		Max level & Current Level can be Changed by Programmer
		By every Right answer Level Will Go higher And Difficulty will Rise.

7.Rules:	1.Player needs to input 3 numbers, if they give any less game will not go furthur
		2.Partial Right answer wont be accepted
			ex.
				You're in LEVEL 2
			1.Guess the 3 numbers whose product is 150
			2.Guess the 3 numbers whose sum is  16
			enter 3 Numbers
			2 5 15
			Numbers are 2 5 15
			You Failed Miserably & Died Horribly

		This is wrong because (2*5*15) = 150 so Condition 1 is Vaid for these Numbers
		But (2+5+15) = 22 != 16	Condition 2 Is Not Valid for These Numbers.
		right Answer will be
		5 5 6
		(5*5*6) = 150	= Condition 1
		(5+5+6) =16	= Condition 2

		3.For Play Again Press Y Or N
		Anything Other Than Y Or N Won't Be accepted

		4.if You find those 3 numbers correcty you will go to next level
		if you can't find 3  numbers and did wrong once you will Fail & GAME OVER
		

8.Test Cases:	
		You're in LEVEL 1
	1.Guess the 3 numbers whose product is 18
	2.Guess the 3 numbers whose sum is 8
	enter 3 Numbers
	2 3 3
	Numbers are 233
	Cheers,You're going to Next level

	You're in LEVEL 2
	1.Guess the 3 numbers whose product is 96
	2.Guess the 3 numbers whose sum is 14
	enter 3 Numbers
	4 4 6
	Numbers are 446
	Cheers,You're going to Next level

	You're in LEVEL 3
	1.Guess the 3 numbers whose product is 441
	2.Guess the 3 numbers whose sum is 23
	enter 3 Numbers
	9 7 7
	Numbers are 977
	Cheers,You're going to Next level
	
	You're in LEVEL 4
	1.Guess the 3 numbers whose product is 1100
	2.Guess the 3 numbers whose sum is 31
	enter 3 Numbers
	11 11 10
	Numbers are 111110
	You Failed Miserably & Died Horribly

9.Inspiration: Got This Idea During C++ Course By GameDev.Tv

10.Acknowledgement: Thanks a Lot to Ben Triestem & Gavin Milroy, instructors From GameDev.Tv

11.Personal Info:	
		I,Debdip Banerjee am A Computer Science Undergrad At the Time Of making this Game.
		I am Also A Game Programmer,Software Engineer,Technical Animator and Entreprenuer.
		If Anyone Wants to use Any part Of My Source Code They can.
		I am Not responsible for Any Furthur use of my Code at any Work.
		if anyone want to make any improvement they can,
		if You want to contact me,Details are Below.

12.Contact Info:
		Email: Debdipbanerjee7@gmail.com
		Whatsapp Number: 9007480046
		Contact Number: +91-9007480046
		LinkedIn Id: www.linkedin.com/in/debdip-banerjee-07
		Facebook Id: http://facebook.com/Debdipbanerjee23