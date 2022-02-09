#include "Trainee.h"
#include "TrainingData.h"

void TrainingData::addTrainee(int id, std::string name, double score)
{
    trainees.push_back( Trainee(id,name,score) );
    //trainees.emplace_back(id,name,score);
}
void TrainingData::displayAll()
{
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        iter->display();        //std::cout << *iter
}
bool TrainingData::isTraineeFoundByKey(int key)
{
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(key==iter->getId()) break;
    if(iter!=trainees.end())
        return true;
    else        //iter == trainees.end()
        return false;
}
Trainee* TrainingData::findTraineeByKey(int key)
{
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(key==iter->getId()) break;
    if(iter!=trainees.end())
        return &(*iter);
    else
        return nullptr;
}
void TrainingData::removeTraineeById(int key)
{
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(key==iter->getId()) break;
    if(iter!=trainees.end())
        trainees.erase(iter);  
}
double TrainingData::computeAverageScore()
{
    double total=0;
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        total += iter->getScore();
    return total/trainees.size();
}
double TrainingData::findMaxScore() 
{
    double maxScore=0;
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(iter->getScore() > maxScore)
           maxScore = iter->getScore();
    return maxScore;
}
double TrainingData::findMinScore() 
{
    double minScore=INT_MAX;    //or score of first object
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(iter->getScore() < minScore)
           minScore = iter->getScore();
    return minScore;
}