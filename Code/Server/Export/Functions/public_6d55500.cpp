#include "Server-PCH.h"


#define public_6d55559 _public_6d55559

PROC_DECLARE(0x6d55500, internal_6d55500, public_6d55500);
extern "C" NAKED register_t __cdecl internal_6d55500()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d55559
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d55559
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        push edi
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        pop edi
        je public_6d55559
        mov eax, dword ptr ss : [esp+0xC]
        imul ecx, 0x418
        lea edx, ds:[ecx+esi-0xC8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        xor eax, eax
        public_6d55559 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d55500)
    }
}

#undef public_6d55559
