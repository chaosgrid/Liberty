#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2e3e0);

#define public_6c2263d _public_6c2263d

PROC_DECLARE(0x6c22620, internal_6c22620, public_6c22620);
extern "C" NAKED register_t __cdecl internal_6c22620()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ds:[esi+4]
        push eax
        call dword ptr ds : [ecx+0xC]
        test byte ptr ss : [esp+0xC], 4
        je public_6c2263d
        mov ecx, esi
        call public_6c2e3e0
        public_6c2263d : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c22620)
    }
}

#undef public_6c2263d
