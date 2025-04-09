#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a68c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a7f80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5a7f98 _public_5a7f98

PROC_DECLARE(0x5a7f80, internal_5a7f80, public_5a7f80);
extern "C" NAKED register_t __cdecl internal_5a7f80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_5a68c0
        test byte ptr ss : [esp+8], 1
        je public_5a7f98
        push esi
        call public_5b7e1d
        add esp, 4
        public_5a7f98 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x5a7f80)
    }
}

#undef public_5a7f98
