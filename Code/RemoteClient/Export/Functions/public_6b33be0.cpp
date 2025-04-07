#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b33be0);

#define public_6b33bea _public_6b33bea

PROC_DECLARE(0x6b33be0, internal_6b33be0, public_6b33be0);
extern "C" NAKED register_t __cdecl internal_6b33be0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6b33bea
        xor eax, eax
        ret 
        public_6b33bea : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6b33be0)
    }
}

#undef public_6b33bea
