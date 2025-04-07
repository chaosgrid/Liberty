#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da2190);

#define public_6da21a6 _public_6da21a6

PROC_DECLARE(0x6da2190, internal_6da2190, public_6da2190);
extern "C" NAKED register_t __cdecl internal_6da2190()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6da21a6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xE
        rep movsd
        pop esi
        public_6da21a6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6da2190)
    }
}

#undef public_6da21a6
