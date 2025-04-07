#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209160);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6209158 _public_6209158

PROC_DECLARE(0x6209140, internal_6209140, public_6209140);
extern "C" NAKED register_t __cdecl internal_6209140()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6209160
        test byte ptr ss : [esp+8], 1
        je public_6209158
        push esi
        call public_62460e0
        add esp, 4
        public_6209158 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6209140)
    }
}

#undef public_6209158
