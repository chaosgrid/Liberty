#include "Server-PCH.h"


#define public_6cf221e _public_6cf221e
#define public_6cf2259 _public_6cf2259
#define public_6cf22a1 _public_6cf22a1
#define public_6cf22a7 _public_6cf22a7

PROC_DECLARE(0x6cf21c0, internal_6cf21c0, public_6cf21c0);
extern "C" NAKED register_t __cdecl internal_6cf21c0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push ebx
        push esi
        push edi
        jbe public_6cf22a1
        mov esi, dword ptr ds : [public_6d90264]
        lea eax, ds:[edx-1]
        cmp eax, esi
        jae public_6cf22a1
        mov esi, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edi, dword ptr ds : [eax+esi+0x348]
        test edi, edi
        je public_6cf22a1
        mov ebx, edx
        imul ebx, 0x418
        mov edi, dword ptr ds : [ebx+esi-0x4C]
        test edi, edi
        je public_6cf22a7
        mov ecx, dword ptr ds : [edi+0xC]
        test ecx, ecx
        je public_6cf221e
        push 0
        call dword ptr ds : [public_6d6440c]
        public_6cf221e : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [esi+4]
        push ebp
        mov dword ptr ss : [esp+0x18], eax
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x14]
        push edx
        push eax
        lea ebp, ds:[edi+0x10]
        push ecx
        mov ecx, ebp
        call dword ptr ds : [public_6d64404]
        test eax, eax
        je public_6cf2259
        mov ecx, dword ptr ds : [esi+0x14]
        xor edx, edx
        mov dx, word ptr ds : [eax+2]
        push ecx
        mov ecx, ebp
        push edx
        call dword ptr ds : [public_6d64400]
        public_6cf2259 : nop
        push 0
        mov ecx, edi
        call dword ptr ds : [public_6d6440c]
        mov edx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [ebx+edx-0x34]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        call dword ptr ds : [eax+0x1A8]
        mov edx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [ebx+edx-0x34]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push esi
        push edx
        mov edx, dword ptr ds : [edi+8]
        push edx
        call dword ptr ds : [eax+0x1A8]
        pop ebp
        public_6cf22a1 : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6cf22a7 : nop
        mov eax, dword ptr ds : [ecx]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ss : [esp+8], 2
        mov dword ptr ss : [esp+4], edx
        jmp dword ptr ds : [eax+0x140]
        UNREACHABLE_TRAP(0x6cf21c0)
    }
}

#undef public_6cf221e
#undef public_6cf2259
#undef public_6cf22a1
#undef public_6cf22a7
