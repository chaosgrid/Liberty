#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b2b50);

#define public_4b2b66 _public_4b2b66

PROC_DECLARE(0x4b2b50, internal_4b2b50, public_4b2b50);
extern "C" NAKED register_t __cdecl internal_4b2b50()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_4b2b66
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xB
        rep movsd
        pop esi
        public_4b2b66 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x4b2b50)
    }
}

#undef public_4b2b66
