#include <Rcpp.h>
using namespace Rcpp;

// minion -- wrap the minion C function

// [[Rcpp::export]]
DataFrame minion(CharacterVector filename) {
  NumericVector v1 = {1,2,3};
  return(DataFrame::create(Named("Alpha") = v1));
}
