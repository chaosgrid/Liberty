#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ed5940);
CLANG_FORWARD_PROC_SYMBOL(public_6ed5960);
CLANG_FORWARD_PROC_SYMBOL(public_6f5a7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f72a80);
CLANG_FORWARD_PROC_SYMBOL(public_6f75bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a760);
CLANG_FORWARD_PROC_SYMBOL(public_6f7a870);
CLANG_FORWARD_PROC_SYMBOL(public_6f7d270);
CLANG_FORWARD_PROC_SYMBOL(public_6f7e420);

#define public_6f75be0 _public_6f75be0
#define public_6f75c00 _public_6f75c00
#define public_6f75c12 _public_6f75c12
#define public_6f75c2a _public_6f75c2a
#define public_6f75c36 _public_6f75c36
#define public_6f75c48 _public_6f75c48
#define public_6f75c60 _public_6f75c60
#define public_6f75c6e _public_6f75c6e
#define public_6f75c86 _public_6f75c86
#define public_6f75c94 _public_6f75c94
#define public_6f75cae _public_6f75cae
#define public_6f75d05 _public_6f75d05

PROC_DECLARE(0x6f75bc0, internal_6f75bc0, public_6f75bc0);
extern "C" NAKED register_t __cdecl internal_6f75bc0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        call public_6f72a80
        mov edi, dword ptr ds : [esi+0x8C]
        cmp edi, dword ptr ds : [esi+0x90]
        je public_6f75c00
        lea ebx, ds:[ebx]
        public_6f75be0 : nop
        push 0
        mov ecx, edi
        call public_6ed5960
        mov ecx, edi
        call public_6ed5940
        mov eax, dword ptr ds : [esi+0x90]
        add edi, 0x548
        cmp edi, eax
        jne public_6f75be0
        public_6f75c00 : nop
        mov ebp, dword ptr ds : [esi+0x90]
        mov ebx, dword ptr ds : [esi+0x8C]
        mov edi, ebp
        cmp edi, ebp
        je public_6f75c2a
        public_6f75c12 : nop
        push edi
        mov ecx, ebx
        call public_6f7e420
        add edi, 0x548
        add ebx, 0x548
        cmp edi, ebp
        jne public_6f75c12
        public_6f75c2a : nop
        mov ebp, dword ptr ds : [esi+0x90]
        cmp ebx, ebp
        mov edi, ebx
        je public_6f75c48
        public_6f75c36 : nop
        mov eax, dword ptr ds : [edi]
        push 0
        mov ecx, edi
        call dword ptr ds : [eax]
        add edi, 0x548
        cmp edi, ebp
        jne public_6f75c36
        public_6f75c48 : nop
        mov dword ptr ds : [esi+0x90], ebx
        mov edx, dword ptr ds : [esi+0xA0]
        mov ecx, dword ptr ds : [esi+0x9C]
        mov eax, edx
        cmp eax, edx
        je public_6f75c6e
        public_6f75c60 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f75c60
        public_6f75c6e : nop
        mov dword ptr ds : [esi+0xA0], ecx
        mov edx, dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [esi+0xAC]
        mov eax, edx
        cmp eax, edx
        je public_6f75c94
        public_6f75c86 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f75c86
        public_6f75c94 : nop
        mov dword ptr ds : [esi+0xB0], ecx
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f75cae
        push 1
        call public_6f5a7c0
        add esp, 4
        public_6f75cae : nop
        dec dword ptr ds : [esi+0x4C]
        jne public_6f75d05
        mov ecx, dword ptr ds : [esi+0x110]
        mov eax, dword ptr ds : [esi+0x114]
        lea edi, ds:[esi+0x10C]
        push ecx
        push eax
        push eax
        call public_6f7d270
        mov ecx, dword ptr ds : [edi+8]
        add esp, 0xC
        push ecx
        mov ebx, eax
        push ebx
        mov ecx, edi
        call public_6ea1490
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x74]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x70]
        push eax
        push edx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6f7a870
        mov eax, dword ptr ds : [esi+0x68]
        mov edx, dword ptr ds : [esi+0x64]
        lea ecx, ds:[esi+0x60]
        push eax
        push edx
        call public_6f7a760
        public_6f75d05 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f75bc0)
    }
}

#undef public_6f75be0
#undef public_6f75c00
#undef public_6f75c12
#undef public_6f75c2a
#undef public_6f75c36
#undef public_6f75c48
#undef public_6f75c60
#undef public_6f75c6e
#undef public_6f75c86
#undef public_6f75c94
#undef public_6f75cae
#undef public_6f75d05
