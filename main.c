#include "lol.h"

HOW_DUZ_I FACTORIAL(NUMBR N) {
    BOTH_SAEM(0, N)
        YA_RLY
            FOUND_YR 1;
        NO_WAI
            FOUND_YR PRODUKT_OF(N, FACTORIAL(DIFF_OF(N, 1)));
        OIC
IF_YOU_SAY_SO

HAI
    NUMBR N ITZ 0;

    IM_IN_YR_LOOP UPPIN_YR(NUMBR N) WILE(N) SMALLR_THAN(17, N)
    {
        VISIBLE(N, " != ", FACTORIAL(N));
    }
    FOUND_YR -1;
KTHXBYE