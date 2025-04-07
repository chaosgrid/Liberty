#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6319870);
CLANG_FORWARD_PROC_SYMBOL(public_631a500);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63198d9 _public_63198d9
#define public_63198ed _public_63198ed
#define public_63198f3 _public_63198f3
#define public_6319901 _public_6319901
#define public_6319942 _public_6319942
#define public_631995b _public_631995b
#define public_631996e _public_631996e
#define public_6319979 _public_6319979
#define public_631997c _public_631997c
#define public_6319981 _public_6319981
#define public_63199aa _public_63199aa
#define public_63199c3 _public_63199c3
#define public_63199d6 _public_63199d6
#define public_63199e0 _public_63199e0
#define public_6319a03 _public_6319a03
#define public_6319a1b _public_6319a1b
#define public_6319a2e _public_6319a2e
#define public_6319a3b _public_6319a3b
#define public_6319a3d _public_6319a3d
#define public_6319a43 _public_6319a43
#define public_6319a6c _public_6319a6c
#define public_6319a7f _public_6319a7f
#define public_6319a8a _public_6319a8a
#define public_6319a8d _public_6319a8d
#define public_6319a8f _public_6319a8f
#define public_6319a92 _public_6319a92
#define public_6319a9e _public_6319a9e

PROC_DECLARE(0x6319870, internal_6319870, public_6319870);
extern "C" NAKED register_t __cdecl internal_6319870()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x24], 0
        mov byte ptr ds : [ebx+0x25], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_631a500
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_63198d9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_63198d9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_63198d9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_63198f3
        mov dword ptr ds : [eax+8], ebx
        jmp public_63198f3
        public_63198d9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_63198ed
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_63198f3
        public_63198ed : nop
        cmp edi, dword ptr ds : [eax]
        jne public_63198f3
        mov dword ptr ds : [eax], ebx
        public_63198f3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6319a9e
        public_6319901 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6319a9e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_63199e0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6319942
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6319a92
        public_6319942 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6319981
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_631995b
        mov dword ptr ds : [edx+4], eax
        public_631995b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_631996e
        mov dword ptr ds : [edx+4], ecx
        jmp public_631997c
        public_631996e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6319979
        mov dword ptr ds : [edx], ecx
        jmp public_631997c
        public_6319979 : nop
        mov dword ptr ds : [edx+8], ecx
        public_631997c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6319981 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_63199aa
        mov dword ptr ds : [edi+4], ecx
        public_63199aa : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_63199c3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6319a8f
        public_63199c3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_63199d6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6319a8f
        public_63199d6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6319a8f
        public_63199e0 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6319a03
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6319a92
        public_6319a03 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6319a43
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6319a1b
        mov dword ptr ds : [edx+4], eax
        public_6319a1b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6319a2e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6319a3d
        public_6319a2e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6319a3b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6319a3d
        public_6319a3b : nop
        mov dword ptr ds : [edx], ecx
        public_6319a3d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6319a43 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6319a6c
        mov dword ptr ds : [edi+4], ecx
        public_6319a6c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6319a7f
        mov dword ptr ds : [edi+4], edx
        jmp public_6319a8d
        public_6319a7f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6319a8a
        mov dword ptr ds : [edi], edx
        jmp public_6319a8d
        public_6319a8a : nop
        mov dword ptr ds : [edi+8], edx
        public_6319a8d : nop
        mov dword ptr ds : [edx], ecx
        public_6319a8f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6319a92 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6319901
        public_6319a9e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6319870)
    }
}

#undef public_63198d9
#undef public_63198ed
#undef public_63198f3
#undef public_6319901
#undef public_6319942
#undef public_631995b
#undef public_631996e
#undef public_6319979
#undef public_631997c
#undef public_6319981
#undef public_63199aa
#undef public_63199c3
#undef public_63199d6
#undef public_63199e0
#undef public_6319a03
#undef public_6319a1b
#undef public_6319a2e
#undef public_6319a3b
#undef public_6319a3d
#undef public_6319a43
#undef public_6319a6c
#undef public_6319a7f
#undef public_6319a8a
#undef public_6319a8d
#undef public_6319a8f
#undef public_6319a92
#undef public_6319a9e
