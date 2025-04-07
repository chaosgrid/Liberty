#include "Alchemy-PCH.h"


#define public_620f4a2 _public_620f4a2

PROC_DECLARE(0x620f480, internal_620f480, public_620f480);
extern "C" NAKED register_t __cdecl internal_620f480()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x1506EB6C
        jne public_620f4a2
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x64]
        mov dword ptr ds : [ecx], edx
        mov eax, dword ptr ds : [eax+0x68]
        mov dword ptr ds : [ecx+4], eax
        xor eax, eax
        ret 0xC
        public_620f4a2 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x620f480)
    }
}

#undef public_620f4a2
