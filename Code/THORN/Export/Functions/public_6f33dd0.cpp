#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33dd0);

#define public_6f33de6 _public_6f33de6

PROC_DECLARE(0x6f33dd0, internal_6f33dd0, public_6f33dd0);
extern "C" NAKED register_t __cdecl internal_6f33dd0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6f33de6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 5
        rep movsd
        pop esi
        public_6f33de6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6f33dd0)
    }
}

#undef public_6f33de6
