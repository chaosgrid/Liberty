#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85210);

#define public_6d8521a _public_6d8521a

PROC_DECLARE(0x6d85210, internal_6d85210, public_6d85210);
extern "C" NAKED register_t __cdecl internal_6d85210()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6d8521a
        xor eax, eax
        ret 
        public_6d8521a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6d85210)
    }
}

#undef public_6d8521a
