#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da7a49 _public_6da7a49
#define public_6da7a61 _public_6da7a61
#define public_6da7a71 _public_6da7a71
#define public_6da7a90 _public_6da7a90
#define public_6da7aa0 _public_6da7aa0
#define public_6da7ab9 _public_6da7ab9
#define public_6da7ac1 _public_6da7ac1
#define public_6da7ad2 _public_6da7ad2
#define public_6da7ae2 _public_6da7ae2
#define public_6da7af4 _public_6da7af4
#define public_6da7b05 _public_6da7b05
#define public_6da7b21 _public_6da7b21
#define public_6da7b35 _public_6da7b35
#define public_6da7b3e _public_6da7b3e
#define public_6da7b71 _public_6da7b71

PROC_DECLARE(0x6da7a00, internal_6da7a00, public_6da7a00);
extern "C" NAKED register_t __cdecl internal_6da7a00()
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
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da7a49
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6da7a49 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6da7a61
        mov dword ptr ds : [esi+0xC], ebp
        public_6da7a61 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da7a71
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da7a71 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da7a90
        mov dword ptr ds : [esi+0xC], ebp
        public_6da7a90 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6da7aa0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da7aa0 : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x24]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [edi+0x2C]
        test ecx, ecx
        jne public_6da7ab9
        xor eax, eax
        jmp public_6da7ac1
        public_6da7ab9 : nop
        mov eax, dword ptr ds : [edi+0x30]
        sub eax, ecx
        sar eax, 2
        public_6da7ac1 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 2
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6da7ad2
        mov dword ptr ds : [esi+0xC], ebp
        public_6da7ad2 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        je public_6da7ae2
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da7ae2 : nop
        mov ecx, dword ptr ds : [ebx]
        mov word ptr ds : [ecx], ax
        mov eax, dword ptr ds : [edi+0x2C]
        add ecx, 2
        mov dword ptr ds : [ebx], ecx
        cmp eax, dword ptr ds : [edi+0x30]
        je public_6da7b21
        public_6da7af4 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        jbe public_6da7b05
        mov dword ptr ds : [esi+0xC], ebp
        public_6da7b05 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6da7b35
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ds : [ebx], ecx
        mov ecx, dword ptr ds : [edi+0x30]
        add eax, 4
        cmp eax, ecx
        jne public_6da7af4
        public_6da7b21 : nop
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da7b3e
        public_6da7b35 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6da7b3e : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6da7b71
        mov dword ptr ds : [ecx+0x10], esi
        public_6da7b71 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6da7a00)
    }
}

#undef public_6da7a49
#undef public_6da7a61
#undef public_6da7a71
#undef public_6da7a90
#undef public_6da7aa0
#undef public_6da7ab9
#undef public_6da7ac1
#undef public_6da7ad2
#undef public_6da7ae2
#undef public_6da7af4
#undef public_6da7b05
#undef public_6da7b21
#undef public_6da7b35
#undef public_6da7b3e
#undef public_6da7b71
