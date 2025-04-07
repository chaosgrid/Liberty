#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62272c0);
CLANG_FORWARD_PROC_SYMBOL(public_6244660);

PROC_DECLARE(0x62272c0, internal_62272c0, public_62272c0);
extern "C" NAKED register_t __cdecl internal_62272c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_6244660
        UNREACHABLE_TRAP(0x62272c0)
    }
}
