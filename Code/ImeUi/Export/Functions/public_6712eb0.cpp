#include "ImeUi-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6712800);
CLANG_FORWARD_PROC_SYMBOL(public_6712db0);

PROC_DECLARE(0x6712eb0, internal_6712eb0, public_6712eb0);
extern "C" NAKED register_t __cdecl internal_6712eb0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_6712800
        mov ecx, esi
        call public_6712db0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6712eb0)
    }
}
