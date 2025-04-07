#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c225f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c23ea0);

#define public_6c22607 _public_6c22607

PROC_DECLARE(0x6c225f0, internal_6c225f0, public_6c225f0);
extern "C" NAKED register_t __cdecl internal_6c225f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call public_6c23ea0
        test eax, eax
        jge public_6c22607
        or eax, 0xFFFFFFFF
        pop esi
        ret 4
        public_6c22607 : nop
        mov dword ptr ds : [esi+0x1E4], 0
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c225f0)
    }
}

#undef public_6c22607
