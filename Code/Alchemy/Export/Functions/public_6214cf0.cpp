#include "Alchemy-PCH.h"


#define public_6214d1a _public_6214d1a

PROC_DECLARE(0x6214cf0, internal_6214cf0, public_6214cf0);
extern "C" NAKED register_t __cdecl internal_6214cf0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_625554c
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_6214d1a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_6214d1a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6214cf0)
    }
}

#undef public_6214d1a
