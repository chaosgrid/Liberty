#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40aed0);
CLANG_FORWARD_PROC_SYMBOL(public_40b320);

PROC_DECLARE(0x40aed0, internal_40aed0, public_40aed0);
extern "C" NAKED register_t __cdecl internal_40aed0()
{
    __asm
    {
        mov ecx, offset public_426bc8
        jmp public_40b320
        UNREACHABLE_TRAP(0x40aed0)
    }
}
