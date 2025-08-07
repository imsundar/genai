#include <User.h>

int main(){
    User alex_("Alex"); 
    
    alex_.addUserExpense("bills", "internet subscription", 900); 
    alex_.addUserExpense("bills", "dish tv", 350); 
    alex_.addUserExpense("bills", "Electricity", 3000); 
    alex_.addUserExpense("shopping", "amazon purchase", 1000); 
    
    alex_.getTotalUserExpense(); 
    alex_.printSpecificUserExpenseDetails("bills");    
    
}
