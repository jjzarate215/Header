//
// Created by Marina  Zhdanova  on 5/27/23.
//

#ifndef UNTITLED3_HEADERFILE_HPP
#define UNTITLED3_HEADERFILE_HPP

#include <string>

class SimSports {
public:
    virtual void engage() = 0; // Pure virtual function for polymorphism
    virtual void pick_sport() = 0;
    virtual void guide() = 0;

};

class SportClub : public SimSports {
public:

    void engage() override;
};

class OlympicAthlete : public SimSports {
public:
    void pick_sport() override;

};

class Trainer : public SimSports {
public:
    void guide() override;

};

class Swimming : public OlympicAthlete {
public:
    void pick_sport() override;
};

class Gymnastic : public OlympicAthlete {
public:
    void pick_sport() override;
};

class Skiing : public OlympicAthlete {
public:
    void pick_sport() override;
};

class IceSkating : public OlympicAthlete {
public:
    void pick_sport() override;
};

class Enroll_in_Sport : public SportClub {
public:
    void engage() override;
};

class Participate_in_training : public SportClub {
public:
    void engage() override;
};

class OlympicCompetition : public SportClub {
public:
    void engage() override;
};

class TrainAthletes : public Trainer{
public:
    void guide() override;
};
class Mentor : public Trainer{
public:
    void guide() override;
};
class PerformStrategy : public Trainer{
public:
    void guide() override;
};
#endif //UNTITLED3_HEADERFILE_HPP
