# pragma once
int i4_bit_hi1(int n);

int i4_bit_lo0(int n);

void i4_sobol(int dim_num, int *seed, float quasi[]);

float *i4_sobol_generate(int m, int n, int skip);

int i8_bit_hi1(long long int n);

int i8_bit_lo0(long long int n);

void i8_sobol(int dim_num, long long int *seed, double quasi[]);

double *i8_sobol_generate(int m, int n, int skip);

int tau_sobol(int dim_num);