#include "Content-PCH.h"


#define public_6f9cfc4 _public_6f9cfc4

PROC_DECLARE(0x6f9cfa0, internal_6f9cfa0, public_6f9cfa0);
extern "C" NAKED register_t __cdecl internal_6f9cfa0()
{
    __asm
    {
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jp public_6f9cfc4
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 0x41
        jp public_6f9cfc4
        mov eax, 1
        ret 4
        public_6f9cfc4 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6f9cfa0)
    }
}

#undef public_6f9cfc4
