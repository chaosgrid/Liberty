#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446be0);
CLANG_FORWARD_PROC_SYMBOL(public_447f00);

#define public_454180 _public_454180

PROC_DECLARE(0x454170, internal_454170, public_454170);
extern "C" NAKED register_t __cdecl internal_454170()
{
    __asm
    {
        call public_446be0
        test eax, eax
        je public_454180
        mov ecx, eax
        call public_447f00
        public_454180 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x454170)
    }
}

#undef public_454180
