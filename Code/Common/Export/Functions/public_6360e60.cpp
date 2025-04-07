#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6360e80);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6360e78 _public_6360e78

PROC_DECLARE(0x6360e60, internal_6360e60, public_6360e60);
extern "C" NAKED register_t __cdecl internal_6360e60()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6360e80
        test byte ptr ss : [esp+8], 1
        je public_6360e78
        push esi
        call public_6391d5a
        add esp, 4
        public_6360e78 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6360e60)
    }
}

#undef public_6360e78
