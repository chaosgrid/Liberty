#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634e960);
CLANG_FORWARD_PROC_SYMBOL(public_634fec0);

PROC_DECLARE(0x634e9d0, internal_634e9d0, public_634e9d0);
extern "C" NAKED register_t __cdecl internal_634e9d0()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov esi, ecx
        push esi
        mov ecx, edi
        call public_634fec0
        push esi
        mov ecx, edi
        call public_634e960
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x634e9d0)
    }
}
