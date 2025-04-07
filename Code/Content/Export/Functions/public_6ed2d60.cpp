#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2d60);

#define public_6ed2d76 _public_6ed2d76

PROC_DECLARE(0x6ed2d60, internal_6ed2d60, public_6ed2d60);
extern "C" NAKED register_t __cdecl internal_6ed2d60()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6ed2d76
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xD
        rep movsd
        pop esi
        public_6ed2d76 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ed2d60)
    }
}

#undef public_6ed2d76
