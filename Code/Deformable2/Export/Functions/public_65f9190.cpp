#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9190);

#define public_65f919a _public_65f919a

PROC_DECLARE(0x65f9190, internal_65f9190, public_65f9190);
extern "C" NAKED register_t __cdecl internal_65f9190()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_65f919a
        xor eax, eax
        ret 
        public_65f919a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x65f9190)
    }
}

#undef public_65f919a
