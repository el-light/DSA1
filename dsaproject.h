//Header File
//Here we will define all required for the project functions 


#ifndef DSAPROJECT_H
#define DSAPROJECT_H

struct elector{
    char name[100];
    long cin_num; 
    int choice; 
    struct elector *next; 
};

typedef struct elector *T_Elector; 

T_Elector creationelector(void);
void displaylist(T_Elector);
void addelector(T_Elector *, char [], long, int );
int countelector(T_Elector);
int findelector(T_Elector, long);
void deletelector(T_Elector *,long);
void decomposelist(T_Elector,T_Elector *,T_Elector *,T_Elector*);
void sortlist(T_Elector );
T_Elector mergelists(T_Elector, T_Elector);
int countLR(T_Elector);





#endif