#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eeca70);

#define public_6eeca90 _public_6eeca90
#define public_6eeca9a _public_6eeca9a
#define public_6eeca9e _public_6eeca9e
#define public_6eecaa3 _public_6eecaa3
#define public_6eecac4 _public_6eecac4

PROC_DECLARE(0x6eeca70, internal_6eeca70, public_6eeca70);
extern "C" NAKED register_t __cdecl internal_6eeca70()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, edx
        je public_6eecaa3
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6eeca90 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jge public_6eeca9a
        mov eax, dword ptr ds : [eax+8]
        jmp public_6eeca9e
        public_6eeca9a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6eeca9e : nop
        cmp eax, ecx
        jne public_6eeca90
        pop edi
        public_6eecaa3 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6eecac4
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6eecac4
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6eecac4 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6eeca70)
    }
}

#undef public_6eeca90
#undef public_6eeca9a
#undef public_6eeca9e
#undef public_6eecaa3
#undef public_6eecac4
