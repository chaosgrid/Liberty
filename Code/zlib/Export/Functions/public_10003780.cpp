#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10003780);
CLANG_FORWARD_PROC_SYMBOL(public_1000a464);

#define public_10003790 _public_10003790

PROC_DECLARE(0x10003780, internal_10003780, public_10003780);
extern "C" NAKED register_t __cdecl internal_10003780()
{
    __asm
    {
        push esi
        push edi
        mov esi, eax
        mov edi, 4
        lea esp, ss:[esp]
        public_10003790 : nop
        mov eax, esi
        and eax, 0xFF
        push ebx
        push eax
        call public_1000a464
        add esp, 8
        shr esi, 8
        dec edi
        jne public_10003790
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x10003780)
    }
}

#undef public_10003790
