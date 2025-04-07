#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dac602 _public_6dac602
#define public_6dac61a _public_6dac61a
#define public_6dac642 _public_6dac642
#define public_6dac66a _public_6dac66a
#define public_6dac692 _public_6dac692
#define public_6dac6bc _public_6dac6bc
#define public_6dac6e4 _public_6dac6e4
#define public_6dac70a _public_6dac70a
#define public_6dac738 _public_6dac738
#define public_6dac776 _public_6dac776
#define public_6dac782 _public_6dac782

PROC_DECLARE(0x6dac5c0, internal_6dac5c0, public_6dac5c0);
extern "C" NAKED register_t __cdecl internal_6dac5c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dac602
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dac602 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6dac61a
        mov dword ptr ds : [esi+0xC], ecx
        public_6dac61a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dac782
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dac642
        mov dword ptr ds : [esi+0xC], ecx
        public_6dac642 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dac782
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dac66a
        mov dword ptr ds : [esi+0xC], ecx
        public_6dac66a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dac782
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dac692
        mov dword ptr ds : [esi+0xC], ecx
        public_6dac692 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dac782
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x2C], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dac6bc
        mov dword ptr ds : [esi+0xC], ecx
        public_6dac6bc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dac782
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x30], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dac6e4
        mov dword ptr ds : [esi+0xC], ecx
        public_6dac6e4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dac782
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x34], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6dac70a
        mov dword ptr ds : [esi+0xC], ecx
        public_6dac70a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dac782
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        push esi
        push ebp
        mov byte ptr ds : [edi+0x38], cl
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dac738
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dac738 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
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
        jbe public_6dac776
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6dac776 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6dac782 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6dac5c0)
    }
}

#undef public_6dac602
#undef public_6dac61a
#undef public_6dac642
#undef public_6dac66a
#undef public_6dac692
#undef public_6dac6bc
#undef public_6dac6e4
#undef public_6dac70a
#undef public_6dac738
#undef public_6dac776
#undef public_6dac782
