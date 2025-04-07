#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f31010);

#define public_6f3101a _public_6f3101a

PROC_DECLARE(0x6f31010, internal_6f31010, public_6f31010);
extern "C" NAKED register_t __cdecl internal_6f31010()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6f3101a
        xor eax, eax
        ret 
        public_6f3101a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x6f31010)
    }
}

#undef public_6f3101a
