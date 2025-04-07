#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b540);
CLANG_FORWARD_PROC_SYMBOL(public_6f55610);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

PROC_DECLARE(0x6f55610, internal_6f55610, public_6f55610);
extern "C" NAKED register_t __cdecl internal_6f55610()
{
    __asm
    {
        push 1
        call public_6f4b090
        push eax
        call public_6f4b540
        add esp, 8
        jmp public_6f57f16
        UNREACHABLE_TRAP(0x6f55610)
    }
}
