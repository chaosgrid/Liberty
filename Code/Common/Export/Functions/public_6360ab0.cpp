#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634ccd0);
CLANG_FORWARD_PROC_SYMBOL(public_6360ab0);

PROC_DECLARE(0x6360ab0, internal_6360ab0, public_6360ab0);
extern "C" NAKED register_t __cdecl internal_6360ab0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        call public_634ccd0
        ret 0xC
        UNREACHABLE_TRAP(0x6360ab0)
    }
}
