#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f7b110 _public_6f7b110
#define public_6f7b11a _public_6f7b11a
#define public_6f7b11e _public_6f7b11e
#define public_6f7b123 _public_6f7b123
#define public_6f7b144 _public_6f7b144

PROC_DECLARE(0x6f7b0f0, internal_6f7b0f0, public_6f7b0f0);
extern "C" NAKED register_t __cdecl internal_6f7b0f0()
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
        je public_6f7b123
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6f7b110 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_6f7b11a
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f7b11e
        public_6f7b11a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6f7b11e : nop
        cmp eax, ecx
        jne public_6f7b110
        pop edi
        public_6f7b123 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6f7b144
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f7b144
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6f7b144 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f7b0f0)
    }
}

#undef public_6f7b110
#undef public_6f7b11a
#undef public_6f7b11e
#undef public_6f7b123
#undef public_6f7b144
