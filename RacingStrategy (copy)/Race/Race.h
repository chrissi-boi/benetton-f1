#ifndef RACE_H
#define RACE_H
#include <vector>
#include <string>
#include "RaceResults.h"
#include "Times.h"
#include "../Container/ContainerSet.h"
#include "../Strategy/RacingStrategy.h"
#include "../Tyres/Tyre.h"
#include "../Strategy/RacingStrategyInterface.h"

class Race
{

private:
	Times* times;
	ResultOriginator* resultOriginator;
	RacingStrategy* raceStrategy;
	RacingStrategyInterface* racingStrategyInterface;
	Track* track;
	ContainerSet* containerSet;
	std::vector<RaceResults> results;

public:
	///Create the rac with the necessary parameters to run the race
	Race(RacingStrategy* RacingStrategy, Track* Track);
	///Break up the container given by the Strategy so that our car can be generated for the race
	///@param c The container which is going to be turned into a vector of parts from which our car will be built
	std::vector<Part*> breakContainerParts(ContainerSet* c);
	std::vector<Tyre*> breakContainerTyres(ContainerSet* c);
	void generateResults();
};

#endif