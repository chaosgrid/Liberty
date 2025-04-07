#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f77b40);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);

#define public_6f77b79 _public_6f77b79
#define public_6f77b7b _public_6f77b7b
#define public_6f77b90 _public_6f77b90
#define public_6f77b9b _public_6f77b9b
#define public_6f77b9d _public_6f77b9d
#define public_6f77ba3 _public_6f77ba3
#define public_6f77bae _public_6f77bae
#define public_6f77bb0 _public_6f77bb0
#define public_6f77bc6 _public_6f77bc6

PROC_DECLARE(0x6f77b40, internal_6f77b40, public_6f77b40);
extern "C" NAKED register_t __cdecl internal_6f77b40()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp dword ptr ds : [edi], 0
        mov esi, ecx
        je public_6f77bc6
        mov ebx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [ebx], 0
        je public_6f77bc6
        push edi
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ds:[esi+0xF8]
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0xFC]
        je public_6f77b79
        mov edx, dword ptr ds : [eax+0x10]
        jmp public_6f77b7b
        public_6f77b79 : nop
        xor edx, edx
        public_6f77b7b : nop
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov eax, ecx
        cmp eax, edx
        je public_6f77b9b
        mov esi, dword ptr ds : [edi]
        lea esp, ss:[esp]
        public_6f77b90 : nop
        cmp dword ptr ds : [eax], esi
        je public_6f77b9d
        add eax, 0x44
        cmp eax, edx
        jne public_6f77b90
        public_6f77b9b : nop
        mov eax, edx
        public_6f77b9d : nop
        cmp ecx, edx
        je public_6f77bae
        mov esi, dword ptr ds : [ebx]
        public_6f77ba3 : nop
        cmp dword ptr ds : [ecx], esi
        je public_6f77bb0
        add ecx, 0x44
        cmp ecx, edx
        jne public_6f77ba3
        public_6f77bae : nop
        mov ecx, edx
        public_6f77bb0 : nop
        add eax, 0x44
        xor edx, edx
        cmp ecx, eax
        sete dl
        pop edi
        pop esi
        pop ebx
        lea edx, ds:[edx+edx-1]
        mov eax, edx
        ret 8
        public_6f77bc6 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6f77b40)
    }
}

#undef public_6f77b79
#undef public_6f77b7b
#undef public_6f77b90
#undef public_6f77b9b
#undef public_6f77b9d
#undef public_6f77ba3
#undef public_6f77bae
#undef public_6f77bb0
#undef public_6f77bc6
