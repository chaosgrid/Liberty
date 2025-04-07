#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ff600);
CLANG_FORWARD_PROC_SYMBOL(public_6301170);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630118b _public_630118b

PROC_DECLARE(0x6301170, internal_6301170, public_6301170);
extern "C" NAKED register_t __cdecl internal_6301170()
{
    __asm
    {
        push esi
        mov esi, dword ptr ds : [public_63fcc54]
        test esi, esi
        je public_630118b
        mov ecx, esi
        call public_62ff600
        push esi
        call public_6391d5a
        add esp, 4
        public_630118b : nop
        mov dword ptr ds : [public_63fcc54], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6301170)
    }
}

#undef public_630118b
