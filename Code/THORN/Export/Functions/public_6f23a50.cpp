#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23a50);

#define public_6f23a5a _public_6f23a5a

PROC_DECLARE(0x6f23a50, internal_6f23a50, public_6f23a50);
extern "C" NAKED register_t __cdecl internal_6f23a50()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6f23a5a
        xor eax, eax
        ret 
        public_6f23a5a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x6f23a50)
    }
}

#undef public_6f23a5a
