#include "Alchemy-PCH.h"


#define public_6232912 _public_6232912

PROC_DECLARE(0x62328f0, internal_62328f0, public_62328f0);
extern "C" NAKED register_t __cdecl internal_62328f0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_6232912
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x64]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+0x68]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        ret 0xC
        public_6232912 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x62328f0)
    }
}

#undef public_6232912
