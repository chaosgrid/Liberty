#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559590);

#define public_55959b _public_55959b

PROC_DECLARE(0x559590, internal_559590, public_559590);
extern "C" NAKED register_t __cdecl internal_559590()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_55959b
        add eax, 0x6C
        ret 
        public_55959b : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x559590)
    }
}

#undef public_55959b
