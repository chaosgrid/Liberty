#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec6a10);

#define public_6ec6a26 _public_6ec6a26

PROC_DECLARE(0x6ec6a10, internal_6ec6a10, public_6ec6a10);
extern "C" NAKED register_t __cdecl internal_6ec6a10()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6ec6a26
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xE
        rep movsd
        pop esi
        public_6ec6a26 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ec6a10)
    }
}

#undef public_6ec6a26
