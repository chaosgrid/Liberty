#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda220);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bf1a04 _public_6bf1a04
#define public_6bf1a1c _public_6bf1a1c
#define public_6bf1a46 _public_6bf1a46
#define public_6bf1a7d _public_6bf1a7d
#define public_6bf1aa7 _public_6bf1aa7
#define public_6bf1ad3 _public_6bf1ad3
#define public_6bf1b13 _public_6bf1b13
#define public_6bf1b45 _public_6bf1b45
#define public_6bf1b77 _public_6bf1b77
#define public_6bf1b92 _public_6bf1b92
#define public_6bf1bba _public_6bf1bba
#define public_6bf1bf8 _public_6bf1bf8
#define public_6bf1c04 _public_6bf1c04

PROC_DECLARE(0x6bf19c0, internal_6bf19c0, public_6bf19c0);
extern "C" NAKED register_t __cdecl internal_6bf19c0()
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
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf1a04
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bf1a04 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6bf1a1c
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf1a1c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf1c04
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
        jbe public_6bf1a46
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf1a46 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf1c04
        mov eax, dword ptr ds : [ebx]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        push ecx
        call dword ptr ds : [public_6c0b000]
        mov dword ptr ds : [edi+0x24], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf1a7d
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf1a7d : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf1c04
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
        jbe public_6bf1aa7
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf1aa7 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf1c04
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
        jbe public_6bf1ad3
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf1ad3 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf1c04
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x40]
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        call dword ptr ds : [public_6c0b080]
        test al, al
        je public_6bf1b92
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf1b13
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf1b13 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf1c04
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x30]
        call public_6bda220
        add ebp, 0x10
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf1b45
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf1b45 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf1c04
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x4C]
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf1b77
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf1b77 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf1c04
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x58]
        call public_6bda4c0
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        public_6bf1b92 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [edi+0x64], 0
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf1bba
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bf1bba : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6bec3b0
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
        jbe public_6bf1bf8
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bf1bf8 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bf1c04 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bf19c0)
    }
}

#undef public_6bf1a04
#undef public_6bf1a1c
#undef public_6bf1a46
#undef public_6bf1a7d
#undef public_6bf1aa7
#undef public_6bf1ad3
#undef public_6bf1b13
#undef public_6bf1b45
#undef public_6bf1b77
#undef public_6bf1b92
#undef public_6bf1bba
#undef public_6bf1bf8
#undef public_6bf1c04
