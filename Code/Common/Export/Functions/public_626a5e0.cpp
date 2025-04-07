#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a5e0);

#define public_626a5ea _public_626a5ea

PROC_DECLARE(0x626a5e0, internal_626a5e0, public_626a5e0);
extern "C" NAKED register_t __cdecl internal_626a5e0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_626a5ea
        xor eax, eax
        ret 
        public_626a5ea : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 3
        ret 
        UNREACHABLE_TRAP(0x626a5e0)
    }
}

#undef public_626a5ea
