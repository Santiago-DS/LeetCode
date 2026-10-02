#include <vector>
#include <iostream>
#include <chrono>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;

        for(int b=0; b < prices.size(); b++) { 
            
            if(prices[b] < buy) { buy = prices[b]; } 
            else if(prices[b] - buy > profit) { profit = prices[b] - buy; }

        }

        return profit;
    }
};

int main(){
    Solution sol;
    vector<int> prices = {897,265,201,86,56,657,273,25,843,625,641,332,509,463,496,97,779,241,970,665,87,765,276,442,25,311,10,765,224,465,296,415,968,40,494,151,493,159,274,444,10,792,104,200,694,193,616,126,754,3,489,415,863,589,646,264,88,733,132,922,794,149,496,135,727,355,890,102,3,668,517,852,488,445,980,964,933,754,815,496,550,2,33,191,516,455,436,41,618,596,334,10,708,348,511,752,767,129,470,698,647,604,104,811,574,52,750,319,97,45,391,42,822,712,92,664,318,702,5,303,778,799,638,430,66,944,78,40,632,919,828,851,589,75,328,774,991,305,126,996,505,463,428,972,781,697,244,98,148,670,30,328,457,673,766,69,461,44,804,986,133,169,786,950,745,63,362,857,411,12,680,9,586,827,932,54,538,509,120,287,534,866,926,351,634,84};

    auto inicio = chrono::high_resolution_clock::now();
    int profit = sol.maxProfit(prices);
    auto fim = chrono::high_resolution_clock::now();
    auto duracao = chrono::duration_cast<chrono::microseconds>(fim - inicio).count();

    cout << profit << endl;
    cout << "Tempo: " << duracao << " us" << endl;

    return 0;
}