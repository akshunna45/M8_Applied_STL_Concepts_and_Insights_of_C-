#include "Trainee.h"
#include<algorithm>

void TrainingData::addTrainee(int id, std::string name, double score)
{
    //trainees.push_back( Trainee(id,name,score) );
    trainees.emplace_back(id,name,score);
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
    iter=std::find_if(trainees.begin(), trainees.end(), [key](Traineee& ref) {
        return key==ref.getId();
    });
    if(iter!=trainees.end())
        return true;
    else        //iter == trainees.end()
        return false;
}
Trainee* TrainingData::findTraineeByKey(int key)
{
    std::list<Trainee>::iterator iter;
    iter=std::find_if(trainees.begin(), trainees.end(), [key](Traineee& ref) {
        return key==ref.getId();
    });
    if(iter!=trainees.end())
        return &(*iter);
    else
        return nullptr;
}
void TrainingData::removeTraineeById(int key)
{
    std::list<Trainee>::iterator iter;
    iter=std::remove_if(trainees.begin(), trainees.end(), [key](Traineee& ref) {
        return key==ref.getId();
    }); 
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
    std::list<Trainee>::iterator iter;
    iter=std::max_elment(trainees.begin(), trainees.end());
    return iter->getScore();
}
double TrainingData::findMinScore() 
{
    std::list<Trainee>::iterator iter;
    iter=std::min_elment(trainees.begin(), trainees.end());
    return iter->getScore();
}
Trainee& TrainingData::findTraineeWithMinScore()
{
    std::list<Trainee>::iterator iter;
    iter=std::min_elment(trainees.begin(), trainees.end());
    return *iter;

}
Trainee& TrainingData::findTraineeWithMaxScore()
{
    std::list<Trainee>::iterator iter;
    iter=std::max_elment(trainees.begin(), trainees.end());
    return *iter;

}

