#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6362360);
CLANG_FORWARD_PROC_SYMBOL(public_6362550);

PROC_DECLARE(0x6362350, internal_6362350, public_6362350);
extern "C" NAKED register_t __cdecl internal_6362350()
{
    __asm
    {
        call public_6362360
        jmp public_6362550
        UNREACHABLE_TRAP(0x6362350)
    }
}
