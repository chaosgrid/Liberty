#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316aa0);

#define public_6316aaa _public_6316aaa

PROC_DECLARE(0x6316aa0, internal_6316aa0, public_6316aa0);
extern "C" NAKED register_t __cdecl internal_6316aa0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6316aaa
        xor eax, eax
        ret 
        public_6316aaa : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x6316aa0)
    }
}

#undef public_6316aaa
