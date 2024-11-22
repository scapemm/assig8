

void days2years(int &days, int &years) {
    years = days/365;
    days %= 365;
}
// Problem 2
double func(double *x,double *y) {
    *y=(11**x**x**x)/ 3 +5;
    return *y;
}


// Problem 3
int minsNewYear(int *hour, int *min) {
    return (24*60-*hour*60-*min);
}

// Problem 4
double probability(int *y,int *w) {
   return (7-max(*y,*w))/6.0;
}

// Problem 5
int presses(int *x) {
    
}

