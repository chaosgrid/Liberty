#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d10030);
CLANG_FORWARD_PROC_SYMBOL(public_6d11570);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d11588 _public_6d11588

PROC_DECLARE(0x6d11570, internal_6d11570, public_6d11570);
extern "C" NAKED register_t __cdecl internal_6d11570()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d10030
        test byte ptr ss : [esp+8], 1
        je public_6d11588
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6d11588 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d11570)
    }
}

#undef public_6d11588
