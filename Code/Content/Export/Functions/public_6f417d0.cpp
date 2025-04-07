#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f417d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f468c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f41839 _public_6f41839
#define public_6f4184d _public_6f4184d
#define public_6f41853 _public_6f41853
#define public_6f41861 _public_6f41861
#define public_6f418a2 _public_6f418a2
#define public_6f418bb _public_6f418bb
#define public_6f418ce _public_6f418ce
#define public_6f418d9 _public_6f418d9
#define public_6f418dc _public_6f418dc
#define public_6f418e1 _public_6f418e1
#define public_6f4190a _public_6f4190a
#define public_6f41923 _public_6f41923
#define public_6f41936 _public_6f41936
#define public_6f41940 _public_6f41940
#define public_6f41963 _public_6f41963
#define public_6f4197b _public_6f4197b
#define public_6f4198e _public_6f4198e
#define public_6f4199b _public_6f4199b
#define public_6f4199d _public_6f4199d
#define public_6f419a3 _public_6f419a3
#define public_6f419cc _public_6f419cc
#define public_6f419df _public_6f419df
#define public_6f419ea _public_6f419ea
#define public_6f419ed _public_6f419ed
#define public_6f419ef _public_6f419ef
#define public_6f419f2 _public_6f419f2
#define public_6f419fe _public_6f419fe

PROC_DECLARE(0x6f417d0, internal_6f417d0, public_6f417d0);
extern "C" NAKED register_t __cdecl internal_6f417d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x74
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x70], 0
        mov byte ptr ds : [ebx+0x71], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f468c0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f41839
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f41839
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f41839
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f41853
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f41853
        public_6f41839 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f4184d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f41853
        public_6f4184d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f41853
        mov dword ptr ds : [eax], ebx
        public_6f41853 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f419fe
        public_6f41861 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x70]
        test dl, dl
        jne public_6f419fe
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f41940
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x70], 0
        jne public_6f418a2
        mov byte ptr ds : [ecx+0x70], 1
        mov byte ptr ds : [edx+0x70], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f419f2
        public_6f418a2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f418e1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f418bb
        mov dword ptr ds : [edx+4], eax
        public_6f418bb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f418ce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f418dc
        public_6f418ce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f418d9
        mov dword ptr ds : [edx], ecx
        jmp public_6f418dc
        public_6f418d9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f418dc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f418e1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x70], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f4190a
        mov dword ptr ds : [edi+4], ecx
        public_6f4190a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f41923
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f419ef
        public_6f41923 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f41936
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f419ef
        public_6f41936 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f419ef
        public_6f41940 : nop
        cmp byte ptr ds : [edx+0x70], 0
        jne public_6f41963
        mov byte ptr ds : [ecx+0x70], 1
        mov byte ptr ds : [edx+0x70], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x70], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f419f2
        public_6f41963 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f419a3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4197b
        mov dword ptr ds : [edx+4], eax
        public_6f4197b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4198e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4199d
        public_6f4198e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f4199b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4199d
        public_6f4199b : nop
        mov dword ptr ds : [edx], ecx
        public_6f4199d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f419a3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x70], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x70], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f419cc
        mov dword ptr ds : [edi+4], ecx
        public_6f419cc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f419df
        mov dword ptr ds : [edi+4], edx
        jmp public_6f419ed
        public_6f419df : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f419ea
        mov dword ptr ds : [edi], edx
        jmp public_6f419ed
        public_6f419ea : nop
        mov dword ptr ds : [edi+8], edx
        public_6f419ed : nop
        mov dword ptr ds : [edx], ecx
        public_6f419ef : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f419f2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f41861
        public_6f419fe : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x70], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f417d0)
    }
}

#undef public_6f41839
#undef public_6f4184d
#undef public_6f41853
#undef public_6f41861
#undef public_6f418a2
#undef public_6f418bb
#undef public_6f418ce
#undef public_6f418d9
#undef public_6f418dc
#undef public_6f418e1
#undef public_6f4190a
#undef public_6f41923
#undef public_6f41936
#undef public_6f41940
#undef public_6f41963
#undef public_6f4197b
#undef public_6f4198e
#undef public_6f4199b
#undef public_6f4199d
#undef public_6f419a3
#undef public_6f419cc
#undef public_6f419df
#undef public_6f419ea
#undef public_6f419ed
#undef public_6f419ef
#undef public_6f419f2
#undef public_6f419fe
