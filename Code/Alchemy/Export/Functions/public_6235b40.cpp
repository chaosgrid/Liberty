#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6233330);
CLANG_FORWARD_PROC_SYMBOL(public_6235b40);

PROC_DECLARE(0x6235b40, internal_6235b40, public_6235b40);
extern "C" NAKED register_t __cdecl internal_6235b40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea ecx, ds:[eax+0xC]
        call public_6233330
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6235b40)
    }
}
