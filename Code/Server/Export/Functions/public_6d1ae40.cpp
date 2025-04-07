#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1ae60);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d1ae58 _public_6d1ae58

PROC_DECLARE(0x6d1ae40, internal_6d1ae40, public_6d1ae40);
extern "C" NAKED register_t __cdecl internal_6d1ae40()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d1ae60
        test byte ptr ss : [esp+8], 1
        je public_6d1ae58
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d1ae58 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d1ae40)
    }
}

#undef public_6d1ae58
