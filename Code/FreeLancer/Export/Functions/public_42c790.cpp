#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42c790);
CLANG_FORWARD_PROC_SYMBOL(public_42ca80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_42c7f9 _public_42c7f9
#define public_42c80d _public_42c80d
#define public_42c813 _public_42c813
#define public_42c821 _public_42c821
#define public_42c862 _public_42c862
#define public_42c87b _public_42c87b
#define public_42c88e _public_42c88e
#define public_42c899 _public_42c899
#define public_42c89c _public_42c89c
#define public_42c8a1 _public_42c8a1
#define public_42c8ca _public_42c8ca
#define public_42c8e3 _public_42c8e3
#define public_42c8f6 _public_42c8f6
#define public_42c900 _public_42c900
#define public_42c923 _public_42c923
#define public_42c93b _public_42c93b
#define public_42c94e _public_42c94e
#define public_42c95b _public_42c95b
#define public_42c95d _public_42c95d
#define public_42c963 _public_42c963
#define public_42c98c _public_42c98c
#define public_42c99f _public_42c99f
#define public_42c9aa _public_42c9aa
#define public_42c9ad _public_42c9ad
#define public_42c9af _public_42c9af
#define public_42c9b2 _public_42c9b2
#define public_42c9be _public_42c9be

PROC_DECLARE(0x42c790, internal_42c790, public_42c790);
extern "C" NAKED register_t __cdecl internal_42c790()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x3C
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x38], 0
        mov byte ptr ds : [ebx+0x39], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_42ca80
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_42c7f9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_42c7f9
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, dword ptr ds : [edi+0x10]
        jb public_42c7f9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_42c813
        mov dword ptr ds : [eax+8], ebx
        jmp public_42c813
        public_42c7f9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_42c80d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_42c813
        public_42c80d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_42c813
        mov dword ptr ds : [eax], ebx
        public_42c813 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_42c9be
        public_42c821 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x38]
        test dl, dl
        jne public_42c9be
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_42c900
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x38], 0
        jne public_42c862
        mov byte ptr ds : [ecx+0x38], 1
        mov byte ptr ds : [edx+0x38], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_42c9b2
        public_42c862 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_42c8a1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_42c87b
        mov dword ptr ds : [edx+4], eax
        public_42c87b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_42c88e
        mov dword ptr ds : [edx+4], ecx
        jmp public_42c89c
        public_42c88e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_42c899
        mov dword ptr ds : [edx], ecx
        jmp public_42c89c
        public_42c899 : nop
        mov dword ptr ds : [edx+8], ecx
        public_42c89c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_42c8a1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_42c8ca
        mov dword ptr ds : [edi+4], ecx
        public_42c8ca : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_42c8e3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_42c9af
        public_42c8e3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_42c8f6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_42c9af
        public_42c8f6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_42c9af
        public_42c900 : nop
        cmp byte ptr ds : [edx+0x38], 0
        jne public_42c923
        mov byte ptr ds : [ecx+0x38], 1
        mov byte ptr ds : [edx+0x38], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x38], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_42c9b2
        public_42c923 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_42c963
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_42c93b
        mov dword ptr ds : [edx+4], eax
        public_42c93b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_42c94e
        mov dword ptr ds : [edx+4], ecx
        jmp public_42c95d
        public_42c94e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_42c95b
        mov dword ptr ds : [edx+8], ecx
        jmp public_42c95d
        public_42c95b : nop
        mov dword ptr ds : [edx], ecx
        public_42c95d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_42c963 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x38], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x38], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_42c98c
        mov dword ptr ds : [edi+4], ecx
        public_42c98c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_42c99f
        mov dword ptr ds : [edi+4], edx
        jmp public_42c9ad
        public_42c99f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_42c9aa
        mov dword ptr ds : [edi], edx
        jmp public_42c9ad
        public_42c9aa : nop
        mov dword ptr ds : [edi+8], edx
        public_42c9ad : nop
        mov dword ptr ds : [edx], ecx
        public_42c9af : nop
        mov dword ptr ds : [ecx+4], edx
        public_42c9b2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_42c821
        public_42c9be : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x38], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x42c790)
    }
}

#undef public_42c7f9
#undef public_42c80d
#undef public_42c813
#undef public_42c821
#undef public_42c862
#undef public_42c87b
#undef public_42c88e
#undef public_42c899
#undef public_42c89c
#undef public_42c8a1
#undef public_42c8ca
#undef public_42c8e3
#undef public_42c8f6
#undef public_42c900
#undef public_42c923
#undef public_42c93b
#undef public_42c94e
#undef public_42c95b
#undef public_42c95d
#undef public_42c963
#undef public_42c98c
#undef public_42c99f
#undef public_42c9aa
#undef public_42c9ad
#undef public_42c9af
#undef public_42c9b2
#undef public_42c9be
