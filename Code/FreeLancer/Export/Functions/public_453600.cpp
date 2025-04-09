#include "FreeLancer-PCH.h"


#define public_453618 _public_453618

PROC_DECLARE(0x453600, internal_453600, public_453600);
extern "C" NAKED register_t __cdecl internal_453600()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x58]
        test eax, eax
        je public_453618
        mov ecx, dword ptr ds : [eax+0x14]
        add eax, 0x14
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x18]
        public_453618 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x453600)
    }
}

#undef public_453618
