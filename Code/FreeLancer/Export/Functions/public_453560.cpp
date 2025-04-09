#include "FreeLancer-PCH.h"


#define public_453578 _public_453578

PROC_DECLARE(0x453560, internal_453560, public_453560);
extern "C" NAKED register_t __cdecl internal_453560()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x60]
        test eax, eax
        je public_453578
        mov ecx, dword ptr ds : [eax+0xC]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x14]
        public_453578 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x453560)
    }
}

#undef public_453578
