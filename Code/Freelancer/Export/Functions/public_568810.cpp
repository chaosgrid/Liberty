#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_568810);

#define public_568824 _public_568824

PROC_DECLARE(0x568810, internal_568810, public_568810);
extern "C" NAKED register_t __cdecl internal_568810()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        jle public_568824
        dec eax
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [ecx+eax*4+4]
        push eax
        call dword ptr ds : [public_5c6000]
        public_568824 : nop
        ret 
        UNREACHABLE_TRAP(0x568810)
    }
}

#undef public_568824
