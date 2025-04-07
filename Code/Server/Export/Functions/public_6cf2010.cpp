#include "Server-PCH.h"


#define public_6cf206a _public_6cf206a
#define public_6cf20c2 _public_6cf20c2
#define public_6cf20cd _public_6cf20cd

PROC_DECLARE(0x6cf2010, internal_6cf2010, public_6cf2010);
extern "C" NAKED register_t __cdecl internal_6cf2010()
{
    __asm
    {
        push ebp
        mov ebp, dword ptr ss : [esp+8]
        test ebp, ebp
        push esi
        push edi
        jbe public_6cf20cd
        mov edx, dword ptr ds : [public_6d90264]
        lea eax, ss:[ebp-1]
        cmp eax, edx
        jae public_6cf20cd
        mov edx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov esi, dword ptr ds : [eax+edx+0x348]
        test esi, esi
        je public_6cf20cd
        mov edi, ebp
        imul edi, 0x418
        mov esi, dword ptr ds : [edi+edx-0x4C]
        test esi, esi
        je public_6cf20c2
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_6cf206a
        push 0
        call dword ptr ds : [public_6d6440c]
        public_6cf206a : nop
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebx
        mov ecx, esi
        call dword ptr ds : [public_6d64410]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d6440c]
        mov edx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [edi+edx-0x34]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edx
        push ebp
        call dword ptr ds : [eax+0x1A0]
        mov edx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [edi+edx-0x34]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push edx
        mov edx, dword ptr ds : [esi+8]
        push edx
        call dword ptr ds : [eax+0x1A0]
        pop ebx
        pop edi
        pop esi
        pop ebp
        ret 8
        public_6cf20c2 : nop
        mov eax, dword ptr ds : [ecx]
        push 2
        push ebp
        call dword ptr ds : [eax+0x140]
        public_6cf20cd : nop
        pop edi
        pop esi
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6cf2010)
    }
}

#undef public_6cf206a
#undef public_6cf20c2
#undef public_6cf20cd
