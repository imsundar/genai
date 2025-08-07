#include <User.h>

int main(){
    User sundar_("Sundar"); 
    
    sundar_.addUserExpense("bills", "internet bill", 900); 
    sundar_.addUserExpense("bills", "dish tv bill", 350); 
    sundar_.addUserExpense("bills", "Electricity", 3000); 
    sundar_.addUserExpense("online", "flipkart purchase", 1000); 
    
    sundar_.getTotalUserExpense(); 
    sundar_.printSpecificUserExpenseDetails("bills");    
    
}
