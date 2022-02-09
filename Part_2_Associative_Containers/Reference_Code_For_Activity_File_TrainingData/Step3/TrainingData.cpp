#include "Trainee.h"

void TrainingData::addTrainee(int id, std::string name)
{
    trainees.push_back( Trainee(id,name) );
    //trainees.emplace_back(id,name);
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
        total += iter->computeAverageScore();
    return total/trainees.size();
}
double TrainingData::findMaxScore() 
{
    double maxScore=0;
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(iter->getScore() > maxScore)
           maxScore = iter->computeAverageScore();
    return maxScore;
}
double TrainingData::findMinScore() 
{
    double minScore=INT_MAX;    //or score of first object
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(iter->getScore() < minScore)
           minScore = iter->computeAverageScore();
    return minScore;
}
double TrainingData::findMinScoreByModule(std::string mkey)
{
    double minScore=INT_MAX;    //or score of first object
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(iter->getScore() < minScore)
           minScore = iter->getScoreByModule(mkey);
    return minScore;
}
double TrainingData::findMaxScoreByModule(std::string mname)
{
    double maxScore=0;
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(iter->getScore() > maxScore)
           maxScore = iter->getScoreByModule(mkey);
    return maxScore;
}
double TrainingData::countTraineesByScoreRange(double pmin, double pmax)
{
    int count=0;
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(iter->computeAverageScore() >=pmin && iter->computeAverafeScore() <=pmax)
            count++;
    return count;
}
double TrainingData::countTraineesClearedModule(std::string mkey)
{
    int count=0;
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
       if(iter->getScoreByModule(mkey) > 60)
            count++;
    return count;
}
int TrainingData::countTraineesBySkill(std::string skillname)
{
    int count=0;
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(iter->isSKillAvailable(skillname))
            count++;
    return count;
}
int TrainingData::countTrainessWithLessSkills(int limit)
{
    int count=0;
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(iter->countSkills()<limit)
            count++;
    return count;
}
double TrainingData::findMaxMeanScoreBySkill(std::string skillname)
{
    int maxScore=0;
    std::list<Trainee>::iterator iter;
    for(iter=trainees.begin(); iter!=trainees.end(); ++iter)
        if(iter->isSkillPresent(skillname) && iter->computeAverageScore() > maxScore)
            maxScore = iter->computeAverageScore();
    return maxScore;
}
    
    
