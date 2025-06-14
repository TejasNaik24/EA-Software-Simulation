#ifndef GYM_SYSTEM_H
#define GYM_SYSTEM_H

#include <string>

class Strength {
private:
    int reps;
    double time;

public:
    Strength();
    void testStrength();
    int getReps() const;
    void setReps(int r);
    double getTime() const;
    void setTime(double t);
};

class Endurance {
private:
    double time;
    int position;

public:
    Endurance();
    void runRace();
    double getTime() const;
    void setTime(double t);
    int getPosition() const;
    void setPosition(int p);
};

class Speed {
private:
    int lives;
    double time;

public:
    Speed();
    void dodgeObstacles();
    int getLives() const;
    void setLives(int l);
    double getTime() const;
    void setTime(double t);
};

class Balance {
private:
    double time;
    bool fellOff;

public:
    Balance();
    void balanceBeam();
    double getTime() const;
    void setTime(double t);
    bool hasFallen() const;
    void setFallen(bool fall);
};

class Gym {
private:
    Strength* strength;
    Endurance* endurance;
    Speed* speed;
    Balance* balance;

public:
    Gym(Strength* s, Endurance* e, Speed* spd, Balance* b);
    void trainStrength();
    void trainEndurance();
    void trainSpeed();
    void trainBalance();
};

#endif // GYM_SYSTEM_H
