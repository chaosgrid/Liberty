#include "Server-PCH.h"


#define public_6d56647 _public_6d56647

PROC_DECLARE(0x6d56600, internal_6d56600, public_6d56600);
extern "C" NAKED register_t __cdecl internal_6d56600()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        push esi
        mov eax, 0xFFFFFFFE
        jbe public_6d56647
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d56647
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        push edi
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        pop edi
        je public_6d56647
        imul ecx, 0x418
        mov dword ptr ds : [ecx+esi-0x134], 0x88DB0044
        xor eax, eax
        public_6d56647 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d56600)
    }
}

#undef public_6d56647
