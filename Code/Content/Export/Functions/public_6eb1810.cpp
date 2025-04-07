#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1810);

#define public_6eb1826 _public_6eb1826

PROC_DECLARE(0x6eb1810, internal_6eb1810, public_6eb1810);
extern "C" NAKED register_t __cdecl internal_6eb1810()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+8]
        test edi, edi
        je public_6eb1826
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 0xA
        rep movsd
        pop esi
        public_6eb1826 : nop
        pop edi
        ret 
        UNREACHABLE_TRAP(0x6eb1810)
    }
}

#undef public_6eb1826
