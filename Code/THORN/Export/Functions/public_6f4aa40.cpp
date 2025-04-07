#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);

#define public_6f4aa60 _public_6f4aa60
#define public_6f4aa6a _public_6f4aa6a
#define public_6f4aa6e _public_6f4aa6e
#define public_6f4aa73 _public_6f4aa73
#define public_6f4aa94 _public_6f4aa94

PROC_DECLARE(0x6f4aa40, internal_6f4aa40, public_6f4aa40);
extern "C" NAKED register_t __cdecl internal_6f4aa40()
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
        je public_6f4aa73
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6f4aa60 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jge public_6f4aa6a
        mov eax, dword ptr ds : [eax+8]
        jmp public_6f4aa6e
        public_6f4aa6a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6f4aa6e : nop
        cmp eax, ecx
        jne public_6f4aa60
        pop edi
        public_6f4aa73 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6f4aa94
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6f4aa94
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6f4aa94 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f4aa40)
    }
}

#undef public_6f4aa60
#undef public_6f4aa6a
#undef public_6f4aa6e
#undef public_6f4aa73
#undef public_6f4aa94
