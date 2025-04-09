#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b2c10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4b2c08 _public_4b2c08

PROC_DECLARE(0x4b2bf0, internal_4b2bf0, public_4b2bf0);
extern "C" NAKED register_t __cdecl internal_4b2bf0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4b2c10
        test byte ptr ss : [esp+8], 1
        je public_4b2c08
        push esi
        call public_5b7e1d
        add esp, 4
        public_4b2c08 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4b2bf0)
    }
}

#undef public_4b2c08
