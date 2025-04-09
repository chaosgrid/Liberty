#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41bdc0);

#define public_41bdd6 _public_41bdd6

PROC_DECLARE(0x41bdc0, internal_41bdc0, public_41bdc0);
extern "C" NAKED register_t __cdecl internal_41bdc0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_41bdd6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 6
        rep movsd
        pop esi
        public_41bdd6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x41bdc0)
    }
}

#undef public_41bdd6
