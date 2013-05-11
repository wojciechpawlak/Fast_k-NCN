#pragma once

#include "Distance.h"
#include "SampleSet.h"
#include "Utility.h"

using namespace Utility;

namespace Common {

	DistanceValue countManhattanDistance(const Sample& train, const Sample& test, const int firstDim, const int lastDim);
	DistanceValue countEuclideanDistance(const Sample& train, const Sample& test, const int firstDim, const int lastDim);
	void countDistances(const SampleSet& trainSet, const Sample& testSample, Distance* distances);
	void countDistancesLeaveOneOut(SampleSet& sampleSet, Distance** distances);
}
