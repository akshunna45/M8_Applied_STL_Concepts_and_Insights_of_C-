#ifndef __TRAINING_DATA_H
#define __TRAINING_DATA_H
#include<list>
#include "Trainee.h"
class TraineeCollection
{
    std::list<Trainee> trainees;  //vector/map
public:
    void addTrainee(int id, std::string name);
    void removeTraineeById(int keyId);
    void displayAll();
    bool isTraineeFoundByKey(int keyId);
    Trainee* findTraineeByKey(int keyId);
    double computeAverageScore();
    double findMinScore();
    double findMaxScore();
    Trainee* findTraineeWithMinScore();
    Trainee* findTraineeWithMaxScore();

    double findMinScoreByModule(std::string mname);
    double findMaxScoreByModule(std::string mname);
    double countTraineesByScoreRange(double, double);
    double countTraineesClearedModule(std::string);
    
    int countTraineesBySkill(std::string skillname);
    int countTrainessWithLessSkills(int limit);
    double findMaxMeanScoreBySkill(std::string skillname);    

};
/*
Count no.of Trainees having certain skill
Count no.of Traineees whose skill count is less than certain limit
Compute max score of all Trainees having specific skill

Compute average score of all Trainees not having specific skill
Count no.of Trainees having either skill A or skill B, e.g. C++ or Java
Find all Trainees having certain skill
*/

/*
Find the min score in specific module
Find the max score in specific module
Count Trainees whose score falls in given range for specific module
Count Trainees, who have cleared the module (Score > Threshold)
*/
#endif
