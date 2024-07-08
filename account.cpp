#include "account.h"

Account::Account()
{

}
QString Account::GETaccount_id() {
    return account_id;
}
int Account::GETphone_number(){
    return phone_number;
}
QString Account::GETemail(){
    return email;
}

void Account::SETaccount_id(QString id){
    account_id=id;
}
void Account::SETphone_number(int num){
    phone_number=num;
}
void Account::SETemail(QString mail){
    email=mail;
}
void Account::SETpassword(QString pass){
    password=pass;
}
