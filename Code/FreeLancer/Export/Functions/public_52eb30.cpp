#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52eb50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_52eb48 _public_52eb48

PROC_DECLARE(0x52eb30, internal_52eb30, public_52eb30);
extern "C" NAKED register_t __cdecl internal_52eb30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_52eb50
        test byte ptr ss : [esp+8], 1
        je public_52eb48
        push esi
        call public_5b7e1d
        add esp, 4
        public_52eb48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x52eb30)
    }
}

#undef public_52eb48
