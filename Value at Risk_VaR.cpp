#include <vector>
#include <algorithm>
#include <cmath>

double calculateVaR(const std::vector<double>& returns, double confidenceLevel) {
    std::vector<double> sortedReturns = returns;
    std::sort(sortedReturns.begin(), sortedReturns.end());
    int index = static_cast<int>((1 - confidenceLevel) * sortedReturns.size());
    return -sortedReturns[index];
}