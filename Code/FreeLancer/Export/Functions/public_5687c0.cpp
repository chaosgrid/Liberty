#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5687c0);

#define public_5687ce _public_5687ce

PROC_DECLARE(0x5687c0, internal_5687c0, public_5687c0);
extern "C" NAKED register_t __cdecl internal_5687c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        jle public_5687ce
        dec eax
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [ecx+eax*4+4]
        ret 
        public_5687ce : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x5687c0)
    }
}

#undef public_5687ce
