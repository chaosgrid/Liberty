#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a080);
CLANG_FORWARD_PROC_SYMBOL(public_46e670);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_46e6d9 _public_46e6d9
#define public_46e6ed _public_46e6ed
#define public_46e6f3 _public_46e6f3
#define public_46e701 _public_46e701
#define public_46e742 _public_46e742
#define public_46e75b _public_46e75b
#define public_46e76e _public_46e76e
#define public_46e779 _public_46e779
#define public_46e77c _public_46e77c
#define public_46e781 _public_46e781
#define public_46e7aa _public_46e7aa
#define public_46e7c3 _public_46e7c3
#define public_46e7d6 _public_46e7d6
#define public_46e7e0 _public_46e7e0
#define public_46e803 _public_46e803
#define public_46e81b _public_46e81b
#define public_46e82e _public_46e82e
#define public_46e83b _public_46e83b
#define public_46e83d _public_46e83d
#define public_46e843 _public_46e843
#define public_46e86c _public_46e86c
#define public_46e87f _public_46e87f
#define public_46e88a _public_46e88a
#define public_46e88d _public_46e88d
#define public_46e88f _public_46e88f
#define public_46e892 _public_46e892
#define public_46e89e _public_46e89e

PROC_DECLARE(0x46e670, internal_46e670, public_46e670);
extern "C" NAKED register_t __cdecl internal_46e670()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x1C], 0
        mov byte ptr ds : [ebx+0x1D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_45a080
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_46e6d9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_46e6d9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        ja public_46e6d9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_46e6f3
        mov dword ptr ds : [eax+8], ebx
        jmp public_46e6f3
        public_46e6d9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_46e6ed
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_46e6f3
        public_46e6ed : nop
        cmp edi, dword ptr ds : [eax]
        jne public_46e6f3
        mov dword ptr ds : [eax], ebx
        public_46e6f3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_46e89e
        public_46e701 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_46e89e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_46e7e0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_46e742
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_46e892
        public_46e742 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_46e781
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_46e75b
        mov dword ptr ds : [edx+4], eax
        public_46e75b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_46e76e
        mov dword ptr ds : [edx+4], ecx
        jmp public_46e77c
        public_46e76e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_46e779
        mov dword ptr ds : [edx], ecx
        jmp public_46e77c
        public_46e779 : nop
        mov dword ptr ds : [edx+8], ecx
        public_46e77c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_46e781 : nop
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
        je public_46e7aa
        mov dword ptr ds : [edi+4], ecx
        public_46e7aa : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_46e7c3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_46e88f
        public_46e7c3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_46e7d6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_46e88f
        public_46e7d6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_46e88f
        public_46e7e0 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_46e803
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_46e892
        public_46e803 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_46e843
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_46e81b
        mov dword ptr ds : [edx+4], eax
        public_46e81b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_46e82e
        mov dword ptr ds : [edx+4], ecx
        jmp public_46e83d
        public_46e82e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_46e83b
        mov dword ptr ds : [edx+8], ecx
        jmp public_46e83d
        public_46e83b : nop
        mov dword ptr ds : [edx], ecx
        public_46e83d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_46e843 : nop
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
        je public_46e86c
        mov dword ptr ds : [edi+4], ecx
        public_46e86c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_46e87f
        mov dword ptr ds : [edi+4], edx
        jmp public_46e88d
        public_46e87f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_46e88a
        mov dword ptr ds : [edi], edx
        jmp public_46e88d
        public_46e88a : nop
        mov dword ptr ds : [edi+8], edx
        public_46e88d : nop
        mov dword ptr ds : [edx], ecx
        public_46e88f : nop
        mov dword ptr ds : [ecx+4], edx
        public_46e892 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_46e701
        public_46e89e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x46e670)
    }
}

#undef public_46e6d9
#undef public_46e6ed
#undef public_46e6f3
#undef public_46e701
#undef public_46e742
#undef public_46e75b
#undef public_46e76e
#undef public_46e779
#undef public_46e77c
#undef public_46e781
#undef public_46e7aa
#undef public_46e7c3
#undef public_46e7d6
#undef public_46e7e0
#undef public_46e803
#undef public_46e81b
#undef public_46e82e
#undef public_46e83b
#undef public_46e83d
#undef public_46e843
#undef public_46e86c
#undef public_46e87f
#undef public_46e88a
#undef public_46e88d
#undef public_46e88f
#undef public_46e892
#undef public_46e89e
