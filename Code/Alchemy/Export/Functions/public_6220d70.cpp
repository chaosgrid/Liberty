#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220d90);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6220d88 _public_6220d88

PROC_DECLARE(0x6220d70, internal_6220d70, public_6220d70);
extern "C" NAKED register_t __cdecl internal_6220d70()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6220d90
        test byte ptr ss : [esp+8], 1
        je public_6220d88
        push esi
        call public_62460e0
        add esp, 4
        public_6220d88 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6220d70)
    }
}

#undef public_6220d88
