#include <Rcpp.h>
//' @title dummy cpp-function
//' @name hello_cpp
//' @param number a number
//' @return /
//' @export
// [[Rcpp::export]]
void hello_cpp(int number) {
  std::cout << "hello world " << number << std::endl;
}
