#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341af0);
CLANG_FORWARD_PROC_SYMBOL(public_6342c20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6342c38 _public_6342c38

PROC_DECLARE(0x6342c20, internal_6342c20, public_6342c20);
extern "C" NAKED register_t __cdecl internal_6342c20()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6341af0
        test byte ptr ss : [esp+8], 1
        je public_6342c38
        push esi
        call public_6391d5a
        add esp, 4
        public_6342c38 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6342c20)
    }
}

#undef public_6342c38
