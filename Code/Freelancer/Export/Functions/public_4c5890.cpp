#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5890);

#define public_4c589d _public_4c589d

PROC_DECLARE(0x4c5890, internal_4c5890, public_4c5890);
extern "C" NAKED register_t __cdecl internal_4c5890()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6728cc]
        test ecx, ecx
        jne public_4c589d
        xor eax, eax
        ret 
        public_4c589d : nop
        mov eax, dword ptr ds : [public_6728d0]
        sub eax, ecx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x4c5890)
    }
}

#undef public_4c589d
