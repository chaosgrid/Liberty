#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5aadb0);

#define public_5aadb3 _public_5aadb3
#define public_5aadbf _public_5aadbf
#define public_5aadc1 _public_5aadc1
#define public_5aadd6 _public_5aadd6

PROC_DECLARE(0x5aadb0, internal_5aadb0, public_5aadb0);
extern "C" NAKED register_t __cdecl internal_5aadb0()
{
    __asm
    {
        xor eax, eax
        push ebx
        public_5aadb3 : nop
        test eax, eax
        jne public_5aadbf
        mov eax, dword ptr ds : [ecx+0x1B8]
        jmp public_5aadc1
        public_5aadbf : nop
        mov eax, dword ptr ds : [eax]
        public_5aadc1 : nop
        test eax, eax
        je public_5aadd6
        mov edx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [edx+0x201]
        test bl, bl
        je public_5aadb3
        mov eax, edx
        pop ebx
        ret 
        public_5aadd6 : nop
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x5aadb0)
    }
}

#undef public_5aadb3
#undef public_5aadbf
#undef public_5aadc1
#undef public_5aadd6
