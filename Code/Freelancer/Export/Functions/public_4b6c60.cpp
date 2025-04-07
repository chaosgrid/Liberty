#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b6c80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4b6c78 _public_4b6c78

PROC_DECLARE(0x4b6c60, internal_4b6c60, public_4b6c60);
extern "C" NAKED register_t __cdecl internal_4b6c60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_4b6c80
        test byte ptr ss : [esp+8], 1
        je public_4b6c78
        push esi
        call public_5b7e1d
        add esp, 4
        public_4b6c78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4b6c60)
    }
}

#undef public_4b6c78
