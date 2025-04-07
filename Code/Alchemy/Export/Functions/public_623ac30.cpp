#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6238780);
CLANG_FORWARD_PROC_SYMBOL(public_623ac30);

PROC_DECLARE(0x623ac30, internal_623ac30, public_623ac30);
extern "C" NAKED register_t __cdecl internal_623ac30()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+8]
        add ecx, 0xC
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        jmp public_6238780
        UNREACHABLE_TRAP(0x623ac30)
    }
}
