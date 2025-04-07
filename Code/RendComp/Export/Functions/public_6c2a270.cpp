#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);

#define public_6c2a290 _public_6c2a290
#define public_6c2a29a _public_6c2a29a
#define public_6c2a29e _public_6c2a29e
#define public_6c2a2a3 _public_6c2a2a3
#define public_6c2a2c4 _public_6c2a2c4

PROC_DECLARE(0x6c2a270, internal_6c2a270, public_6c2a270);
extern "C" NAKED register_t __cdecl internal_6c2a270()
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
        je public_6c2a2a3
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6c2a290 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jge public_6c2a29a
        mov eax, dword ptr ds : [eax+8]
        jmp public_6c2a29e
        public_6c2a29a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6c2a29e : nop
        cmp eax, ecx
        jne public_6c2a290
        pop edi
        public_6c2a2a3 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6c2a2c4
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6c2a2c4
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6c2a2c4 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6c2a270)
    }
}

#undef public_6c2a290
#undef public_6c2a29a
#undef public_6c2a29e
#undef public_6c2a2a3
#undef public_6c2a2c4
