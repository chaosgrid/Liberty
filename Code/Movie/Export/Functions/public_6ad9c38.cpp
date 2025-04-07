#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c86);

#define public_6ad9c4e _public_6ad9c4e

PROC_DECLARE(0x6ad9c38, internal_6ad9c38, public_6ad9c38);
extern "C" NAKED register_t __cdecl internal_6ad9c38()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ad9c86
        test byte ptr ss : [esp+8], 1
        je public_6ad9c4e
        push esi
        call public_6acf3d0
        pop ecx
        public_6ad9c4e : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ad9c38)
    }
}

#undef public_6ad9c4e
