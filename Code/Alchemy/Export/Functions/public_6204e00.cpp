#include "Alchemy-PCH.h"


#define public_6204e22 _public_6204e22

PROC_DECLARE(0x6204e00, internal_6204e00, public_6204e00);
extern "C" NAKED register_t __cdecl internal_6204e00()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_6204e22
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x64], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x68], eax
        xor eax, eax
        ret 0xC
        public_6204e22 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6204e00)
    }
}

#undef public_6204e22
