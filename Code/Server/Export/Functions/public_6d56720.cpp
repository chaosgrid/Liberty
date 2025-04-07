#include "Server-PCH.h"


#define public_6d5676f _public_6d5676f

PROC_DECLARE(0x6d56720, internal_6d56720, public_6d56720);
extern "C" NAKED register_t __cdecl internal_6d56720()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        test esi, esi
        push edi
        mov eax, 0xFFFFFFFC
        je public_6d5676f
        mov edx, dword ptr ss : [esp+0xC]
        test edx, edx
        jbe public_6d5676f
        mov edi, dword ptr ds : [public_6d90264]
        lea ecx, ds:[edx-1]
        cmp ecx, edi
        jae public_6d5676f
        mov edi, dword ptr ds : [public_6d90260]
        imul ecx, 0x418
        push ebx
        mov ebx, dword ptr ds : [ecx+edi+0x348]
        test ebx, ebx
        pop ebx
        je public_6d5676f
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        call dword ptr ds : [eax+0x114]
        xor eax, eax
        public_6d5676f : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d56720)
    }
}

#undef public_6d5676f
