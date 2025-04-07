#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2d80);

#define public_6ed2d96 _public_6ed2d96

PROC_DECLARE(0x6ed2d80, internal_6ed2d80, public_6ed2d80);
extern "C" NAKED register_t __cdecl internal_6ed2d80()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6ed2d96
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xF
        rep movsd
        pop esi
        public_6ed2d96 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6ed2d80)
    }
}

#undef public_6ed2d96
