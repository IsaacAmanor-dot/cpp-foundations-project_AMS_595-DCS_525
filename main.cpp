#include <iostream>  // We include the input/output library to allow printing and reading from the console.
#include <vector>    // We include the vector container so we can store lists of integers dynamically.
#include <cmath>     // We include the cmath library so we can use mathematical functions such as sqrt.

// TASK 1 — CONDITIONAL STATEMENTS
void conditional_demo() {  // We define the function for Task 1.
    int n;  // We create a variable to store the user's input.

    std::cout << "Enter a number: ";  // We prompt the user to enter a number.
    std::cin >> n;  // We read the user's input into the variable n.

    switch (n) {  // We evaluate the value of n using a switch statement.
        case -1:  // We check if n equals -1.
            std::cout << "negative one\n";  // We print the corresponding message.
            break;  // We break to exit the switch.
        case 0:  // We check if n equals 0.
            std::cout << "zero\n";  // We print the corresponding message.
            break;  // We exit the switch.
        case 1:  // We check if n equals 1.
            std::cout << "positive one\n";  // We print the corresponding message.
            break;  // We exit the switch.
        default:  // We handle all values that are not -1, 0, or 1.
            std::cout << "other value\n";  // We print the default message.
            break;  // We exit the switch.
    }
}  // We end the conditional_demo function.

// TASK 2 — PRINT VECTOR
void print_vector(std::vector<int> v) {  // We define the function that prints all elements of a vector.
    for (std::size_t i = 0; i < v.size(); ++i) {  // We loop through each index of the vector.
        std::cout << v[i];  // We print the current element.

        if (i + 1 < v.size()) {  // We check if this is not the last element.
            std::cout << " ";  // We print a space to separate values.
        }
    }
    std::cout << "\n";  // We print a newline after printing all elements.
}  // We end the print_vector function.

// TASK 3 — FIBONACCI WITH WHILE LOOP
void fibonacci_upto_limit() {  // We define the function for Task 3.
    const int LIMIT = 4000000;  // We set the maximum allowed Fibonacci value.
    long long a = 1;  // We assign the first Fibonacci number.
    long long b = 2;  // We assign the second Fibonacci number.

    std::cout << "Fibonacci sequence (values <= 4000000): ";  // We print a header message.
    std::cout << a << " " << b << " ";  // We print the first two Fibonacci numbers.

    while (true) {  // We begin an infinite loop that we will break manually.
        long long c = a + b;  // We compute the next Fibonacci number.

        if (c > LIMIT) {  // We check whether the new number exceeds the allowed limit.
            break;  // We exit the loop if it exceeds the limit.
        }

        std::cout << c << " ";  // We print the current Fibonacci value.
        a = b;  // We update a to be the previous value of b.
        b = c;  // We update b to be the newly computed value c.
    }

    std::cout << "\n";  // We print a newline after listing all terms.
}  // We end the fibonacci_upto_limit function.

// TASK 4.1 — IS PRIME
bool isprime(int n) {  // We define the function that checks whether n is a prime number.
    bool result = true;  // We initially assume that n is prime.

    if (n <= 1) {  // We check whether n is less than or equal to 1.
        result = false;  // We mark n as not prime.
    }
    else if (n == 2) {  // We check if n equals 2, which is prime.
        result = true;  // We confirm that 2 is prime.
    }
    else if (n % 2 == 0) {  // We check whether n is an even number greater than 2.
        result = false;  // We mark even numbers > 2 as not prime.
    }
    else {  // We now test odd numbers greater than 2.
        int limit = static_cast<int>(std::sqrt(static_cast<double>(n)));  // We compute the square root of n.
        for (int d = 3; d <= limit; d += 2) {  // We test divisibility by odd integers up to sqrt(n).
            if (n % d == 0) {  // We check if n has a divisor.
                result = false;  // We mark n as not prime.
                break;  // We stop checking once we find a divisor.
            }
        }
    }

    return result;  // We return whether n is prime.
}  // We end the isprime function.

