#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);

#define public_6d15d30 _public_6d15d30
#define public_6d15d3a _public_6d15d3a
#define public_6d15d3e _public_6d15d3e
#define public_6d15d43 _public_6d15d43
#define public_6d15d64 _public_6d15d64

PROC_DECLARE(0x6d15d10, internal_6d15d10, public_6d15d10);
extern "C" NAKED register_t __cdecl internal_6d15d10()
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
        je public_6d15d43
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6d15d30 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_6d15d3a
        mov eax, dword ptr ds : [eax+8]
        jmp public_6d15d3e
        public_6d15d3a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6d15d3e : nop
        cmp eax, ecx
        jne public_6d15d30
        pop edi
        public_6d15d43 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6d15d64
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6d15d64
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6d15d64 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d15d10)
    }
}

#undef public_6d15d30
#undef public_6d15d3a
#undef public_6d15d3e
#undef public_6d15d43
#undef public_6d15d64
