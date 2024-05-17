#include <Rcpp.h>
using namespace Rcpp;
//' @title dummy cpp-function
//' @name hello_cpp
//' @param int_ an integer
//' @return /
//' @export
// [[Rcpp::export]]
void hello_cpp(int number) {
  std::cout << "hello world " << number << std::endl;
}
