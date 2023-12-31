﻿#include "pch.h"
#include "CppUnitTest.h"
#include "..\Project1\Cube.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CubeTest
{
	TEST_CLASS(CubeTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Cube cube;
			cube.show();
			cube.turn(4);
			cube.turn(1);
			cube.write(cube);
			std::istringstream input("1\n");
			std::streambuf* oldCin = std::cin.rdbuf();
			std::cin.rdbuf(input.rdbuf());
			cube.read(cube, "..\x64\Debug\save.txt");
			cube.turn(11);
			cube.turn(44);
			cube.turn(33);
			cube.turn(3);
			Assert::IsTrue(cube.isComplited());
		}
		TEST_METHOD(TestMethod2)
		{
			Cube cube;
			cube.randomTurns();
			Assert::IsFalse(cube.isComplited());
		}
	};
}
