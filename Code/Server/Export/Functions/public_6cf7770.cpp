#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7770);
CLANG_FORWARD_PROC_SYMBOL(public_6d06720);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cf77d9 _public_6cf77d9
#define public_6cf77ed _public_6cf77ed
#define public_6cf77f3 _public_6cf77f3
#define public_6cf7801 _public_6cf7801
#define public_6cf7842 _public_6cf7842
#define public_6cf785b _public_6cf785b
#define public_6cf786e _public_6cf786e
#define public_6cf7879 _public_6cf7879
#define public_6cf787c _public_6cf787c
#define public_6cf7881 _public_6cf7881
#define public_6cf78aa _public_6cf78aa
#define public_6cf78c3 _public_6cf78c3
#define public_6cf78d6 _public_6cf78d6
#define public_6cf78e0 _public_6cf78e0
#define public_6cf7903 _public_6cf7903
#define public_6cf791b _public_6cf791b
#define public_6cf792e _public_6cf792e
#define public_6cf793b _public_6cf793b
#define public_6cf793d _public_6cf793d
#define public_6cf7943 _public_6cf7943
#define public_6cf796c _public_6cf796c
#define public_6cf797f _public_6cf797f
#define public_6cf798a _public_6cf798a
#define public_6cf798d _public_6cf798d
#define public_6cf798f _public_6cf798f
#define public_6cf7992 _public_6cf7992
#define public_6cf799e _public_6cf799e

PROC_DECLARE(0x6cf7770, internal_6cf7770, public_6cf7770);
extern "C" NAKED register_t __cdecl internal_6cf7770()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x14
        mov esi, ecx
        call public_6d60012
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x10], 0
        mov byte ptr ds : [ebx+0x11], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6d06720
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6cf77d9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6cf77d9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6cf77d9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6cf77f3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6cf77f3
        public_6cf77d9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6cf77ed
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6cf77f3
        public_6cf77ed : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6cf77f3
        mov dword ptr ds : [eax], ebx
        public_6cf77f3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6cf799e
        public_6cf7801 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_6cf799e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6cf78e0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x10], 0
        jne public_6cf7842
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6cf7992
        public_6cf7842 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6cf7881
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6cf785b
        mov dword ptr ds : [edx+4], eax
        public_6cf785b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6cf786e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6cf787c
        public_6cf786e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6cf7879
        mov dword ptr ds : [edx], ecx
        jmp public_6cf787c
        public_6cf7879 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6cf787c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6cf7881 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6cf78aa
        mov dword ptr ds : [edi+4], ecx
        public_6cf78aa : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6cf78c3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cf798f
        public_6cf78c3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6cf78d6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cf798f
        public_6cf78d6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cf798f
        public_6cf78e0 : nop
        cmp byte ptr ds : [edx+0x10], 0
        jne public_6cf7903
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6cf7992
        public_6cf7903 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6cf7943
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6cf791b
        mov dword ptr ds : [edx+4], eax
        public_6cf791b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6cf792e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6cf793d
        public_6cf792e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6cf793b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6cf793d
        public_6cf793b : nop
        mov dword ptr ds : [edx], ecx
        public_6cf793d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6cf7943 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6cf796c
        mov dword ptr ds : [edi+4], ecx
        public_6cf796c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6cf797f
        mov dword ptr ds : [edi+4], edx
        jmp public_6cf798d
        public_6cf797f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6cf798a
        mov dword ptr ds : [edi], edx
        jmp public_6cf798d
        public_6cf798a : nop
        mov dword ptr ds : [edi+8], edx
        public_6cf798d : nop
        mov dword ptr ds : [edx], ecx
        public_6cf798f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6cf7992 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6cf7801
        public_6cf799e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6cf7770)
    }
}

#undef public_6cf77d9
#undef public_6cf77ed
#undef public_6cf77f3
#undef public_6cf7801
#undef public_6cf7842
#undef public_6cf785b
#undef public_6cf786e
#undef public_6cf7879
#undef public_6cf787c
#undef public_6cf7881
#undef public_6cf78aa
#undef public_6cf78c3
#undef public_6cf78d6
#undef public_6cf78e0
#undef public_6cf7903
#undef public_6cf791b
#undef public_6cf792e
#undef public_6cf793b
#undef public_6cf793d
#undef public_6cf7943
#undef public_6cf796c
#undef public_6cf797f
#undef public_6cf798a
#undef public_6cf798d
#undef public_6cf798f
#undef public_6cf7992
#undef public_6cf799e
