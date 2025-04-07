#include "Alchemy-PCH.h"


#define public_620f4d2 _public_620f4d2

PROC_DECLARE(0x620f4b0, internal_620f4b0, public_620f4b0);
extern "C" NAKED register_t __cdecl internal_620f4b0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_620f4d2
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x64], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x68], eax
        xor eax, eax
        ret 0xC
        public_620f4d2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x620f4b0)
    }
}

#undef public_620f4d2
