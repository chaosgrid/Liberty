#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e70);

#define public_6612e89 _public_6612e89
#define public_6612e93 _public_6612e93
#define public_6612e97 _public_6612e97
#define public_6612e9c _public_6612e9c
#define public_6612ebf _public_6612ebf

PROC_DECLARE(0x6612e70, internal_6612e70, public_6612e70);
extern "C" NAKED register_t __cdecl internal_6612e70()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push esi
        cmp eax, ecx
        mov esi, edx
        je public_6612e9c
        push edi
        mov edi, dword ptr ds : [ebx]
        public_6612e89 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jge public_6612e93
        mov eax, dword ptr ds : [eax+8]
        jmp public_6612e97
        public_6612e93 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6612e97 : nop
        cmp eax, ecx
        jne public_6612e89
        pop edi
        public_6612e9c : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6612ebf
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jl public_6612ebf
        lea eax, ss:[esp+0x14]
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        public_6612ebf : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6612e70)
    }
}

#undef public_6612e89
#undef public_6612e93
#undef public_6612e97
#undef public_6612e9c
#undef public_6612ebf
