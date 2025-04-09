#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5803d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0880);

PROC_DECLARE(0x582aa0, internal_582aa0, public_582aa0);
extern "C" NAKED register_t __cdecl internal_582aa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_5a0880
        mov ecx, esi
        call public_5803d0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x582aa0)
    }
}
