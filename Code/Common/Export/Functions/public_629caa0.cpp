#include "Common-PCH.h"


#define public_629cac5 _public_629cac5

PROC_DECLARE(0x629caa0, internal_629caa0, public_629caa0);
extern "C" NAKED register_t __cdecl internal_629caa0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x7C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_629cac5
        mov edx, dword ptr ss : [esp+4]
        xor eax, eax
        mov dword ptr ds : [ecx+0x58], eax
        mov dword ptr ds : [ecx+0x5C], eax
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], edx
        jmp dword ptr ds : [eax+0x40]
        public_629cac5 : nop
        ret 4
        UNREACHABLE_TRAP(0x629caa0)
    }
}

#undef public_629cac5
