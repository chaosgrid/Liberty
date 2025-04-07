#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6313880);
CLANG_FORWARD_PROC_SYMBOL(public_6313c80);

PROC_DECLARE(0x6313880, internal_6313880, public_6313880);
extern "C" NAKED register_t __cdecl internal_6313880()
{
    __asm
    {
        mov ecx, offset public_64012e0
        jmp public_6313c80
        UNREACHABLE_TRAP(0x6313880)
    }
}
