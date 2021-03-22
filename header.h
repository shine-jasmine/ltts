
typedef struct complex_t {
    float real;
    float imaginary;
} complex_t;


complex_t sum(complex_t a, complex_t b){
    complex_t sum;
    sum.real = (a.real + b.real);
    sum.imaginary = (a.imaginary + b.imaginary);
    return sum;
}

complex_t mul(complex_t a, complex_t b){
    complex_t result;
    result.real = (a.real * b.real-a.imaginary*b.imaginary);
    result.imaginary = (a.real * b.imaginary+ a.imaginary*b.real);
    return result;
}

complex_t sub(complex_t a, complex_t b){
    complex_t diff;
    diff.real = (a.real-b.real);
    diff.imaginary = (a.imaginary-b.imaginary);
    return diff;
}

complex_t div(complex_t a, complex_t b){
    complex_t result;
    float x = a.real*b.real + a.imaginary*b.imaginary;
    float y = a.imaginary*b.real - a.real*b.imaginary;
    float z = b.real*b.real + b.imaginary*b.imaginary;
    result.real = x/z;
    result.imaginary = y/z;
    return result;
}