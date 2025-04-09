#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4d90);

PROC_DECLARE(0x5a5fb0, internal_5a5fb0, public_5a5fb0);
extern "C" NAKED register_t __cdecl internal_5a5fb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_4c4d90
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x5a5fb0)
    }
}
