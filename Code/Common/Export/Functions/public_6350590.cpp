#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350590);
CLANG_FORWARD_PROC_SYMBOL(public_635d3e0);

#define public_635059c _public_635059c

PROC_DECLARE(0x6350590, internal_6350590, public_6350590);
extern "C" NAKED register_t __cdecl internal_6350590()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx]
        jl public_635059c
        jmp public_635d3e0
        public_635059c : nop
        ret 
        UNREACHABLE_TRAP(0x6350590)
    }
}

#undef public_635059c
