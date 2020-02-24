#include <Rcpp.h>
using namespace Rcpp;

// tally -- wrap the tally C function

// [[Rcpp::export]]
DataFrame tally(CharacterVector filename) {
  NumericVector v1 = {1,2,3};
  return(DataFrame::create(Named("Alpha") = v1));
}
