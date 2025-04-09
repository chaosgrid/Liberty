#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4ec0);

#define public_4b4ed6 _public_4b4ed6

PROC_DECLARE(0x4b4ec0, internal_4b4ec0, public_4b4ec0);
extern "C" NAKED register_t __cdecl internal_4b4ec0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_4b4ed6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 8
        rep movsd
        pop esi
        public_4b4ed6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x4b4ec0)
    }
}

#undef public_4b4ed6
