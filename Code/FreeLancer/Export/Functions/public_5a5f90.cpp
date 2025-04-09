#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4d70);

PROC_DECLARE(0x5a5f90, internal_5a5f90, public_5a5f90);
extern "C" NAKED register_t __cdecl internal_5a5f90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_4c4d70
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x5a5f90)
    }
}
