#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d59ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ab90);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d59f6c _public_6d59f6c
#define public_6d59f80 _public_6d59f80
#define public_6d59f86 _public_6d59f86
#define public_6d59f94 _public_6d59f94
#define public_6d59fe4 _public_6d59fe4
#define public_6d59ffd _public_6d59ffd
#define public_6d5a010 _public_6d5a010
#define public_6d5a01b _public_6d5a01b
#define public_6d5a01e _public_6d5a01e
#define public_6d5a023 _public_6d5a023
#define public_6d5a052 _public_6d5a052
#define public_6d5a06b _public_6d5a06b
#define public_6d5a07e _public_6d5a07e
#define public_6d5a088 _public_6d5a088
#define public_6d5a0b7 _public_6d5a0b7
#define public_6d5a0cf _public_6d5a0cf
#define public_6d5a0e2 _public_6d5a0e2
#define public_6d5a0ef _public_6d5a0ef
#define public_6d5a0f1 _public_6d5a0f1
#define public_6d5a0f7 _public_6d5a0f7
#define public_6d5a126 _public_6d5a126
#define public_6d5a139 _public_6d5a139
#define public_6d5a144 _public_6d5a144
#define public_6d5a147 _public_6d5a147
#define public_6d5a149 _public_6d5a149
#define public_6d5a14c _public_6d5a14c
#define public_6d5a158 _public_6d5a158

PROC_DECLARE(0x6d59ef0, internal_6d59ef0, public_6d59ef0);
extern "C" NAKED register_t __cdecl internal_6d59ef0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x5A8
        mov esi, ecx
        call public_6d60012
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x5A4], 0
        mov byte ptr ds : [ebx+0x5A5], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6d5ab90
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6d59f6c
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6d59f6c
        lea ecx, ds:[edi+0xC]
        push ecx
        push ebp
        call dword ptr ds : [public_6d648d8]
        add esp, 8
        test al, al
        jne public_6d59f6c
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6d59f86
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d59f86
        public_6d59f6c : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6d59f80
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6d59f86
        public_6d59f80 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6d59f86
        mov dword ptr ds : [eax], ebx
        public_6d59f86 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6d5a158
        public_6d59f94 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x5A4]
        test dl, dl
        jne public_6d5a158
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6d5a088
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x5A4], 0
        jne public_6d59fe4
        mov byte ptr ds : [ecx+0x5A4], 1
        mov byte ptr ds : [edx+0x5A4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x5A4], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6d5a14c
        public_6d59fe4 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d5a023
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d59ffd
        mov dword ptr ds : [edx+4], eax
        public_6d59ffd : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d5a010
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d5a01e
        public_6d5a010 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6d5a01b
        mov dword ptr ds : [edx], ecx
        jmp public_6d5a01e
        public_6d5a01b : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d5a01e : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d5a023 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5A4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x5A4], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d5a052
        mov dword ptr ds : [edi+4], ecx
        public_6d5a052 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d5a06b
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a149
        public_6d5a06b : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d5a07e
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a149
        public_6d5a07e : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a149
        public_6d5a088 : nop
        cmp byte ptr ds : [edx+0x5A4], 0
        jne public_6d5a0b7
        mov byte ptr ds : [ecx+0x5A4], 1
        mov byte ptr ds : [edx+0x5A4], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x5A4], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6d5a14c
        public_6d5a0b7 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6d5a0f7
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d5a0cf
        mov dword ptr ds : [edx+4], eax
        public_6d5a0cf : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d5a0e2
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d5a0f1
        public_6d5a0e2 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d5a0ef
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a0f1
        public_6d5a0ef : nop
        mov dword ptr ds : [edx], ecx
        public_6d5a0f1 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d5a0f7 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x5A4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x5A4], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d5a126
        mov dword ptr ds : [edi+4], ecx
        public_6d5a126 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d5a139
        mov dword ptr ds : [edi+4], edx
        jmp public_6d5a147
        public_6d5a139 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6d5a144
        mov dword ptr ds : [edi], edx
        jmp public_6d5a147
        public_6d5a144 : nop
        mov dword ptr ds : [edi+8], edx
        public_6d5a147 : nop
        mov dword ptr ds : [edx], ecx
        public_6d5a149 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d5a14c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d59f94
        public_6d5a158 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x5A4], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d59ef0)
    }
}

#undef public_6d59f6c
#undef public_6d59f80
#undef public_6d59f86
#undef public_6d59f94
#undef public_6d59fe4
#undef public_6d59ffd
#undef public_6d5a010
#undef public_6d5a01b
#undef public_6d5a01e
#undef public_6d5a023
#undef public_6d5a052
#undef public_6d5a06b
#undef public_6d5a07e
#undef public_6d5a088
#undef public_6d5a0b7
#undef public_6d5a0cf
#undef public_6d5a0e2
#undef public_6d5a0ef
#undef public_6d5a0f1
#undef public_6d5a0f7
#undef public_6d5a126
#undef public_6d5a139
#undef public_6d5a144
#undef public_6d5a147
#undef public_6d5a149
#undef public_6d5a14c
#undef public_6d5a158
