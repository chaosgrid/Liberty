#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232260);
CLANG_FORWARD_PROC_SYMBOL(public_6244430);

PROC_DECLARE(0x6232260, internal_6232260, public_6232260);
extern "C" NAKED register_t __cdecl internal_6232260()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6244430
        UNREACHABLE_TRAP(0x6232260)
    }
}
