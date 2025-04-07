#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3d810);

#define public_6f3d830 _public_6f3d830
#define public_6f3d83a _public_6f3d83a
#define public_6f3d83e _public_6f3d83e
#define public_6f3d843 _public_6f3d843
#define public_6f3d864 _public_6f3d864

PROC_DECLARE(0x6f3d810, internal_6f3d810, public_6f3d810);
extern "C" NAKED register_t __cdecl internal_6f3d810()
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
        je public_6f3d843
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6f3d830 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_6f3d83a
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f3d83e
        public_6f3d83a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6f3d83e : nop
        cmp eax, ecx
        jne public_6f3d830
        pop edi
        public_6f3d843 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6f3d864
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6f3d864
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6f3d864 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3d810)
    }
}

#undef public_6f3d830
#undef public_6f3d83a
#undef public_6f3d83e
#undef public_6f3d843
#undef public_6f3d864
