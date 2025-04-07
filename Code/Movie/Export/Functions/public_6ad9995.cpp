#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ad993b);

#define public_6ad99ab _public_6ad99ab

PROC_DECLARE(0x6ad9995, internal_6ad9995, public_6ad9995);
extern "C" NAKED register_t __cdecl internal_6ad9995()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6ad993b
        test byte ptr ss : [esp+8], 1
        je public_6ad99ab
        push esi
        call public_6acf3d0
        pop ecx
        public_6ad99ab : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ad9995)
    }
}

#undef public_6ad99ab
