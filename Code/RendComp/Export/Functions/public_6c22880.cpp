#include "RendComp-PCH.h"


#define public_6c2289d _public_6c2289d
#define public_6c228cc _public_6c228cc
#define public_6c228e2 _public_6c228e2
#define public_6c2290c _public_6c2290c
#define public_6c22914 _public_6c22914
#define public_6c22951 _public_6c22951

PROC_DECLARE(0x6c22880, internal_6c22880, public_6c22880);
extern "C" NAKED register_t __cdecl internal_6c22880()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        mov ebx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ds : [ebx+0x1E8]
        cmp eax, dword ptr ds : [ebx+0x14]
        jne public_6c2289d
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x40
        ret 8
        public_6c2289d : nop
        mov eax, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        test eax, eax
        push esi
        push edi
        je public_6c228cc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [ebx+0x1E8]
        mov esi, dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        test eax, eax
        je public_6c228cc
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6c228cc : nop
        mov edx, dword ptr ds : [ebx+0x1E8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+4]
        test ecx, ecx
        je public_6c228e2
        mov dword ptr ds : [eax+4], 0
        public_6c228e2 : nop
        mov edi, dword ptr ss : [esp+0x54]
        test edi, edi
        je public_6c22951
        mov eax, dword ptr ds : [ebx+0x1E8]
        mov esi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+8]
        add esi, 8
        cmp eax, edi
        je public_6c22914
        test eax, eax
        je public_6c2290c
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi], 0
        public_6c2290c : nop
        mov dword ptr ds : [esi], edi
        mov edx, dword ptr ds : [edi]
        push edi
        call dword ptr ds : [edx+4]
        public_6c22914 : nop
        mov eax, dword ptr ds : [ebx+0x1E8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [edi]
        push 0x40
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        call dword ptr ds : [eax+0x30]
        test eax, eax
        jne public_6c22951
        mov edx, dword ptr ds : [ebx+0x1E8]
        mov esi, dword ptr ds : [edx]
        lea eax, ss:[esp+0xC]
        push eax
        add esi, 4
        call dword ptr ds : [public_6c36008]
        add esp, 4
        mov dword ptr ds : [esi], eax
        public_6c22951 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x6c22880)
    }
}

#undef public_6c2289d
#undef public_6c228cc
#undef public_6c228e2
#undef public_6c2290c
#undef public_6c22914
#undef public_6c22951
