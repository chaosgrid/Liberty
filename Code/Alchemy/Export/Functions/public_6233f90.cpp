#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6233330);

PROC_DECLARE(0x6233f90, internal_6233f90, public_6233f90);
extern "C" NAKED register_t __cdecl internal_6233f90()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        call public_6233330
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6233f90)
    }
}
