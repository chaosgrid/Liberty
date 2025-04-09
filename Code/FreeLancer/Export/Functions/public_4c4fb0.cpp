#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4fb0);

#define public_4c4fbf _public_4c4fbf
#define public_4c4fc9 _public_4c4fc9

PROC_DECLARE(0x4c4fb0, internal_4c4fb0, public_4c4fb0);
extern "C" NAKED register_t __cdecl internal_4c4fb0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_672950]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        jne public_4c4fbf
        xor eax, eax
        ret 
        public_4c4fbf : nop
        mov edx, dword ptr ds : [eax+0x14]
        test edx, edx
        jne public_4c4fc9
        xor eax, eax
        ret 
        public_4c4fc9 : nop
        mov ecx, dword ptr ds : [eax+0x18]
        sub ecx, edx
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x4c4fb0)
    }
}

#undef public_4c4fbf
#undef public_4c4fc9
