#include "person.h"

person::person()
{

}
QString person::GETfirst_name(){
    return first_name;
}
QString person::GETlast_name(){
    return last_name;
}
QString person::GETskills(){
    return skills;
}

void person::SETfirst_name(QString firstname ){
    first_name=firstname;
}
void person::SETlast_name(QString lastname){
    last_name=lastname;
}
void person::SETskills(QString skill){
    skills=skill;
}
