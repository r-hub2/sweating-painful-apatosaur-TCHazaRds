// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// RdistPi
NumericMatrix RdistPi(float Gridlon, float Gridlat, NumericVector TClon, NumericVector TClat);
RcppExport SEXP _TCHazaRds_RdistPi(SEXP GridlonSEXP, SEXP GridlatSEXP, SEXP TClonSEXP, SEXP TClatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type Gridlon(GridlonSEXP);
    Rcpp::traits::input_parameter< float >::type Gridlat(GridlatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type TClon(TClonSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type TClat(TClatSEXP);
    rcpp_result_gen = Rcpp::wrap(RdistPi(Gridlon, Gridlat, TClon, TClat));
    return rcpp_result_gen;
END_RCPP
}
// JelesnianskiWindProfilePi
NumericMatrix JelesnianskiWindProfilePi(NumericVector f, NumericVector vMax, NumericVector rMax, NumericVector R);
RcppExport SEXP _TCHazaRds_JelesnianskiWindProfilePi(SEXP fSEXP, SEXP vMaxSEXP, SEXP rMaxSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(JelesnianskiWindProfilePi(f, vMax, rMax, R));
    return rcpp_result_gen;
END_RCPP
}
// RankineWindProfilePi
NumericMatrix RankineWindProfilePi(NumericVector f, NumericVector vMax, NumericVector rMax, NumericVector R);
RcppExport SEXP _TCHazaRds_RankineWindProfilePi(SEXP fSEXP, SEXP vMaxSEXP, SEXP rMaxSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(RankineWindProfilePi(f, vMax, rMax, R));
    return rcpp_result_gen;
END_RCPP
}
// HollandWindProfilePi
NumericMatrix HollandWindProfilePi(NumericVector f, NumericVector vMax, NumericVector rMax, NumericVector dP, float rho, NumericVector beta, NumericVector R);
RcppExport SEXP _TCHazaRds_HollandWindProfilePi(SEXP fSEXP, SEXP vMaxSEXP, SEXP rMaxSEXP, SEXP dPSEXP, SEXP rhoSEXP, SEXP betaSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dP(dPSEXP);
    Rcpp::traits::input_parameter< float >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(HollandWindProfilePi(f, vMax, rMax, dP, rho, beta, R));
    return rcpp_result_gen;
END_RCPP
}
// HollandPressureProfilePi
NumericVector HollandPressureProfilePi(NumericVector rMax, NumericVector dP, NumericVector cP, NumericVector beta, NumericVector R);
RcppExport SEXP _TCHazaRds_HollandPressureProfilePi(SEXP rMaxSEXP, SEXP dPSEXP, SEXP cPSEXP, SEXP betaSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dP(dPSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cP(cPSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(HollandPressureProfilePi(rMax, dP, cP, beta, R));
    return rcpp_result_gen;
END_RCPP
}
// NewHollandWindProfilePi
NumericMatrix NewHollandWindProfilePi(NumericVector f, NumericVector rMax, NumericVector dP, float rho, NumericVector R, NumericVector vMax, NumericVector beta);
RcppExport SEXP _TCHazaRds_NewHollandWindProfilePi(SEXP fSEXP, SEXP rMaxSEXP, SEXP dPSEXP, SEXP rhoSEXP, SEXP RSEXP, SEXP vMaxSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dP(dPSEXP);
    Rcpp::traits::input_parameter< float >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(NewHollandWindProfilePi(f, rMax, dP, rho, R, vMax, beta));
    return rcpp_result_gen;
END_RCPP
}
// DoubleHollandWindProfilePi
NumericMatrix DoubleHollandWindProfilePi(NumericVector f, NumericVector vMax, NumericVector rMax, NumericVector dP, NumericVector cP, float rho, NumericVector beta, NumericVector R);
RcppExport SEXP _TCHazaRds_DoubleHollandWindProfilePi(SEXP fSEXP, SEXP vMaxSEXP, SEXP rMaxSEXP, SEXP dPSEXP, SEXP cPSEXP, SEXP rhoSEXP, SEXP betaSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dP(dPSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cP(cPSEXP);
    Rcpp::traits::input_parameter< float >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(DoubleHollandWindProfilePi(f, vMax, rMax, dP, cP, rho, beta, R));
    return rcpp_result_gen;
END_RCPP
}
// DoubleHollandPressureProfilePi
NumericVector DoubleHollandPressureProfilePi(NumericVector rMax, NumericVector dP, NumericVector cP, NumericVector beta, NumericVector R);
RcppExport SEXP _TCHazaRds_DoubleHollandPressureProfilePi(SEXP rMaxSEXP, SEXP dPSEXP, SEXP cPSEXP, SEXP betaSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type dP(dPSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cP(cPSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(DoubleHollandPressureProfilePi(rMax, dP, cP, beta, R));
    return rcpp_result_gen;
END_RCPP
}
// HubbertWindFieldPi
NumericMatrix HubbertWindFieldPi(NumericVector f, NumericVector rMax, NumericVector vFm, NumericVector thetaFm, NumericMatrix Rlam, NumericVector V, float surface);
RcppExport SEXP _TCHazaRds_HubbertWindFieldPi(SEXP fSEXP, SEXP rMaxSEXP, SEXP vFmSEXP, SEXP thetaFmSEXP, SEXP RlamSEXP, SEXP VSEXP, SEXP surfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vFm(vFmSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thetaFm(thetaFmSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Rlam(RlamSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type V(VSEXP);
    Rcpp::traits::input_parameter< float >::type surface(surfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(HubbertWindFieldPi(f, rMax, vFm, thetaFm, Rlam, V, surface));
    return rcpp_result_gen;
END_RCPP
}
// McConochieWindFieldPi
NumericMatrix McConochieWindFieldPi(NumericVector rMax, NumericVector vMax, NumericVector vFm, NumericVector thetaFm, NumericMatrix Rlam, NumericVector V, float f, float surface);
RcppExport SEXP _TCHazaRds_McConochieWindFieldPi(SEXP rMaxSEXP, SEXP vMaxSEXP, SEXP vFmSEXP, SEXP thetaFmSEXP, SEXP RlamSEXP, SEXP VSEXP, SEXP fSEXP, SEXP surfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vFm(vFmSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thetaFm(thetaFmSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Rlam(RlamSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type V(VSEXP);
    Rcpp::traits::input_parameter< float >::type f(fSEXP);
    Rcpp::traits::input_parameter< float >::type surface(surfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(McConochieWindFieldPi(rMax, vMax, vFm, thetaFm, Rlam, V, f, surface));
    return rcpp_result_gen;
END_RCPP
}
// KepertWindFieldPi
NumericMatrix KepertWindFieldPi(NumericVector rMax, NumericVector vMax, NumericVector vFm, NumericVector thetaFm, NumericVector f, NumericMatrix Rlam, NumericMatrix VZ, float surface);
RcppExport SEXP _TCHazaRds_KepertWindFieldPi(SEXP rMaxSEXP, SEXP vMaxSEXP, SEXP vFmSEXP, SEXP thetaFmSEXP, SEXP fSEXP, SEXP RlamSEXP, SEXP VZSEXP, SEXP surfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vFm(vFmSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thetaFm(thetaFmSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Rlam(RlamSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type VZ(VZSEXP);
    Rcpp::traits::input_parameter< float >::type surface(surfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(KepertWindFieldPi(rMax, vMax, vFm, thetaFm, f, Rlam, VZ, surface));
    return rcpp_result_gen;
END_RCPP
}
// Rdist
NumericMatrix Rdist(NumericVector Gridlon, NumericVector Gridlat, float TClon, float TClat);
RcppExport SEXP _TCHazaRds_Rdist(SEXP GridlonSEXP, SEXP GridlatSEXP, SEXP TClonSEXP, SEXP TClatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type Gridlon(GridlonSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Gridlat(GridlatSEXP);
    Rcpp::traits::input_parameter< float >::type TClon(TClonSEXP);
    Rcpp::traits::input_parameter< float >::type TClat(TClatSEXP);
    rcpp_result_gen = Rcpp::wrap(Rdist(Gridlon, Gridlat, TClon, TClat));
    return rcpp_result_gen;
END_RCPP
}
// JelesnianskiWindProfile
NumericMatrix JelesnianskiWindProfile(float f, float vMax, float rMax, NumericVector R);
RcppExport SEXP _TCHazaRds_JelesnianskiWindProfile(SEXP fSEXP, SEXP vMaxSEXP, SEXP rMaxSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type f(fSEXP);
    Rcpp::traits::input_parameter< float >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< float >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(JelesnianskiWindProfile(f, vMax, rMax, R));
    return rcpp_result_gen;
END_RCPP
}
// HollandWindProfile
NumericMatrix HollandWindProfile(float f, float vMax, float rMax, float dP, float rho, float beta, NumericVector R);
RcppExport SEXP _TCHazaRds_HollandWindProfile(SEXP fSEXP, SEXP vMaxSEXP, SEXP rMaxSEXP, SEXP dPSEXP, SEXP rhoSEXP, SEXP betaSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type f(fSEXP);
    Rcpp::traits::input_parameter< float >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< float >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< float >::type dP(dPSEXP);
    Rcpp::traits::input_parameter< float >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< float >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(HollandWindProfile(f, vMax, rMax, dP, rho, beta, R));
    return rcpp_result_gen;
END_RCPP
}
// HollandPressureProfile
NumericVector HollandPressureProfile(float rMax, float dP, float cP, float beta, NumericVector R);
RcppExport SEXP _TCHazaRds_HollandPressureProfile(SEXP rMaxSEXP, SEXP dPSEXP, SEXP cPSEXP, SEXP betaSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< float >::type dP(dPSEXP);
    Rcpp::traits::input_parameter< float >::type cP(cPSEXP);
    Rcpp::traits::input_parameter< float >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(HollandPressureProfile(rMax, dP, cP, beta, R));
    return rcpp_result_gen;
END_RCPP
}
// NewHollandWindProfile
NumericMatrix NewHollandWindProfile(float f, float rMax, float dP, float rho, NumericVector R, float vMax, float beta);
RcppExport SEXP _TCHazaRds_NewHollandWindProfile(SEXP fSEXP, SEXP rMaxSEXP, SEXP dPSEXP, SEXP rhoSEXP, SEXP RSEXP, SEXP vMaxSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type f(fSEXP);
    Rcpp::traits::input_parameter< float >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< float >::type dP(dPSEXP);
    Rcpp::traits::input_parameter< float >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    Rcpp::traits::input_parameter< float >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< float >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(NewHollandWindProfile(f, rMax, dP, rho, R, vMax, beta));
    return rcpp_result_gen;
END_RCPP
}
// DoubleHollandWindProfile
NumericMatrix DoubleHollandWindProfile(float f, float vMax, float rMax, float dP, float cP, float rho, float beta, NumericVector R);
RcppExport SEXP _TCHazaRds_DoubleHollandWindProfile(SEXP fSEXP, SEXP vMaxSEXP, SEXP rMaxSEXP, SEXP dPSEXP, SEXP cPSEXP, SEXP rhoSEXP, SEXP betaSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type f(fSEXP);
    Rcpp::traits::input_parameter< float >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< float >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< float >::type dP(dPSEXP);
    Rcpp::traits::input_parameter< float >::type cP(cPSEXP);
    Rcpp::traits::input_parameter< float >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< float >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(DoubleHollandWindProfile(f, vMax, rMax, dP, cP, rho, beta, R));
    return rcpp_result_gen;
END_RCPP
}
// DoubleHollandPressureProfile
NumericVector DoubleHollandPressureProfile(float rMax, float dP, float cP, float beta, NumericVector R);
RcppExport SEXP _TCHazaRds_DoubleHollandPressureProfile(SEXP rMaxSEXP, SEXP dPSEXP, SEXP cPSEXP, SEXP betaSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< float >::type dP(dPSEXP);
    Rcpp::traits::input_parameter< float >::type cP(cPSEXP);
    Rcpp::traits::input_parameter< float >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(DoubleHollandPressureProfile(rMax, dP, cP, beta, R));
    return rcpp_result_gen;
END_RCPP
}
// HubbertWindField
NumericMatrix HubbertWindField(float f, float rMax, float vFm, float thetaFm, NumericMatrix Rlam, NumericVector V, float surface);
RcppExport SEXP _TCHazaRds_HubbertWindField(SEXP fSEXP, SEXP rMaxSEXP, SEXP vFmSEXP, SEXP thetaFmSEXP, SEXP RlamSEXP, SEXP VSEXP, SEXP surfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type f(fSEXP);
    Rcpp::traits::input_parameter< float >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< float >::type vFm(vFmSEXP);
    Rcpp::traits::input_parameter< float >::type thetaFm(thetaFmSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Rlam(RlamSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type V(VSEXP);
    Rcpp::traits::input_parameter< float >::type surface(surfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(HubbertWindField(f, rMax, vFm, thetaFm, Rlam, V, surface));
    return rcpp_result_gen;
END_RCPP
}
// McConochieWindField
NumericMatrix McConochieWindField(float rMax, float vMax, float vFm, float thetaFm, NumericMatrix Rlam, NumericVector V, float f, float surface);
RcppExport SEXP _TCHazaRds_McConochieWindField(SEXP rMaxSEXP, SEXP vMaxSEXP, SEXP vFmSEXP, SEXP thetaFmSEXP, SEXP RlamSEXP, SEXP VSEXP, SEXP fSEXP, SEXP surfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< float >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< float >::type vFm(vFmSEXP);
    Rcpp::traits::input_parameter< float >::type thetaFm(thetaFmSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Rlam(RlamSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type V(VSEXP);
    Rcpp::traits::input_parameter< float >::type f(fSEXP);
    Rcpp::traits::input_parameter< float >::type surface(surfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(McConochieWindField(rMax, vMax, vFm, thetaFm, Rlam, V, f, surface));
    return rcpp_result_gen;
END_RCPP
}
// KepertWindField
NumericMatrix KepertWindField(float rMax, float vMax, float vFm, float thetaFm, float f, NumericMatrix Rlam, NumericMatrix VZ, float surface);
RcppExport SEXP _TCHazaRds_KepertWindField(SEXP rMaxSEXP, SEXP vMaxSEXP, SEXP vFmSEXP, SEXP thetaFmSEXP, SEXP fSEXP, SEXP RlamSEXP, SEXP VZSEXP, SEXP surfaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< float >::type rMax(rMaxSEXP);
    Rcpp::traits::input_parameter< float >::type vMax(vMaxSEXP);
    Rcpp::traits::input_parameter< float >::type vFm(vFmSEXP);
    Rcpp::traits::input_parameter< float >::type thetaFm(thetaFmSEXP);
    Rcpp::traits::input_parameter< float >::type f(fSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Rlam(RlamSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type VZ(VZSEXP);
    Rcpp::traits::input_parameter< float >::type surface(surfaceSEXP);
    rcpp_result_gen = Rcpp::wrap(KepertWindField(rMax, vMax, vFm, thetaFm, f, Rlam, VZ, surface));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_TCHazaRds_RdistPi", (DL_FUNC) &_TCHazaRds_RdistPi, 4},
    {"_TCHazaRds_JelesnianskiWindProfilePi", (DL_FUNC) &_TCHazaRds_JelesnianskiWindProfilePi, 4},
    {"_TCHazaRds_RankineWindProfilePi", (DL_FUNC) &_TCHazaRds_RankineWindProfilePi, 4},
    {"_TCHazaRds_HollandWindProfilePi", (DL_FUNC) &_TCHazaRds_HollandWindProfilePi, 7},
    {"_TCHazaRds_HollandPressureProfilePi", (DL_FUNC) &_TCHazaRds_HollandPressureProfilePi, 5},
    {"_TCHazaRds_NewHollandWindProfilePi", (DL_FUNC) &_TCHazaRds_NewHollandWindProfilePi, 7},
    {"_TCHazaRds_DoubleHollandWindProfilePi", (DL_FUNC) &_TCHazaRds_DoubleHollandWindProfilePi, 8},
    {"_TCHazaRds_DoubleHollandPressureProfilePi", (DL_FUNC) &_TCHazaRds_DoubleHollandPressureProfilePi, 5},
    {"_TCHazaRds_HubbertWindFieldPi", (DL_FUNC) &_TCHazaRds_HubbertWindFieldPi, 7},
    {"_TCHazaRds_McConochieWindFieldPi", (DL_FUNC) &_TCHazaRds_McConochieWindFieldPi, 8},
    {"_TCHazaRds_KepertWindFieldPi", (DL_FUNC) &_TCHazaRds_KepertWindFieldPi, 8},
    {"_TCHazaRds_Rdist", (DL_FUNC) &_TCHazaRds_Rdist, 4},
    {"_TCHazaRds_JelesnianskiWindProfile", (DL_FUNC) &_TCHazaRds_JelesnianskiWindProfile, 4},
    {"_TCHazaRds_HollandWindProfile", (DL_FUNC) &_TCHazaRds_HollandWindProfile, 7},
    {"_TCHazaRds_HollandPressureProfile", (DL_FUNC) &_TCHazaRds_HollandPressureProfile, 5},
    {"_TCHazaRds_NewHollandWindProfile", (DL_FUNC) &_TCHazaRds_NewHollandWindProfile, 7},
    {"_TCHazaRds_DoubleHollandWindProfile", (DL_FUNC) &_TCHazaRds_DoubleHollandWindProfile, 8},
    {"_TCHazaRds_DoubleHollandPressureProfile", (DL_FUNC) &_TCHazaRds_DoubleHollandPressureProfile, 5},
    {"_TCHazaRds_HubbertWindField", (DL_FUNC) &_TCHazaRds_HubbertWindField, 7},
    {"_TCHazaRds_McConochieWindField", (DL_FUNC) &_TCHazaRds_McConochieWindField, 8},
    {"_TCHazaRds_KepertWindField", (DL_FUNC) &_TCHazaRds_KepertWindField, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_TCHazaRds(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
