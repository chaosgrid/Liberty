#include "Freelancer-PCH.h"


#define public_457bf8 _public_457bf8

PROC_DECLARE(0x457be0, internal_457be0, public_457be0);
extern "C" NAKED register_t __cdecl internal_457be0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x60]
        test eax, eax
        je public_457bf8
        mov ecx, dword ptr ds : [eax+0xC]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x10]
        public_457bf8 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x457be0)
    }
}

#undef public_457bf8
