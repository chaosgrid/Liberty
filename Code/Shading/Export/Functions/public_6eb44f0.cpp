#include "Shading-PCH.h"


#define public_6eb4501 _public_6eb4501

PROC_DECLARE(0x6eb44f0, internal_6eb44f0, public_6eb44f0);
extern "C" NAKED register_t __cdecl internal_6eb44f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0xC]
        test eax, eax
        jne public_6eb4501
        or eax, 0xFFFFFFFF
        ret 0x20
        public_6eb4501 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x28]
        UNREACHABLE_TRAP(0x6eb44f0)
    }
}

#undef public_6eb4501
