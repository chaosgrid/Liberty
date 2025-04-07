#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63487f0);
CLANG_FORWARD_PROC_SYMBOL(public_6348960);
CLANG_FORWARD_PROC_SYMBOL(public_6348aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6348ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6348b80);

#define public_6348ac5 _public_6348ac5

PROC_DECLARE(0x6348aa0, internal_6348aa0, public_6348aa0);
extern "C" NAKED register_t __cdecl internal_6348aa0()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_6348ad0
        mov edi, eax
        test edi, edi
        je public_6348ac5
        mov ecx, esi
        call public_6348b80
        push edi
        mov ecx, esi
        call public_6348960
        mov ecx, esi
        call public_63487f0
        public_6348ac5 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6348aa0)
    }
}

#undef public_6348ac5
