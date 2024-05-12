
class MyComplex {
private:
    float real;
    float imag;

public:
    MyComplex(float r = 0.0, float i = 0.0) : real(r), imag(i) {}

    // Method to add two complex numbers
    MyComplex add(const MyComplex& other) const {
        return MyComplex(real + other.real, imag + other.imag);
    }

    // Method to square the complex number
    MyComplex square() const {
        return MyComplex(real * real - imag * imag, 2 * real * imag);
    }

    // Method to calculate the magnitude of the complex number
    float magnitude() const {
        return sqrt(real * real + imag * imag);
    }

    // Getter methods for real and imaginary parts (optional if direct access is needed)
    float getReal() const { return real; }
    float getImag() const { return imag; }
};
