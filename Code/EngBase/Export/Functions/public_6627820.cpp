#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627820);
CLANG_FORWARD_PROC_SYMBOL(public_6627fe0);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_662788d _public_662788d
#define public_66278a1 _public_66278a1
#define public_66278a7 _public_66278a7
#define public_66278b5 _public_66278b5
#define public_66278f6 _public_66278f6
#define public_662790f _public_662790f
#define public_6627922 _public_6627922
#define public_662792d _public_662792d
#define public_6627930 _public_6627930
#define public_6627935 _public_6627935
#define public_662795e _public_662795e
#define public_6627977 _public_6627977
#define public_662798a _public_662798a
#define public_6627994 _public_6627994
#define public_66279b7 _public_66279b7
#define public_66279cf _public_66279cf
#define public_66279e2 _public_66279e2
#define public_66279ef _public_66279ef
#define public_66279f1 _public_66279f1
#define public_66279f7 _public_66279f7
#define public_6627a20 _public_6627a20
#define public_6627a33 _public_6627a33
#define public_6627a3e _public_6627a3e
#define public_6627a41 _public_6627a41
#define public_6627a43 _public_6627a43
#define public_6627a46 _public_6627a46
#define public_6627a52 _public_6627a52

PROC_DECLARE(0x6627820, internal_6627820, public_6627820);
extern "C" NAKED register_t __cdecl internal_6627820()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_66281dc
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x1C], 0
        mov byte ptr ds : [ebx+0x1D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_6627fe0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_662788d
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_662788d
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jl public_662788d
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_66278a7
        mov dword ptr ds : [eax+8], ebx
        jmp public_66278a7
        public_662788d : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_66278a1
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_66278a7
        public_66278a1 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_66278a7
        mov dword ptr ds : [eax], ebx
        public_66278a7 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_6627a52
        public_66278b5 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6627a52
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6627994
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_66278f6
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6627a46
        public_66278f6 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6627935
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_662790f
        mov dword ptr ds : [edx+4], eax
        public_662790f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6627922
        mov dword ptr ds : [edx+4], ecx
        jmp public_6627930
        public_6627922 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_662792d
        mov dword ptr ds : [edx], ecx
        jmp public_6627930
        public_662792d : nop
        mov dword ptr ds : [edx+8], ecx
        public_6627930 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6627935 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_662795e
        mov dword ptr ds : [edi+4], ecx
        public_662795e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6627977
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6627a43
        public_6627977 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_662798a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6627a43
        public_662798a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6627a43
        public_6627994 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_66279b7
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6627a46
        public_66279b7 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_66279f7
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_66279cf
        mov dword ptr ds : [edx+4], eax
        public_66279cf : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_66279e2
        mov dword ptr ds : [edx+4], ecx
        jmp public_66279f1
        public_66279e2 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_66279ef
        mov dword ptr ds : [edx+8], ecx
        jmp public_66279f1
        public_66279ef : nop
        mov dword ptr ds : [edx], ecx
        public_66279f1 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_66279f7 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6627a20
        mov dword ptr ds : [edi+4], ecx
        public_6627a20 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6627a33
        mov dword ptr ds : [edi+4], edx
        jmp public_6627a41
        public_6627a33 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6627a3e
        mov dword ptr ds : [edi], edx
        jmp public_6627a41
        public_6627a3e : nop
        mov dword ptr ds : [edi+8], edx
        public_6627a41 : nop
        mov dword ptr ds : [edx], ecx
        public_6627a43 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6627a46 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_66278b5
        public_6627a52 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6627820)
    }
}

#undef public_662788d
#undef public_66278a1
#undef public_66278a7
#undef public_66278b5
#undef public_66278f6
#undef public_662790f
#undef public_6627922
#undef public_662792d
#undef public_6627930
#undef public_6627935
#undef public_662795e
#undef public_6627977
#undef public_662798a
#undef public_6627994
#undef public_66279b7
#undef public_66279cf
#undef public_66279e2
#undef public_66279ef
#undef public_66279f1
#undef public_66279f7
#undef public_6627a20
#undef public_6627a33
#undef public_6627a3e
#undef public_6627a41
#undef public_6627a43
#undef public_6627a46
#undef public_6627a52
