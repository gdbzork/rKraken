#include <Rcpp.h>
using namespace Rcpp;

// reaper -- wrap the reaper C function

// [[Rcpp::export]]
DataFrame reaper(CharacterVector filename) {
  NumericVector v1 = {4,5,6};
  return(DataFrame::create(Named("Bravo") = v1));
}
