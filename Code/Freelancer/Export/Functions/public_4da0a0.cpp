#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4da0a0);

#define public_4da0b6 _public_4da0b6

PROC_DECLARE(0x4da0a0, internal_4da0a0, public_4da0a0);
extern "C" NAKED register_t __cdecl internal_4da0a0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_4da0b6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x52
        rep movsd
        pop esi
        public_4da0b6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x4da0a0)
    }
}

#undef public_4da0b6