void test_isprime() {  // We define the test function for Task 4.1.
    std::cout << "isprime(2) = " << isprime(2) << '\n';  // We test 2.
    std::cout << "isprime(10) = " << isprime(10) << '\n';  // We test 10.
    std::cout << "isprime(17) = " << isprime(17) << '\n';  // We test 17.
}  // We end the test_isprime function.

// TASK 4.2 — FACTORIZE
std::vector<int> factorize(int n) {  // We define the function that computes all factors of n.
    std::vector<int> answer;  // We create a vector to store the factors.

    for (int d = 1; d <= n; ++d) {  // We check every integer from 1 to n.
        if (n % d == 0) {  // We check whether d divides n evenly.
            answer.push_back(d);  // We add d to the list of factors.
        }
    }

    return answer;  // We return the vector containing all factors of n.
}  // We end the factorize function.

void test_factorize() {  // We define the test function for Task 4.2.
    print_vector(factorize(2));    // We test factorization of 2.
    print_vector(factorize(72));   // We test factorization of 72.
    print_vector(factorize(196));  // We test factorization of 196.
}  // We end the test_factorize function.

// TASK 4.3 — PRIME FACTORIZATION
std::vector<int> prime_factorize(int n) {  // We define the function that computes the prime factorization of n.
    std::vector<int> answer;  // We create a vector to store the prime factors.

    while (n % 2 == 0) {  // We factor out all powers of 2.
        answer.push_back(2);  // We add 2 to the vector.
        n /= 2;  // We divide n by 2.
    }

    int d = 3;  // We begin checking odd divisors.
    while (d * d <= n) {  // We continue while d squared is less than or equal to n.
        while (n % d == 0) {  // We check whether d divides n.
            answer.push_back(d);  // We add the divisor to the vector.
            n /= d;  // We divide n by the divisor.
        }
        d += 2;  // We move to the next odd divisor.
    }

    if (n > 1) {  // We check whether n is now a leftover prime.
        answer.push_back(n);  // We add the final prime factor.
    }

    return answer;  // We return the full prime factorization.
}  // We end the prime_factorize function.

void test_prime_factorize() {  // We define the test function for Task 4.3.
    print_vector(prime_factorize(2));    // We test prime factorization for 2.
    print_vector(prime_factorize(72));   // We test prime factorization for 72.
    print_vector(prime_factorize(196));  // We test prime factorization for 196.
}  // We end the test_prime_factorize function.

// TASK 5 — PASCAL'S TRIANGLE
void print_pascals_triangle(int n) {  // We define the function that prints the first n rows of Pascal's Triangle.
    if (n <= 0) {  // We check whether the input is valid.
        return;  // We exit if the number of rows is not positive.
    }

    std::vector<long long> row;  // We create a vector to represent the current row.
    row.push_back(1);  // We initialize the first row with a single 1.

    for (int i = 0; i < n; ++i) {  // We loop to generate n rows.
        for (std::size_t j = 0; j < row.size(); ++j) {  // We iterate through each element of the current row.
            std::cout << row[j] << " ";  // We print the current element.
        }
        std::cout << "\n";  // We move to the next line after printing a row.

        std::vector<long long> next_row;  // We create a vector for the next row.
        next_row.push_back(1);  // We add the leading 1.

        for (std::size_t k = 0; k + 1 < row.size(); ++k) {  // We compute the middle elements of the next row.
            long long value = row[k] + row[k + 1];  // We compute the sum of two adjacent elements.
            next_row.push_back(value);  // We store the computed value.
        }

        next_row.push_back(1);  // We add the trailing 1.
        row = next_row;  // We update row to be the newly computed next_row.
    }
}  // We end the print_pascals_triangle function.

int main() {  // We define the main function that executes all tasks.
    conditional_demo();        // We run Task 1.
    fibonacci_upto_limit();    // We run Task 3.
    test_isprime();            // We run Task 4.1.
    test_factorize();          // We run Task 4.2.
    test_prime_factorize();    // We run Task 4.3.
    print_pascals_triangle(10);  // We run Task 5 by printing the first 10 rows.
    return 0;  // We end the program by returning 0.
}  // We end the main function.
