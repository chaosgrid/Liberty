#include "Alchemy-PCH.h"


#define public_62073ed _public_62073ed
#define public_62073f9 _public_62073f9

PROC_DECLARE(0x62073c0, internal_62073c0, public_62073c0);
extern "C" NAKED register_t __cdecl internal_62073c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov ecx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [ecx+edx*8+4]
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ecx+edx*8+4]
        cmp eax, edi
        je public_62073f9
        test eax, eax
        je public_62073ed
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_62073ed : nop
        test edi, edi
        mov dword ptr ds : [esi], edi
        je public_62073f9
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_62073f9 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62073c0)
    }
}

#undef public_62073ed
#undef public_62073f9
