#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6238a70);
CLANG_FORWARD_PROC_SYMBOL(public_623b2a0);

PROC_DECLARE(0x623b2a0, internal_623b2a0, public_623b2a0);
extern "C" NAKED register_t __cdecl internal_623b2a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea ecx, ds:[eax+0xC]
        call public_6238a70
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x623b2a0)
    }
}
