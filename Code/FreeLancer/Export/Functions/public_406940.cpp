#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406b80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_406958 _public_406958

PROC_DECLARE(0x406940, internal_406940, public_406940);
extern "C" NAKED register_t __cdecl internal_406940()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_406b80
        test byte ptr ss : [esp+8], 1
        je public_406958
        push esi
        call public_5b7e1d
        add esp, 4
        public_406958 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x406940)
    }
}

#undef public_406958
