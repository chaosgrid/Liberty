#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb4b0);

#define public_62bb4c6 _public_62bb4c6

PROC_DECLARE(0x62bb4b0, internal_62bb4b0, public_62bb4b0);
extern "C" NAKED register_t __cdecl internal_62bb4b0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_62bb4c6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x10
        rep movsd
        pop esi
        public_62bb4c6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x62bb4b0)
    }
}

#undef public_62bb4c6
