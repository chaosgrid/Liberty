#include "Alchemy-PCH.h"


#define public_622bb02 _public_622bb02

PROC_DECLARE(0x622bae0, internal_622bae0, public_622bae0);
extern "C" NAKED register_t __cdecl internal_622bae0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_622bb02
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx+0x64], edx
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+0x68], eax
        xor eax, eax
        ret 0xC
        public_622bb02 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x622bae0)
    }
}

#undef public_622bb02
