#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62feba0);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);

#define public_62febbc _public_62febbc

PROC_DECLARE(0x62feba0, internal_62feba0, public_62feba0);
extern "C" NAKED register_t __cdecl internal_62feba0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call dword ptr ds : [public_63992ec]
        add esp, 4
        test eax, eax
        jne public_62febbc
        push esi
        call public_630d3f0
        add esp, 4
        public_62febbc : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62feba0)
    }
}

#undef public_62febbc
