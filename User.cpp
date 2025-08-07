#include <iostream>
#include "ExpenseManager.h" 

using namespace std; 

class User{
    string name; 
    ExpenseManager* exMgr; 
    
    public:
    User(string name){
        this->name = name; 
        exMgr = new ExpenseManager(); 
    }
    
    public: 
    void addUserExpense(string category, string description, float amount){
        exMgr->addExpense(category, description, amount);
    }
    void getTotalUserExpense(){
        cout << "Total expense made by user - " << this->name << " : " << exMgr->calculateTotalExpense() << endl; 
    }
    void printSpecificUserExpenseDetails(string category) { 
        cout << "\n*********************************\n";
        exMgr->printSpecificExpensesDetails(category); 
    }
    
    ~User(){
        delete exMgr; 
    }
}; 
