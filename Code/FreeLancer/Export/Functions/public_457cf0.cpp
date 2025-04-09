#include "FreeLancer-PCH.h"


#define public_457d08 _public_457d08

PROC_DECLARE(0x457cf0, internal_457cf0, public_457cf0);
extern "C" NAKED register_t __cdecl internal_457cf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x68]
        test eax, eax
        je public_457d08
        mov ecx, dword ptr ds : [eax+4]
        add eax, 4
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x24]
        public_457d08 : nop
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x457cf0)
    }
}

#undef public_457d08
