#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da9e84 _public_6da9e84
#define public_6da9e9c _public_6da9e9c
#define public_6da9ec6 _public_6da9ec6
#define public_6da9ef0 _public_6da9ef0
#define public_6da9f1a _public_6da9f1a
#define public_6da9f44 _public_6da9f44
#define public_6da9f70 _public_6da9f70
#define public_6da9fa2 _public_6da9fa2
#define public_6da9fd4 _public_6da9fd4
#define public_6daa006 _public_6daa006
#define public_6daa03e _public_6daa03e
#define public_6daa07c _public_6daa07c
#define public_6daa088 _public_6daa088

PROC_DECLARE(0x6da9e40, internal_6da9e40, public_6da9e40);
extern "C" NAKED register_t __cdecl internal_6da9e40()
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
        je public_6da9e84
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6da9e84 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6da9e9c
        mov dword ptr ds : [esi+0xC], ecx
        public_6da9e9c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daa088
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6da9ec6
        mov dword ptr ds : [esi+0xC], ecx
        public_6da9ec6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daa088
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6da9ef0
        mov dword ptr ds : [esi+0xC], ecx
        public_6da9ef0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daa088
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6da9f1a
        mov dword ptr ds : [esi+0xC], ecx
        public_6da9f1a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daa088
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x2C], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 2
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6da9f44
        mov dword ptr ds : [esi+0xC], ecx
        public_6da9f44 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daa088
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x30], dx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0x10
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6da9f70
        mov dword ptr ds : [esi+0xC], ecx
        public_6da9f70 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daa088
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x34]
        call public_6d8f4f0
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da9fa2
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da9fa2 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daa088
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x44]
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da9fd4
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da9fd4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daa088
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x50]
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6daa006
        mov dword ptr ds : [esi+0xC], 0x17
        public_6daa006 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6daa088
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x5C]
        call public_6d8f510
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        add ebp, 0xC
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6daa03e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6daa03e : nop
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
        jbe public_6daa07c
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6daa07c : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6daa088 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6da9e40)
    }
}

#undef public_6da9e84
#undef public_6da9e9c
#undef public_6da9ec6
#undef public_6da9ef0
#undef public_6da9f1a
#undef public_6da9f44
#undef public_6da9f70
#undef public_6da9fa2
#undef public_6da9fd4
#undef public_6daa006
#undef public_6daa03e
#undef public_6daa07c
#undef public_6daa088
