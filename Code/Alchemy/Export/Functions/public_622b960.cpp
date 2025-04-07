#include "Alchemy-PCH.h"


#define public_622b982 _public_622b982

PROC_DECLARE(0x622b960, internal_622b960, public_622b960);
extern "C" NAKED register_t __cdecl internal_622b960()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x48767E8
        jne public_622b982
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x70]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_622b982 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x622b960)
    }
}

#undef public_622b982
