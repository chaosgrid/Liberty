#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_6323800 _public_6323800
#define public_632380a _public_632380a
#define public_632380e _public_632380e
#define public_6323813 _public_6323813
#define public_6323834 _public_6323834

PROC_DECLARE(0x63237e0, internal_63237e0, public_63237e0);
extern "C" NAKED register_t __cdecl internal_63237e0()
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
        je public_6323813
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6323800 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jge public_632380a
        mov eax, dword ptr ds : [eax+8]
        jmp public_632380e
        public_632380a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_632380e : nop
        cmp eax, ecx
        jne public_6323800
        pop edi
        public_6323813 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6323834
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6323834
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6323834 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x63237e0)
    }
}

#undef public_6323800
#undef public_632380a
#undef public_632380e
#undef public_6323813
#undef public_6323834
