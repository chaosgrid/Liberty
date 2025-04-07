#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289e50);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6349b38 _public_6349b38

PROC_DECLARE(0x6349b20, internal_6349b20, public_6349b20);
extern "C" NAKED register_t __cdecl internal_6349b20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6289e50
        test byte ptr ss : [esp+8], 1
        je public_6349b38
        push esi
        call public_6391d5a
        add esp, 4
        public_6349b38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6349b20)
    }
}

#undef public_6349b38
