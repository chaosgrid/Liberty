#include "Alchemy-PCH.h"


#define public_6204ca2 _public_6204ca2

PROC_DECLARE(0x6204c80, internal_6204c80, public_6204c80);
extern "C" NAKED register_t __cdecl internal_6204c80()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x48767E8
        jne public_6204ca2
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x70]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6204ca2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6204c80)
    }
}

#undef public_6204ca2
