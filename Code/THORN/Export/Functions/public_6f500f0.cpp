#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b590);
CLANG_FORWARD_PROC_SYMBOL(public_6f4c7f0);

PROC_DECLARE(0x6f500f0, internal_6f500f0, public_6f500f0);
extern "C" NAKED register_t __cdecl internal_6f500f0()
{
    __asm
    {
        push 1
        call public_6f4b090
        push eax
        call public_6f4b590
        push eax
        call public_6f4c7f0
        UNREACHABLE_TRAP(0x6f500f0)
    }
}
