#include "Common-PCH.h"


#define public_629fc75 _public_629fc75

PROC_DECLARE(0x629fc50, internal_629fc50, public_629fc50);
extern "C" NAKED register_t __cdecl internal_629fc50()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        mov eax, dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_6399408]
        mov dword ptr ds : [ecx+0x20], eax
        fnstsw ax
        test ah, 0x41
        jp public_629fc75
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], 0
        jmp dword ptr ds : [edx+0x30]
        public_629fc75 : nop
        ret 4
        UNREACHABLE_TRAP(0x629fc50)
    }
}

#undef public_629fc75
