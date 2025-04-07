#include "Alchemy-PCH.h"


#define public_620840d _public_620840d
#define public_6208419 _public_6208419

PROC_DECLARE(0x62083e0, internal_62083e0, public_62083e0);
extern "C" NAKED register_t __cdecl internal_62083e0()
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
        je public_6208419
        test eax, eax
        je public_620840d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_620840d : nop
        test edi, edi
        mov dword ptr ds : [esi], edi
        je public_6208419
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6208419 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x62083e0)
    }
}

#undef public_620840d
#undef public_6208419
