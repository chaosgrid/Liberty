#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a3ea0);

#define public_4a3eb6 _public_4a3eb6

PROC_DECLARE(0x4a3ea0, internal_4a3ea0, public_4a3ea0);
extern "C" NAKED register_t __cdecl internal_4a3ea0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_4a3eb6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x1F
        rep movsd
        pop esi
        public_4a3eb6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x4a3ea0)
    }
}

#undef public_4a3eb6
