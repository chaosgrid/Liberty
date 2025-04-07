#include "Server-PCH.h"


#define public_6d565f7 _public_6d565f7

PROC_DECLARE(0x6d565b0, internal_6d565b0, public_6d565b0);
extern "C" NAKED register_t __cdecl internal_6d565b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d565f7
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d565f7
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        push edi
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        pop edi
        je public_6d565f7
        mov eax, dword ptr ss : [esp+0xC]
        imul ecx, 0x418
        mov dword ptr ds : [ecx+esi-0x190], eax
        xor eax, eax
        public_6d565f7 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d565b0)
    }
}

#undef public_6d565f7
