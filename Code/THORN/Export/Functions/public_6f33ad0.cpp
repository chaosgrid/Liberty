#include "THORN-PCH.h"


#define public_6f33adf _public_6f33adf
#define public_6f33af6 _public_6f33af6

PROC_DECLARE(0x6f33ad0, internal_6f33ad0, public_6f33ad0);
extern "C" NAKED register_t __cdecl internal_6f33ad0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x3C]
        test eax, eax
        jbe public_6f33adf
        dec eax
        mov dword ptr ds : [ecx+0x3C], eax
        public_6f33adf : nop
        mov eax, dword ptr ds : [ecx+0x3C]
        test eax, eax
        jne public_6f33af6
        mov dword ptr ds : [ecx+0x3C], 1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x38]
        xor eax, eax
        public_6f33af6 : nop
        ret 4
        UNREACHABLE_TRAP(0x6f33ad0)
    }
}

#undef public_6f33adf
#undef public_6f33af6
