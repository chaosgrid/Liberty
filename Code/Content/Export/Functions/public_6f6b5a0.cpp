#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6b5a0);

#define public_6f6b5b0 _public_6f6b5b0
#define public_6f6b5c0 _public_6f6b5c0
#define public_6f6b5d0 _public_6f6b5d0
#define public_6f6b5ef _public_6f6b5ef

PROC_DECLARE(0x6f6b5a0, internal_6f6b5a0, public_6f6b5a0);
extern "C" NAKED register_t __cdecl internal_6f6b5a0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        nop 
        public_6f6b5b0 : nop
        mov edi, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi+0x14C]
        cmp dword ptr ds : [edi+0x14C], ecx
        jge public_6f6b5d0
        public_6f6b5c0 : nop
        mov edi, dword ptr ds : [eax+4]
        mov ebx, dword ptr ds : [edi+0x14C]
        add eax, 4
        cmp ebx, ecx
        jl public_6f6b5c0
        public_6f6b5d0 : nop
        mov edi, dword ptr ds : [edx-4]
        mov ebx, dword ptr ds : [edi+0x14C]
        sub edx, 4
        cmp ecx, ebx
        jl public_6f6b5d0
        cmp edx, eax
        jbe public_6f6b5ef
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [eax], edi
        mov dword ptr ds : [edx], ecx
        add eax, 4
        jmp public_6f6b5b0
        public_6f6b5ef : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f6b5a0)
    }
}

#undef public_6f6b5b0
#undef public_6f6b5c0
#undef public_6f6b5d0
#undef public_6f6b5ef
