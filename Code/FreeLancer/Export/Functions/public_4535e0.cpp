#include "FreeLancer-PCH.h"


#define public_4535f8 _public_4535f8

PROC_DECLARE(0x4535e0, internal_4535e0, public_4535e0);
extern "C" NAKED register_t __cdecl internal_4535e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x58]
        test eax, eax
        je public_4535f8
        mov ecx, dword ptr ds : [eax+0x14]
        add eax, 0x14
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x10]
        public_4535f8 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x4535e0)
    }
}

#undef public_4535f8
