#include <iostream>
#include <vector>

using namespace std; 

struct ExpenseNode{
    string category;
    string description;
    float amount; 
};

class ExpenseManager{
    vector<ExpenseNode> expenseList {};     
    
    public:    
    ExpenseManager(){
        expenseList = {}; 
    }

    void addExpense(string category, string description, float amount) {
        ExpenseNode expenseNode {category, description, amount}; 
        expenseList.push_back(expenseNode);        
    }    
    
    float calculateTotalExpense() {
        float total = 0.0; 
        for(auto expense : expenseList){
            total += expense.amount;
        }
        return total; 
    }
    
    void printSpecificExpensesDetails(string category) { 
        float categoryTotal = 0.0; 
        for(auto expense : expenseList){
            if(expense.category == category){
                cout << category << " - " << expense.description << " - " << expense.amount << endl; 
                categoryTotal += expense.amount; 
            }
        }
        
        cout << "category " << category << " total amount is : " << categoryTotal << endl;  
    }
};
