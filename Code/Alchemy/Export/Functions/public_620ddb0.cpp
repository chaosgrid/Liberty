#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ddb0, internal_620ddb0, public_620ddb0);
extern "C" NAKED register_t __cdecl internal_620ddb0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 4
        UNREACHABLE_TRAP(0x620ddb0)
    }
}
