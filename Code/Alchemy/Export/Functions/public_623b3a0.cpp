#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6244660);

PROC_DECLARE(0x623b3a0, internal_623b3a0, public_623b3a0);
extern "C" NAKED register_t __cdecl internal_623b3a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6244660
        UNREACHABLE_TRAP(0x623b3a0)
    }
}
