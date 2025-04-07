#include "Server-PCH.h"


#define public_6d564dc _public_6d564dc
#define public_6d564ef _public_6d564ef

PROC_DECLARE(0x6d56460, internal_6d56460, public_6d56460);
extern "C" NAKED register_t __cdecl internal_6d56460()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        test esi, esi
        jbe public_6d564ef
        mov ecx, dword ptr ds : [public_6d90264]
        lea eax, ds:[esi-1]
        cmp eax, ecx
        jae public_6d564ef
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edx, dword ptr ds : [eax+ecx+0x348]
        test edx, edx
        je public_6d564ef
        mov eax, esi
        imul eax, 0x418
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+ecx-0x10], edi
        mov ecx, dword ptr ds : [public_6d90260]
        mov dword ptr ds : [eax+ecx-0xC], ebx
        mov cl, byte ptr ss : [esp+0x1C]
        test cl, cl
        je public_6d564dc
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push ebp
        mov ebp, dword ptr ds : [public_6d90260]
        mov eax, dword ptr ds : [eax+ebp-0xD0]
        push eax
        call dword ptr ds : [edx+0x128]
        pop ebp
        public_6d564dc : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push edi
        push esi
        call dword ptr ds : [edx+0x1C8]
        pop edi
        pop ebx
        public_6d564ef : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d56460)
    }
}

#undef public_6d564dc
#undef public_6d564ef
