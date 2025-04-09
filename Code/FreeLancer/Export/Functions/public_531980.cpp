#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531980);

#define public_531996 _public_531996

PROC_DECLARE(0x531980, internal_531980, public_531980);
extern "C" NAKED register_t __cdecl internal_531980()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_531996
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xA
        rep movsd
        pop esi
        public_531996 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x531980)
    }
}

#undef public_531996
