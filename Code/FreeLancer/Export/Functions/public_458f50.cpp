#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_458f50);

#define public_458f66 _public_458f66

PROC_DECLARE(0x458f50, internal_458f50, public_458f50);
extern "C" NAKED register_t __cdecl internal_458f50()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_458f66
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 5
        rep movsd
        pop esi
        public_458f66 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x458f50)
    }
}

#undef public_458f66
