#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3880);
CLANG_FORWARD_PROC_SYMBOL(public_6ef3610);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ef3628 _public_6ef3628

PROC_DECLARE(0x6ef3610, internal_6ef3610, public_6ef3610);
extern "C" NAKED register_t __cdecl internal_6ef3610()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ed3880
        test byte ptr ss : [esp+8], 1
        je public_6ef3628
        push esi
        call public_6fa8fe0
        add esp, 4
        public_6ef3628 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ef3610)
    }
}

#undef public_6ef3628
