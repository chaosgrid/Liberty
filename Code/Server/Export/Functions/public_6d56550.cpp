#include "Server-PCH.h"


#define public_6d565aa _public_6d565aa

PROC_DECLARE(0x6d56550, internal_6d56550, public_6d56550);
extern "C" NAKED register_t __cdecl internal_6d56550()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d565aa
        mov esi, dword ptr ds : [public_6d90264]
        lea ecx, ds:[edx-1]
        cmp ecx, esi
        jae public_6d565aa
        mov esi, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        push edi
        mov edi, dword ptr ds : [ecx+esi+0x348]
        test edi, edi
        pop edi
        je public_6d565aa
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, edx
        imul ecx, 0x418
        push eax
        mov dword ptr ds : [ecx+esi-0x194], eax
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov esi, dword ptr ds : [ecx]
        push edx
        push edx
        call dword ptr ds : [esi+0x1D4]
        xor eax, eax
        public_6d565aa : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d56550)
    }
}

#undef public_6d565aa
