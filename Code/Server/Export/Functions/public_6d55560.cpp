#include "Server-PCH.h"


#define public_6d555af _public_6d555af

PROC_DECLARE(0x6d55560, internal_6d55560, public_6d55560);
extern "C" NAKED register_t __cdecl internal_6d55560()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [ecx]
        test ecx, ecx
        push esi
        push edi
        mov eax, 0xFFFFFFFE
        jbe public_6d555af
        mov esi, dword ptr ds : [public_6d90264]
        lea edx, ds:[ecx-1]
        cmp edx, esi
        jae public_6d555af
        mov esi, dword ptr ds : [public_6d90260]
        imul edx, 0x418
        mov edi, dword ptr ds : [edx+esi+0x348]
        test edi, edi
        je public_6d555af
        imul ecx, 0x418
        lea edi, ds:[ecx+esi-0xBC]
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, 9
        rep movsd
        xor eax, eax
        public_6d555af : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d55560)
    }
}

#undef public_6d555af
