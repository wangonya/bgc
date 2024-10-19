struct animal
{
    char *name;
    int leg_count, speed;
};

//  original name      new name
//            |         |
//            v         v
//      |-----------| |----|
typedef struct animal animal;

struct animal y; // This works
animal z;        // This also works because "animal" is an alias

//  original name
//            |
//            v
//      |-----------|
typedef struct animal
{
    char *name;
    int leg_count, speed;
} animal; // <-- new name

struct animal y; // This works
animal z;        // This also works because "animal" is an alias

//  Anonymous struct! It has no name!
//         |
//         v
//      |----|
typedef struct
{
    char *name;
    int leg_count, speed;
} animal; // <-- new name

// struct animal y;  // ERROR: this no longer works--no such struct!
animal z; // This works because "animal" is an alias

typedef float app_float;

// and

app_float f1, f2, f3;
// Then if later you want to change to another type, like long double, you just need to change the typedef:

//        voila!
//      |---------|
typedef long double app_float;

// and no need to change this line:

app_float f1, f2, f3; // Now these are all long doubles