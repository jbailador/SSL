#include "String.h"
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include "String.h"

int main() {
    // Tests getLength
    assert(GetLength("") == 0);
    assert(GetLength("hola") == 4);
    assert(GetLength(" ") == 1);

    // Tests isEmpty
    assert(IsEmpty("") == true);
    assert(IsEmpty("a") == false);

    // Tests areEqual
    assert(AreEqual("UTN", "UTN") == true);
    assert(AreEqual("SSL", "ssl") == false);
    assert(AreEqual("", "") == true);

    // Tests areDecimalDigits
    assert(AreDecimalDigits("123") == true);
    assert(AreDecimalDigits("12a3") == false);
    assert(AreDecimalDigits("") == false);

    // Tests contains
    assert(Contains("Geovox", 'v') == true);
    assert(Contains("EpiVox", 'z') == false);

    // Tests toInteger 
    assert(ToInteger("123") == 123);
    assert(ToInteger("0") == 0);


    char* resConcat = Concatenate("Hola ", "Mundo");
    assert(AreEqual(resConcat, "Hola Mundo"));
    free(resConcat);

    char* resPower = Power("Abc", 2);
    assert(AreEqual(resPower, "AbcAbc"));
    free(resPower);

    // Test toUpper
    char cadenaMuda[] = "hola";
    ToUpper(cadenaMuda);
    assert(AreEqual(cadenaMuda, "HOLA") == true);

    return 0;
}