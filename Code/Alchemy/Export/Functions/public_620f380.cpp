#include "Alchemy-PCH.h"


#define public_620f3a2 _public_620f3a2

PROC_DECLARE(0x620f380, internal_620f380, public_620f380);
extern "C" NAKED register_t __cdecl internal_620f380()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x48767E8
        jne public_620f3a2
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x70]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_620f3a2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x620f380)
    }
}

#undef public_620f3a2
