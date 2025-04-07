#include "EngBase-PCH.h"


#define public_661d14e _public_661d14e

PROC_DECLARE(0x661d130, internal_661d130, public_661d130);
extern "C" NAKED register_t __cdecl internal_661d130()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx+0x14]
        fst dword ptr ds : [ecx+0x14]
        fcomp dword ptr ds : [ecx+0x18]
        fnstsw ax
        and eax, 0x100
        jne public_661d14e
        mov eax, 1
        ret 4
        public_661d14e : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x661d130)
    }
}

#undef public_661d14e
