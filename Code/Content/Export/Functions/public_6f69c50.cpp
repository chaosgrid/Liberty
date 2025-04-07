#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f69c50);

#define public_6f69c70 _public_6f69c70
#define public_6f69c7b _public_6f69c7b
#define public_6f69c7e _public_6f69c7e
#define public_6f69c82 _public_6f69c82
#define public_6f69c90 _public_6f69c90
#define public_6f69c9a _public_6f69c9a
#define public_6f69c9e _public_6f69c9e
#define public_6f69ca2 _public_6f69ca2

PROC_DECLARE(0x6f69c50, internal_6f69c50, public_6f69c50);
extern "C" NAKED register_t __cdecl internal_6f69c50()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ds : [edx+4]
        mov eax, esi
        cmp eax, ecx
        push edi
        mov ebx, edx
        je public_6f69c82
        mov edi, dword ptr ss : [ebp]
        lea esp, ss:[esp]
        public_6f69c70 : nop
        cmp edi, dword ptr ds : [eax+0xC]
        jae public_6f69c7b
        mov ebx, eax
        mov eax, dword ptr ds : [eax]
        jmp public_6f69c7e
        public_6f69c7b : nop
        mov eax, dword ptr ds : [eax+8]
        public_6f69c7e : nop
        cmp eax, ecx
        jne public_6f69c70
        public_6f69c82 : nop
        mov eax, esi
        cmp eax, ecx
        je public_6f69ca2
        mov esi, dword ptr ss : [ebp]
        nop 
        lea esp, ss:[esp]
        public_6f69c90 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_6f69c9a
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f69c9e
        public_6f69c9a : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_6f69c9e : nop
        cmp eax, ecx
        jne public_6f69c90
        public_6f69ca2 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], edx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f69c50)
    }
}

#undef public_6f69c70
#undef public_6f69c7b
#undef public_6f69c7e
#undef public_6f69c82
#undef public_6f69c90
#undef public_6f69c9a
#undef public_6f69c9e
#undef public_6f69ca2
