#include "String.h"
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include "String.h"

int main() {
    // Tests getLength
    assert(getLength("") == 0);
    assert(getLength("hola") == 4);
    assert(getLength(" ") == 1);

    // Tests isEmpty
    assert(isEmpty("") == true);
    assert(isEmpty("a") == false);

    // Tests areEqual
    assert(areEqual("UTN", "UTN") == true);
    assert(areEqual("SSL", "ssl") == false);
    assert(areEqual("", "") == true);

    // Tests areDecimalDigits
    assert(areDecimalDigits("123") == true);
    assert(areDecimalDigits("12a3") == false);
    assert(areDecimalDigits("") == false);

    // Tests contains
    assert(contains("Geovox", 'v') == true);
    assert(contains("EpiVox", 'z') == false);

    // Tests toInteger 
    assert(toInteger("123") == 123);
    assert(toInteger("0") == 0);


    char* resConcat = concatenate("Hola ", "Mundo");
    assert(areEqual(resConcat, "Hola Mundo"));
    free(resConcat);

    char* resPower = power("Abc", 2);
    assert(areEqual(resPower, "AbcAbc"));
    free(resPower);

    // Test toUpper
    char cadenaMuda[] = "hola";
    toUpper(cadenaMuda);
    assert(areEqual(cadenaMuda, "HOLA") == true);

    return 0;
}