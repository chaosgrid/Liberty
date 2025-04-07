#include "Alchemy-PCH.h"


#define public_6232942 _public_6232942

PROC_DECLARE(0x6232920, internal_6232920, public_6232920);
extern "C" NAKED register_t __cdecl internal_6232920()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_6232942
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x64], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x68], eax
        xor eax, eax
        ret 0xC
        public_6232942 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6232920)
    }
}

#undef public_6232942
