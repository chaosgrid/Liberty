#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_580190);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_580188 _public_580188

PROC_DECLARE(0x580170, internal_580170, public_580170);
extern "C" NAKED register_t __cdecl internal_580170()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_580190
        test byte ptr ss : [esp+8], 1
        je public_580188
        push esi
        call public_5b7e1d
        add esp, 4
        public_580188 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x580170)
    }
}

#undef public_580188
