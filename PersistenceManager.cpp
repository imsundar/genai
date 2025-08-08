
struct PersistenceManager {
    static void saveExpenses(const vector<ExpenseNode>& expenses, const string& filename) {
        ofstream outFile(filename);
        if (!outFile) {
            cerr << "Error opening file for writing." << endl;
            return;
        }
        for (const auto& expense : expenses) {
            outFile << expense.category << "," << expense.description << "," << expense.amount << endl;
        }
        outFile.close();
    }    
};
