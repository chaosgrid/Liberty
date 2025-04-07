#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3150);

#define public_6ed3166 _public_6ed3166

PROC_DECLARE(0x6ed3150, internal_6ed3150, public_6ed3150);
extern "C" NAKED register_t __cdecl internal_6ed3150()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6ed3166
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x14
        rep movsd
        pop esi
        public_6ed3166 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ed3150)
    }
}

#undef public_6ed3166
