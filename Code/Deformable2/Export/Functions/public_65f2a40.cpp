#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2a40);

#define public_65f2a60 _public_65f2a60
#define public_65f2a6a _public_65f2a6a
#define public_65f2a6e _public_65f2a6e
#define public_65f2a73 _public_65f2a73
#define public_65f2a94 _public_65f2a94

PROC_DECLARE(0x65f2a40, internal_65f2a40, public_65f2a40);
extern "C" NAKED register_t __cdecl internal_65f2a40()
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
        je public_65f2a73
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_65f2a60 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_65f2a6a
        mov eax, dword ptr ds : [eax+8]
        jmp public_65f2a6e
        public_65f2a6a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_65f2a6e : nop
        cmp eax, ecx
        jne public_65f2a60
        pop edi
        public_65f2a73 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_65f2a94
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_65f2a94
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_65f2a94 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x65f2a40)
    }
}

#undef public_65f2a60
#undef public_65f2a6a
#undef public_65f2a6e
#undef public_65f2a73
#undef public_65f2a94
