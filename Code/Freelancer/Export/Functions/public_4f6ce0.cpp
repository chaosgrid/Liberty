#include "Freelancer-PCH.h"


#define public_4f6cef _public_4f6cef
#define public_4f6d09 _public_4f6d09

PROC_DECLARE(0x4f6ce0, internal_4f6ce0, public_4f6ce0);
extern "C" NAKED register_t __cdecl internal_4f6ce0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        jbe public_4f6cef
        dec eax
        mov dword ptr ds : [ecx+0x14], eax
        public_4f6cef : nop
        mov eax, dword ptr ds : [ecx+0x14]
        test eax, eax
        jne public_4f6d09
        mov dword ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [ecx+4]
        add ecx, 4
        push 1
        call dword ptr ds : [eax]
        xor eax, eax
        public_4f6d09 : nop
        ret 4
        UNREACHABLE_TRAP(0x4f6ce0)
    }
}

#undef public_4f6cef
#undef public_4f6d09
