#include "THORN-PCH.h"


#define public_6f33bcf _public_6f33bcf
#define public_6f33be6 _public_6f33be6

PROC_DECLARE(0x6f33bc0, internal_6f33bc0, public_6f33bc0);
extern "C" NAKED register_t __cdecl internal_6f33bc0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x3C]
        test eax, eax
        jbe public_6f33bcf
        dec eax
        mov dword ptr ds : [ecx+0x3C], eax
        public_6f33bcf : nop
        mov eax, dword ptr ds : [ecx+0x3C]
        test eax, eax
        jne public_6f33be6
        mov dword ptr ds : [ecx+0x3C], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x38]
        xor eax, eax
        public_6f33be6 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f33bc0)
    }
}

#undef public_6f33bcf
#undef public_6f33be6
