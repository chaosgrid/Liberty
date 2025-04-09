#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c9230);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c9228 _public_4c9228

PROC_DECLARE(0x4c9210, internal_4c9210, public_4c9210);
extern "C" NAKED register_t __cdecl internal_4c9210()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4c9230
        test byte ptr ss : [esp+8], 1
        je public_4c9228
        push esi
        call public_5b7e1d
        add esp, 4
        public_4c9228 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4c9210)
    }
}

#undef public_4c9228
