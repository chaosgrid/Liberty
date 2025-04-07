#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b771e0);

#define public_6b771f6 _public_6b771f6

PROC_DECLARE(0x6b771e0, internal_6b771e0, public_6b771e0);
extern "C" NAKED register_t __cdecl internal_6b771e0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6b771f6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 6
        rep movsd
        pop esi
        public_6b771f6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6b771e0)
    }
}

#undef public_6b771f6
