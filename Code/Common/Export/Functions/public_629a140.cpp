#include "Common-PCH.h"


#define public_629a16e _public_629a16e

PROC_DECLARE(0x629a140, internal_629a140, public_629a140);
extern "C" NAKED register_t __cdecl internal_629a140()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax+0x198]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp], edx
        call dword ptr ds : [eax+0x9C]
        fsubr dword ptr ss : [esp]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_629a16e
        mov eax, 1
        pop ecx
        ret 
        public_629a16e : nop
        xor eax, eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x629a140)
    }
}

#undef public_629a16e
