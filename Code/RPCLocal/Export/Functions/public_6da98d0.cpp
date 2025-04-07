#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da9914 _public_6da9914
#define public_6da992c _public_6da992c
#define public_6da9956 _public_6da9956
#define public_6da998d _public_6da998d
#define public_6da99b7 _public_6da99b7
#define public_6da99e3 _public_6da99e3
#define public_6da9a23 _public_6da9a23
#define public_6da9a55 _public_6da9a55
#define public_6da9a87 _public_6da9a87
#define public_6da9aa2 _public_6da9aa2
#define public_6da9aca _public_6da9aca
#define public_6da9b08 _public_6da9b08
#define public_6da9b14 _public_6da9b14

PROC_DECLARE(0x6da98d0, internal_6da98d0, public_6da98d0);
extern "C" NAKED register_t __cdecl internal_6da98d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da9914
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6da9914 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6da992c
        mov dword ptr ds : [esi+0xC], ebp
        public_6da992c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9b14
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi+0x20], edx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da9956
        mov dword ptr ds : [esi+0xC], ebp
        public_6da9956 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9b14
        mov eax, dword ptr ds : [ebx]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        push ecx
        call dword ptr ds : [public_6db3000]
        mov dword ptr ds : [edi+0x24], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da998d
        mov dword ptr ds : [esi+0xC], ebp
        public_6da998d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9b14
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da99b7
        mov dword ptr ds : [esi+0xC], ebp
        public_6da99b7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9b14
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ds : [edi+0x2C], dx
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da99e3
        mov dword ptr ds : [esi+0xC], ebp
        public_6da99e3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9b14
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x40]
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        call dword ptr ds : [public_6db305c]
        test al, al
        je public_6da9aa2
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da9a23
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da9a23 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9b14
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x30]
        call public_6d8f4f0
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da9a55
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da9a55 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9b14
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x4C]
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da9a87
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da9a87 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9b14
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x58]
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        public_6da9aa2 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [edi+0x64], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da9aca
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6da9aca : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6da9b08
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6da9b08 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6da9b14 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6da98d0)
    }
}

#undef public_6da9914
#undef public_6da992c
#undef public_6da9956
#undef public_6da998d
#undef public_6da99b7
#undef public_6da99e3
#undef public_6da9a23
#undef public_6da9a55
#undef public_6da9a87
#undef public_6da9aa2
#undef public_6da9aca
#undef public_6da9b08
#undef public_6da9b14
