#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410ec0);

#define public_410ee6 _public_410ee6

PROC_DECLARE(0x410ec0, internal_410ec0, public_410ec0);
extern "C" NAKED register_t __cdecl internal_410ec0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_610588]
        test eax, eax
        jne public_410ee6
        test byte ptr ds : [ecx+0xB4], 4
        je public_410ee6
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        add ecx, 0xC
        push ecx
        push eax
        call dword ptr ds : [edx+0x12C]
        public_410ee6 : nop
        ret 
        UNREACHABLE_TRAP(0x410ec0)
    }
}

#undef public_410ee6
