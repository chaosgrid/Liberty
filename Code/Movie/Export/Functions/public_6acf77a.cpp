#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6acf77a);

#define public_6acf79c _public_6acf79c

PROC_DECLARE(0x6acf77a, internal_6acf77a, public_6acf77a);
extern "C" NAKED register_t __cdecl internal_6acf77a()
{
    __asm
    {
        xor eax, eax
        mov ecx, dword ptr fs : [0]
        cmp dword ptr ds : [ecx+4], offset _public_6acf6f0
        jne public_6acf79c
        mov edx, dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [edx+0xC]
        cmp dword ptr ds : [ecx+8], edx
        jne public_6acf79c
        mov eax, 1
        public_6acf79c : nop
        ret 
        UNREACHABLE_TRAP(0x6acf77a)
    }
}

#undef public_6acf79c
