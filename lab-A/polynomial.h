#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#ifdef __cplusplus
extern "C" {
#endif
    typedef struct Term {
        int coeff;
        int pow;
        struct Term* next;
    } Term;
    Term* create_term(int coeff, int pow);
    Term* add_term(Term* poly, int coeff, int pow);
    void free_polynomial(Term* poly);
    Term* sum_polynomials(Term* p1, Term* p2);
    Term* multiply_polynomials(Term* p1, Term* p2);
    Term* derivative_polynomial(Term* poly);
    Term* parse_polynomial(const char* str);
    void polynomial_to_string(Term* poly, char* buffer, int size);
    Term* sort_polynomial(Term* poly);

#ifdef __cplusplus
}
#endif

#endif // POLYNOMIAL_H
