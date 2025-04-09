#include "FreeLancer-PCH.h"


#define public_453658 _public_453658

PROC_DECLARE(0x453640, internal_453640, public_453640);
extern "C" NAKED register_t __cdecl internal_453640()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x58]
        test eax, eax
        je public_453658
        mov ecx, dword ptr ds : [eax+0x14]
        add eax, 0x14
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x1C]
        public_453658 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x453640)
    }
}

#undef public_453658
