#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6333ea0);

#define public_6333eb8 _public_6333eb8
#define public_6333ed2 _public_6333ed2
#define public_6333ed6 _public_6333ed6
#define public_6333edb _public_6333edb
#define public_6333f0d _public_6333f0d

PROC_DECLARE(0x6333ea0, internal_6333ea0, public_6333ea0);
extern "C" NAKED register_t __cdecl internal_6333ea0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_6333edb
        public_6333eb8 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [esi+0xC]
        push eax
        push ecx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jge public_6333ed2
        mov esi, dword ptr ds : [esi+8]
        jmp public_6333ed6
        public_6333ed2 : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_6333ed6 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_6333eb8
        public_6333edb : nop
        cmp ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6333f0d
        mov edx, dword ptr ds : [ebx+0xC]
        mov eax, dword ptr ss : [ebp]
        push edx
        push eax
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jl public_6333f0d
        pop edi
        lea eax, ss:[esp+0x18]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6333f0d : nop
        mov ecx, dword ptr ds : [edi+4]
        pop edi
        lea eax, ss:[esp+0xC]
        pop esi
        mov dword ptr ss : [esp+8], ecx
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6333ea0)
    }
}

#undef public_6333eb8
#undef public_6333ed2
#undef public_6333ed6
#undef public_6333edb
#undef public_6333f0d
