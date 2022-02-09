#ifndef __TRAINING_DATA_H
#define __TRAINING_DATA_H
#include<list>
#include "Trainee.h"
class TraineeCollection
{
    std::list<Trainee> trainees;  //vector/map
public:
    void addTrainee(int id, std::string name, double score);
    void removeTraineeById(int keyId);
    void displayAll();
    bool isTraineeFoundByKey(int keyId);
    Trainee* findTraineeByKey(int keyId);
    double computeAverageScore();
    double findMinScore();
    double findMaxScore();
    Trainee* findTraineeWithMinScore();
    Trainee* findTraineeWithMaxScore();
};

#endif
