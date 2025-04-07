#include "Alchemy-PCH.h"


#define public_621f6b6 _public_621f6b6

PROC_DECLARE(0x621f6a0, internal_621f6a0, public_621f6a0);
extern "C" NAKED register_t __cdecl internal_621f6a0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+0x18]
        test eax, eax
        je public_621f6b6
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0x40]
        public_621f6b6 : nop
        mov eax, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0x40]
        UNREACHABLE_TRAP(0x621f6a0)
    }
}

#undef public_621f6b6
