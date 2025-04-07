#include "Server-PCH.h"


#define public_6d55de2 _public_6d55de2

PROC_DECLARE(0x6d55d90, internal_6d55d90, public_6d55d90);
extern "C" NAKED register_t __cdecl internal_6d55d90()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [edx]
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d55de2
        mov esi, dword ptr ds : [public_6d90264]
        dec ecx
        cmp ecx, esi
        jae public_6d55de2
        mov esi, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        push edi
        mov edi, dword ptr ds : [ecx+esi+0x348]
        test edi, edi
        pop edi
        je public_6d55de2
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [public_6d8fb14]
        lea esi, ss:[esp+8]
        push esi
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x168]
        xor eax, eax
        public_6d55de2 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d55d90)
    }
}

#undef public_6d55de2
