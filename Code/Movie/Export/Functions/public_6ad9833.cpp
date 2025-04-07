#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad97f6);

#define public_6ad9849 _public_6ad9849

PROC_DECLARE(0x6ad9833, internal_6ad9833, public_6ad9833);
extern "C" NAKED register_t __cdecl internal_6ad9833()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ad97f6
        test byte ptr ss : [esp+8], 1
        je public_6ad9849
        push esi
        call public_6acf3d0
        pop ecx
        public_6ad9849 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ad9833)
    }
}

#undef public_6ad9849
