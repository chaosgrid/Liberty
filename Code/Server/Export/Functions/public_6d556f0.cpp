#include "Server-PCH.h"


#define public_6d55754 _public_6d55754

PROC_DECLARE(0x6d556f0, internal_6d556f0, public_6d556f0);
extern "C" NAKED register_t __cdecl internal_6d556f0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d55754
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d55754
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        push edi
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        pop edi
        je public_6d55754
        mov edx, dword ptr ss : [esp+0xC]
        imul ecx, 0x418
        lea eax, ds:[ecx+esi-0x418]
        mov dword ptr ds : [eax+0x338], edx
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov esi, dword ptr ds : [ecx]
        push edx
        add eax, 0x348
        push eax
        call dword ptr ds : [esi+0x13C]
        xor eax, eax
        public_6d55754 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d556f0)
    }
}

#undef public_6d55754
