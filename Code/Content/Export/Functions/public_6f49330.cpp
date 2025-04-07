#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f49330);

#define public_6f4933d _public_6f4933d

PROC_DECLARE(0x6f49330, internal_6f49330, public_6f49330);
extern "C" NAKED register_t __cdecl internal_6f49330()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xB4]
        test edx, edx
        jne public_6f4933d
        xor eax, eax
        ret 
        public_6f4933d : nop
        mov eax, dword ptr ds : [ecx+0xB8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6f49330)
    }
}

#undef public_6f4933d
