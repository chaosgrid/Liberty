#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6202fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6202ff0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6202fb8 _public_6202fb8

PROC_DECLARE(0x6202fa0, internal_6202fa0, public_6202fa0);
extern "C" NAKED register_t __cdecl internal_6202fa0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6202ff0
        test byte ptr ss : [esp+8], 1
        je public_6202fb8
        push esi
        call public_62460e0
        add esp, 4
        public_6202fb8 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6202fa0)
    }
}

#undef public_6202fb8
