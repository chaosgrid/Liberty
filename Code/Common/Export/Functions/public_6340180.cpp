#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6340180);
CLANG_FORWARD_PROC_SYMBOL(public_6341200);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63401f2 _public_63401f2
#define public_6340206 _public_6340206
#define public_634020c _public_634020c
#define public_6340220 _public_6340220
#define public_6340270 _public_6340270
#define public_6340289 _public_6340289
#define public_634029c _public_634029c
#define public_63402a7 _public_63402a7
#define public_63402aa _public_63402aa
#define public_63402af _public_63402af
#define public_63402de _public_63402de
#define public_63402f7 _public_63402f7
#define public_634030a _public_634030a
#define public_6340314 _public_6340314
#define public_6340343 _public_6340343
#define public_634035b _public_634035b
#define public_634036e _public_634036e
#define public_634037b _public_634037b
#define public_634037d _public_634037d
#define public_6340383 _public_6340383
#define public_63403b2 _public_63403b2
#define public_63403c5 _public_63403c5
#define public_63403d0 _public_63403d0
#define public_63403d3 _public_63403d3
#define public_63403d5 _public_63403d5
#define public_63403d8 _public_63403d8
#define public_63403e4 _public_63403e4

PROC_DECLARE(0x6340180, internal_6340180, public_6340180);
extern "C" NAKED register_t __cdecl internal_6340180()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x84
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x80], 0
        mov byte ptr ds : [ebx+0x81], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6341200
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_63401f2
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_63401f2
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_63401f2
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_634020c
        mov dword ptr ds : [eax+8], ebx
        jmp public_634020c
        public_63401f2 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6340206
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_634020c
        public_6340206 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_634020c
        mov dword ptr ds : [eax], ebx
        public_634020c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_63403e4
        lea ebx, ds:[ebx]
        public_6340220 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x80]
        test dl, dl
        jne public_63403e4
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6340314
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x80], 0
        jne public_6340270
        mov byte ptr ds : [ecx+0x80], 1
        mov byte ptr ds : [edx+0x80], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x80], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_63403d8
        public_6340270 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_63402af
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6340289
        mov dword ptr ds : [edx+4], eax
        public_6340289 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_634029c
        mov dword ptr ds : [edx+4], ecx
        jmp public_63402aa
        public_634029c : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_63402a7
        mov dword ptr ds : [edx], ecx
        jmp public_63402aa
        public_63402a7 : nop
        mov dword ptr ds : [edx+8], ecx
        public_63402aa : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_63402af : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x80], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x80], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_63402de
        mov dword ptr ds : [edi+4], ecx
        public_63402de : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_63402f7
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63403d5
        public_63402f7 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_634030a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63403d5
        public_634030a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_63403d5
        public_6340314 : nop
        cmp byte ptr ds : [edx+0x80], 0
        jne public_6340343
        mov byte ptr ds : [ecx+0x80], 1
        mov byte ptr ds : [edx+0x80], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x80], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_63403d8
        public_6340343 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6340383
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_634035b
        mov dword ptr ds : [edx+4], eax
        public_634035b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_634036e
        mov dword ptr ds : [edx+4], ecx
        jmp public_634037d
        public_634036e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_634037b
        mov dword ptr ds : [edx+8], ecx
        jmp public_634037d
        public_634037b : nop
        mov dword ptr ds : [edx], ecx
        public_634037d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6340383 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x80], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x80], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_63403b2
        mov dword ptr ds : [edi+4], ecx
        public_63403b2 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_63403c5
        mov dword ptr ds : [edi+4], edx
        jmp public_63403d3
        public_63403c5 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_63403d0
        mov dword ptr ds : [edi], edx
        jmp public_63403d3
        public_63403d0 : nop
        mov dword ptr ds : [edi+8], edx
        public_63403d3 : nop
        mov dword ptr ds : [edx], ecx
        public_63403d5 : nop
        mov dword ptr ds : [ecx+4], edx
        public_63403d8 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6340220
        public_63403e4 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x80], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6340180)
    }
}

#undef public_63401f2
#undef public_6340206
#undef public_634020c
#undef public_6340220
#undef public_6340270
#undef public_6340289
#undef public_634029c
#undef public_63402a7
#undef public_63402aa
#undef public_63402af
#undef public_63402de
#undef public_63402f7
#undef public_634030a
#undef public_6340314
#undef public_6340343
#undef public_634035b
#undef public_634036e
#undef public_634037b
#undef public_634037d
#undef public_6340383
#undef public_63403b2
#undef public_63403c5
#undef public_63403d0
#undef public_63403d3
#undef public_63403d5
#undef public_63403d8
#undef public_63403e4
