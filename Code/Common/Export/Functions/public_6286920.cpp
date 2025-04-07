#include "Common-PCH.h"


#define public_6286953 _public_6286953

PROC_DECLARE(0x6286920, internal_6286920, public_6286920);
extern "C" NAKED register_t __cdecl internal_6286920()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0xFC]
        test edx, edx
        je public_6286953
        fld dword ptr ds : [ecx+0x100]
        fcomp dword ptr ds : [edx+8]
        fnstsw ax
        test ah, 1
        jne public_6286953
        fld dword ptr ds : [edx+0x10]
        fadd dword ptr ds : [edx+8]
        fcomp dword ptr ds : [ecx+0x100]
        fnstsw ax
        test ah, 1
        jne public_6286953
        mov eax, 1
        ret 
        public_6286953 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6286920)
    }
}

#undef public_6286953
