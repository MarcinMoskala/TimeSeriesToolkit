#include "stdafx.h"
#include "CppUnitTest.h"
#include "DataPoint.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TimeSeriesToolkit
{		
	TEST_CLASS(DataPoint_tests)
	{
	public:
		
		TEST_METHOD(There_is_instance_of_DataPoint)
		{
			DataPoint();
		}
	};
}