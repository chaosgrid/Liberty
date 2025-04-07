#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6238050);
CLANG_FORWARD_PROC_SYMBOL(public_623ac80);

PROC_DECLARE(0x623ac80, internal_623ac80, public_623ac80);
extern "C" NAKED register_t __cdecl internal_623ac80()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6238050
        UNREACHABLE_TRAP(0x623ac80)
    }
}
