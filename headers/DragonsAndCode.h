class Entity
{
protected:

public:
string Name;
//Entity Name
int Health;
//Health
int Mana;
//For casting magic
int Armor;
//Reduces incoming damage by this amount
int Shield;
//Takes damage before health
int ShieldArmor
//Reduces damage delt to shield
int BaseAttack;
//basic damage delt

bool Dead;
//alive or dead
};

class Player : public Entity(string,int,int,int,int,int,int,bool)
{
private:

public:
int CurrentLevel;
//player currrent level
double CurrentXP;
//current total XP
double NextLevel;
//the XP value for when the player levels up next
double XpModifer;
//Difficulty  of the game and how fast the player levels up

int lives;
//how many times the player can die before "Game Over"
};

class Enemy : public Entity(string,int,int,int,int,int,int,int,bool)
{
double XPValue;
//how much XP enemies are worth
int LootDrop;
};

class UndeadEnemy : public Entity(string,int,int,int,int,int,int,int,bool)
{

};

class Boss : public Entity(string,int,int,int,int,int,int,int,bool)
{

};