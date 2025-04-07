#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2da0);

#define public_6ed2db6 _public_6ed2db6

PROC_DECLARE(0x6ed2da0, internal_6ed2da0, public_6ed2da0);
extern "C" NAKED register_t __cdecl internal_6ed2da0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6ed2db6
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0x24
        rep movsd
        pop esi
        public_6ed2db6 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ed2da0)
    }
}

#undef public_6ed2db6
