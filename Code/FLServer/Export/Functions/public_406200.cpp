#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406200);
CLANG_FORWARD_PROC_SYMBOL(public_406210);

PROC_DECLARE(0x406200, internal_406200, public_406200);
extern "C" NAKED register_t __cdecl internal_406200()
{
    __asm
    {
        mov ecx, offset public_4260b0
        jmp public_406210
        UNREACHABLE_TRAP(0x406200)
    }
}
