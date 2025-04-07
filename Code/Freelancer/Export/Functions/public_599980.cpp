#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_599980);

#define public_59998b _public_59998b
#define public_5999a1 _public_5999a1

PROC_DECLARE(0x599980, internal_599980, public_599980);
extern "C" NAKED register_t __cdecl internal_599980()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_59998b
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_59998b : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_5999a1
        mov dword ptr ds : [ecx+4], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        xor eax, eax
        public_5999a1 : nop
        ret 
        UNREACHABLE_TRAP(0x599980)
    }
}

#undef public_59998b
#undef public_5999a1
