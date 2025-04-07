#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_587f60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_587f58 _public_587f58

PROC_DECLARE(0x587f40, internal_587f40, public_587f40);
extern "C" NAKED register_t __cdecl internal_587f40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_587f60
        test byte ptr ss : [esp+8], 1
        je public_587f58
        push esi
        call public_5b7e1d
        add esp, 4
        public_587f58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x587f40)
    }
}

#undef public_587f58
