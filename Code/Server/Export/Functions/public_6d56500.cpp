#include "Server-PCH.h"


#define public_6d5653e _public_6d5653e

PROC_DECLARE(0x6d56500, internal_6d56500, public_6d56500);
extern "C" NAKED register_t __cdecl internal_6d56500()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        test ecx, ecx
        jbe public_6d5653e
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ds:[ecx-1]
        cmp eax, edx
        jae public_6d5653e
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        push esi
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        pop esi
        je public_6d5653e
        imul ecx, 0x418
        mov eax, dword ptr ds : [ecx+edx-0x10]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        public_6d5653e : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d56500)
    }
}

#undef public_6d5653e
