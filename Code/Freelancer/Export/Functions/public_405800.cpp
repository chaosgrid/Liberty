#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405800);

#define public_405816 _public_405816

PROC_DECLARE(0x405800, internal_405800, public_405800);
extern "C" NAKED register_t __cdecl internal_405800()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_405816
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xE
        rep movsd
        pop esi
        public_405816 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x405800)
    }
}

#undef public_405816
