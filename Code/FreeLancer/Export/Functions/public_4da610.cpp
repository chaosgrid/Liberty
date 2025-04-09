#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4da610);
CLANG_FORWARD_PROC_SYMBOL(public_4da740);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4da628 _public_4da628

PROC_DECLARE(0x4da610, internal_4da610, public_4da610);
extern "C" NAKED register_t __cdecl internal_4da610()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4da740
        test byte ptr ss : [esp+8], 1
        je public_4da628
        push esi
        call public_5b7e1d
        add esp, 4
        public_4da628 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4da610)
    }
}

#undef public_4da628
