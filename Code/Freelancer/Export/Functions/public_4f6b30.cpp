#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f6bf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f6b48 _public_4f6b48

PROC_DECLARE(0x4f6b30, internal_4f6b30, public_4f6b30);
extern "C" NAKED register_t __cdecl internal_4f6b30()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4f6bf0
        test byte ptr ss : [esp+8], 1
        je public_4f6b48
        push esi
        call public_5b7e1d
        add esp, 4
        public_4f6b48 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4f6b30)
    }
}

#undef public_4f6b48
