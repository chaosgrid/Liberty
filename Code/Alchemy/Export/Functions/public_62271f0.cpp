#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62271f0);
CLANG_FORWARD_PROC_SYMBOL(public_62446a0);

PROC_DECLARE(0x62271f0, internal_62271f0, public_62271f0);
extern "C" NAKED register_t __cdecl internal_62271f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp public_62446a0
        UNREACHABLE_TRAP(0x62271f0)
    }
}
