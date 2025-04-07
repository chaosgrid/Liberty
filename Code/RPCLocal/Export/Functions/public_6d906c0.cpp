#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d90708 _public_6d90708
#define public_6d90720 _public_6d90720
#define public_6d90746 _public_6d90746
#define public_6d9076c _public_6d9076c
#define public_6d90794 _public_6d90794
#define public_6d907bc _public_6d907bc
#define public_6d907e6 _public_6d907e6
#define public_6d9080a _public_6d9080a
#define public_6d90810 _public_6d90810
#define public_6d90840 _public_6d90840
#define public_6d9086a _public_6d9086a
#define public_6d90891 _public_6d90891
#define public_6d908d6 _public_6d908d6
#define public_6d908fc _public_6d908fc
#define public_6d90921 _public_6d90921
#define public_6d9092e _public_6d9092e
#define public_6d9096a _public_6d9096a
#define public_6d90976 _public_6d90976

PROC_DECLARE(0x6d906c0, internal_6d906c0, public_6d906c0);
extern "C" NAKED register_t __cdecl internal_6d906c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x24]
        push esi
        push edi
        mov ebx, ecx
        lea esi, ds:[ebx+0x10]
        push esi
        push ebp
        lea edi, ds:[ebx+0x18]
        push edi
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d90708
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6d90708 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov edx, 0x17
        jbe public_6d90720
        mov dword ptr ds : [esi+0xC], edx
        public_6d90720 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d90976
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [ebx+0x20], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6d90746
        mov dword ptr ds : [esi+0xC], edx
        public_6d90746 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d90976
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [edi], eax
        mov byte ptr ds : [ebx+0x30], cl
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6d9076c
        mov dword ptr ds : [esi+0xC], edx
        public_6d9076c : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d90976
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [ebx+0x34], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6d90794
        mov dword ptr ds : [esi+0xC], edx
        public_6d90794 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d90976
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [ebx+0x38], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6d907bc
        mov dword ptr ds : [esi+0xC], edx
        public_6d907bc : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d90976
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        xor eax, eax
        mov ax, cx
        mov dword ptr ss : [esp+0x28], 0
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        ja public_6d90810
        public_6d907e6 : nop
        push esi
        push ebp
        push edi
        mov ecx, ebx
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [ebx+0x1C], eax
        je public_6d9092e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6d9080a : nop
        mov edx, 0x17
        nop 
        public_6d90810 : nop
        mov eax, dword ptr ds : [public_6db3100]
        mov cx, word ptr ds : [eax]
        mov ebp, dword ptr ds : [esi]
        add ebp, 2
        mov word ptr ss : [esp+0x18], cx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebp
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ds : [esi], ebp
        jbe public_6d90840
        mov dword ptr ds : [esi+0xC], edx
        public_6d90840 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d90921
        mov eax, dword ptr ds : [edi]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [edi], eax
        mov ebp, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc ebp
        mov eax, ebp
        cmp eax, ecx
        mov dword ptr ds : [esi], ebp
        jbe public_6d9086a
        mov dword ptr ds : [esi+0xC], 0x17
        public_6d9086a : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d90921
        mov eax, dword ptr ds : [edi]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov ebp, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ebp
        mov dword ptr ds : [esi], eax
        jbe public_6d90891
        mov dword ptr ds : [esi+0xC], 0x17
        public_6d90891 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        test eax, eax
        jne public_6d90921
        mov eax, dword ptr ds : [edi]
        fld dword ptr ds : [eax]
        mov word ptr ss : [esp+0x18], dx
        xor edx, edx
        fstp dword ptr ss : [esp+0x1C]
        add eax, 4
        mov dl, cl
        mov dword ptr ds : [edi], eax
        mov ebp, dword ptr ds : [ebx+0x28]
        mov eax, dword ptr ss : [ebp+4]
        push 0x14
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x24], edx
        call public_6db1f8a
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        test ecx, ecx
        mov dword ptr ds : [eax], ebp
        jne public_6d908d6
        mov ecx, eax
        public_6d908d6 : nop
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ss : [ebp+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d908fc
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], edx
        public_6d908fc : nop
        mov ebp, dword ptr ds : [ebx+0x2C]
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x14]
        inc ebp
        inc eax
        cmp eax, ecx
        mov dword ptr ds : [ebx+0x2C], ebp
        mov dword ptr ss : [esp+0x28], eax
        jb public_6d9080a
        mov ebp, dword ptr ss : [esp+0x2C]
        jmp public_6d907e6
        public_6d90921 : nop
        mov eax, dword ptr ds : [ebx+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        public_6d9092e : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [ebx+0xC]
        push edx
        call public_6da16b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6d9096a
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6d9096a : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6d90976 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 0xC
        UNREACHABLE_TRAP(0x6d906c0)
    }
}

#undef public_6d90708
#undef public_6d90720
#undef public_6d90746
#undef public_6d9076c
#undef public_6d90794
#undef public_6d907bc
#undef public_6d907e6
#undef public_6d9080a
#undef public_6d90810
#undef public_6d90840
#undef public_6d9086a
#undef public_6d90891
#undef public_6d908d6
#undef public_6d908fc
#undef public_6d90921
#undef public_6d9092e
#undef public_6d9096a
#undef public_6d90976
