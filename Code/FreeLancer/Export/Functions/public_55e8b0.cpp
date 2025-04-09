#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_55e8b0);

#define public_55e8c6 _public_55e8c6

PROC_DECLARE(0x55e8b0, internal_55e8b0, public_55e8b0);
extern "C" NAKED register_t __cdecl internal_55e8b0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_55e8c6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 7
        rep movsd
        pop esi
        public_55e8c6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x55e8b0)
    }
}

#undef public_55e8c6
