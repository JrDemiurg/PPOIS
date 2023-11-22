#include "pch.h"
#include "CppUnitTest.h"
#include "../Project2/AbstractExercise.h"
#include "../Project2/BarbellSquatst.h"
#include "../Project2/BenchPress.h"
#include "../Project2/Client.h"
#include "../Project2/Gym.h"
#include "../Project2/MonthlyMemberShip.h"
#include "../Project2/OneTimeMemberShip.h"
#include "../Project2/SportClub.h"
#include "../Project2/WeeklyMemberShip.h"
#include "../Project2/Worker.h"
#include "../Project2/Human.h"
#include "../Project2/IMemberShip.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Project2Test
{
	TEST_CLASS(Project2Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			SportClub hardgym("hard gym");
			Gym adrenalin("adrenalin", "here", 5);
			Gym r1("r1", "here", 15);
			hardgym.addGym(&adrenalin);
			hardgym.addGym(&r1);
			hardgym.countEarnings();
			hardgym.countNumberOfGyms();
			Assert::IsTrue(hardgym.getEarnings() == 20);
			Assert::IsTrue(hardgym.getName() == "hard gym");
			Assert::IsTrue(hardgym.getNumberOfGyms() == 2);
			Assert::IsTrue(r1.getAddress() == "here");
			Worker Jeck("Jeck", 1, 100, 10, 5);
			r1.addWorker(&Jeck);
			r1.giveSalary();
			Client Rick("Rick", 2, 150);
			Rick.buyLessonWithTrainer(r1, Jeck);
			Jeck.setSalary(100);
			Jeck.setNumberOfWorkingDays(6);
			Assert::IsTrue(Jeck.getNumberOfWorkingDays() == 6);
			Assert::IsTrue(Jeck.getSalary() == 100);
			Assert::IsTrue(Jeck.getbalance() == 150);
			BenchPress benchpress(10,50);
			Rick.doExercise(&benchpress);
			BarbellSquats barbellsquats(15,100);
			Rick.doExercise(&barbellsquats);
			Assert::IsTrue(Rick.getbalance() == 100);
			Assert::IsTrue(Rick.getHumanID() == 2);
			Assert::IsTrue(Rick.getName() == "Rick");
			Rick.visitGym(r1);
			Rick.visitGym(r1);
			Assert::IsTrue(r1.getNumberOfVisits() == 2);
			OneTimeMemberShip card(r1, Rick, 50, "22.11.2023");
			Assert::IsTrue(card.check("Rick"));
		}
	};
}
