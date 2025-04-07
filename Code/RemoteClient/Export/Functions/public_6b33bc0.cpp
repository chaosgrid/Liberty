#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b33bc0);

#define public_6b33bca _public_6b33bca

PROC_DECLARE(0x6b33bc0, internal_6b33bc0, public_6b33bc0);
extern "C" NAKED register_t __cdecl internal_6b33bc0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6b33bca
        xor eax, eax
        ret 
        public_6b33bca : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6b33bc0)
    }
}

#undef public_6b33bca
