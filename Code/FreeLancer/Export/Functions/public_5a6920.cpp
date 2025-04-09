#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c60e0);
CLANG_FORWARD_PROC_SYMBOL(public_5a6920);

#define public_5a6930 _public_5a6930
#define public_5a693e _public_5a693e

PROC_DECLARE(0x5a6920, internal_5a6920, public_5a6920);
extern "C" NAKED register_t __cdecl internal_5a6920()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_5a693e
        mov edi, edi
        public_5a6930 : nop
        mov ecx, esi
        call public_4c60e0
        add esi, 0x1C
        cmp esi, edi
        jne public_5a6930
        public_5a693e : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x5a6920)
    }
}

#undef public_5a6930
#undef public_5a693e
