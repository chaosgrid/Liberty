#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531af0);
CLANG_FORWARD_PROC_SYMBOL(public_536170);

#define public_531b07 _public_531b07
#define public_531b17 _public_531b17

PROC_DECLARE(0x531af0, internal_531af0, public_531af0);
extern "C" NAKED register_t __cdecl internal_531af0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ds : [esi], offset public_5de13c
        je public_531b07
        push esi
        call dword ptr ds : [public_5c6938]
        public_531b07 : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_531b17
        push esi
        call public_536170
        add esp, 4
        public_531b17 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x531af0)
    }
}

#undef public_531b07
#undef public_531b17
