#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44cb40);
CLANG_FORWARD_PROC_SYMBOL(public_44ce60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_44cba9 _public_44cba9
#define public_44cbbd _public_44cbbd
#define public_44cbc3 _public_44cbc3
#define public_44cbd1 _public_44cbd1
#define public_44cc12 _public_44cc12
#define public_44cc2b _public_44cc2b
#define public_44cc3e _public_44cc3e
#define public_44cc49 _public_44cc49
#define public_44cc4c _public_44cc4c
#define public_44cc51 _public_44cc51
#define public_44cc7a _public_44cc7a
#define public_44cc93 _public_44cc93
#define public_44cca6 _public_44cca6
#define public_44ccb0 _public_44ccb0
#define public_44ccd3 _public_44ccd3
#define public_44cceb _public_44cceb
#define public_44ccfe _public_44ccfe
#define public_44cd0b _public_44cd0b
#define public_44cd0d _public_44cd0d
#define public_44cd13 _public_44cd13
#define public_44cd3c _public_44cd3c
#define public_44cd4f _public_44cd4f
#define public_44cd5a _public_44cd5a
#define public_44cd5d _public_44cd5d
#define public_44cd5f _public_44cd5f
#define public_44cd62 _public_44cd62
#define public_44cd6e _public_44cd6e

PROC_DECLARE(0x44cb40, internal_44cb40, public_44cb40);
extern "C" NAKED register_t __cdecl internal_44cb40()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x10
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0xD], 0
        mov byte ptr ds : [ebx+0xE], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_44ce60
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_44cba9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_44cba9
        mov cl, byte ptr ss : [ebp]
        cmp cl, byte ptr ds : [edi+0xC]
        jl public_44cba9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_44cbc3
        mov dword ptr ds : [eax+8], ebx
        jmp public_44cbc3
        public_44cba9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_44cbbd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_44cbc3
        public_44cbbd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_44cbc3
        mov dword ptr ds : [eax], ebx
        public_44cbc3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_44cd6e
        public_44cbd1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0xD]
        test dl, dl
        jne public_44cd6e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_44ccb0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0xD], 0
        jne public_44cc12
        mov byte ptr ds : [ecx+0xD], 1
        mov byte ptr ds : [edx+0xD], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xD], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_44cd62
        public_44cc12 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_44cc51
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_44cc2b
        mov dword ptr ds : [edx+4], eax
        public_44cc2b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_44cc3e
        mov dword ptr ds : [edx+4], ecx
        jmp public_44cc4c
        public_44cc3e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_44cc49
        mov dword ptr ds : [edx], ecx
        jmp public_44cc4c
        public_44cc49 : nop
        mov dword ptr ds : [edx+8], ecx
        public_44cc4c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_44cc51 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xD], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xD], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_44cc7a
        mov dword ptr ds : [edi+4], ecx
        public_44cc7a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_44cc93
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_44cd5f
        public_44cc93 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_44cca6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_44cd5f
        public_44cca6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_44cd5f
        public_44ccb0 : nop
        cmp byte ptr ds : [edx+0xD], 0
        jne public_44ccd3
        mov byte ptr ds : [ecx+0xD], 1
        mov byte ptr ds : [edx+0xD], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0xD], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_44cd62
        public_44ccd3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_44cd13
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_44cceb
        mov dword ptr ds : [edx+4], eax
        public_44cceb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_44ccfe
        mov dword ptr ds : [edx+4], ecx
        jmp public_44cd0d
        public_44ccfe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_44cd0b
        mov dword ptr ds : [edx+8], ecx
        jmp public_44cd0d
        public_44cd0b : nop
        mov dword ptr ds : [edx], ecx
        public_44cd0d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_44cd13 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xD], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xD], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_44cd3c
        mov dword ptr ds : [edi+4], ecx
        public_44cd3c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_44cd4f
        mov dword ptr ds : [edi+4], edx
        jmp public_44cd5d
        public_44cd4f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_44cd5a
        mov dword ptr ds : [edi], edx
        jmp public_44cd5d
        public_44cd5a : nop
        mov dword ptr ds : [edi+8], edx
        public_44cd5d : nop
        mov dword ptr ds : [edx], ecx
        public_44cd5f : nop
        mov dword ptr ds : [ecx+4], edx
        public_44cd62 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_44cbd1
        public_44cd6e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0xD], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x44cb40)
    }
}

#undef public_44cba9
#undef public_44cbbd
#undef public_44cbc3
#undef public_44cbd1
#undef public_44cc12
#undef public_44cc2b
#undef public_44cc3e
#undef public_44cc49
#undef public_44cc4c
#undef public_44cc51
#undef public_44cc7a
#undef public_44cc93
#undef public_44cca6
#undef public_44ccb0
#undef public_44ccd3
#undef public_44cceb
#undef public_44ccfe
#undef public_44cd0b
#undef public_44cd0d
#undef public_44cd13
#undef public_44cd3c
#undef public_44cd4f
#undef public_44cd5a
#undef public_44cd5d
#undef public_44cd5f
#undef public_44cd62
#undef public_44cd6e
