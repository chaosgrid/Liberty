#include "Server-PCH.h"


#define public_6cf213a _public_6cf213a
#define public_6cf219d _public_6cf219d
#define public_6cf21a3 _public_6cf21a3

PROC_DECLARE(0x6cf20e0, internal_6cf20e0, public_6cf20e0);
extern "C" NAKED register_t __cdecl internal_6cf20e0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        push ebx
        push esi
        push edi
        jbe public_6cf219d
        mov esi, dword ptr ds : [public_6d90264]
        lea eax, ds:[edx-1]
        cmp eax, esi
        jae public_6cf219d
        mov esi, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov edi, dword ptr ds : [eax+esi+0x348]
        test edi, edi
        je public_6cf219d
        mov ebx, edx
        imul ebx, 0x418
        mov esi, dword ptr ds : [ebx+esi-0x4C]
        test esi, esi
        je public_6cf21a3
        mov ecx, dword ptr ds : [esi+0xC]
        test ecx, ecx
        je public_6cf213a
        push 0
        call dword ptr ds : [public_6d6440c]
        public_6cf213a : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+4]
        push eax
        call dword ptr ds : [public_6d64418]
        add esp, 4
        lea ecx, ds:[esi+0x10]
        push eax
        push edi
        call dword ptr ds : [public_6d64414]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d6440c]
        mov edx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [ebx+edx-0x34]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edi
        push edx
        mov edx, dword ptr ss : [esp+0x18]
        push edx
        call dword ptr ds : [eax+0x1A4]
        mov edx, dword ptr ds : [public_6d90260]
        mov edx, dword ptr ds : [ebx+edx-0x34]
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov eax, dword ptr ds : [ecx]
        push edi
        push edx
        mov edx, dword ptr ds : [esi+8]
        push edx
        call dword ptr ds : [eax+0x1A4]
        public_6cf219d : nop
        pop edi
        pop esi
        pop ebx
        ret 8
        public_6cf21a3 : nop
        mov eax, dword ptr ds : [ecx]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ss : [esp+8], 2
        mov dword ptr ss : [esp+4], edx
        jmp dword ptr ds : [eax+0x140]
        UNREACHABLE_TRAP(0x6cf20e0)
    }
}

#undef public_6cf213a
#undef public_6cf219d
#undef public_6cf21a3
