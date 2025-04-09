#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40d760);

#define public_40d76a _public_40d76a

PROC_DECLARE(0x40d760, internal_40d760, public_40d760);
extern "C" NAKED register_t __cdecl internal_40d760()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_40d76a
        xor eax, eax
        ret 
        public_40d76a : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 3
        ret 
        UNREACHABLE_TRAP(0x40d760)
    }
}

#undef public_40d76a
