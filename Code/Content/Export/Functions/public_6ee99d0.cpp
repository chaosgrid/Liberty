#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee99d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eecae0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeea10);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f46640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ee9a00 _public_6ee9a00
#define public_6ee9a28 _public_6ee9a28
#define public_6ee9a4d _public_6ee9a4d
#define public_6ee9a51 _public_6ee9a51
#define public_6ee9a71 _public_6ee9a71

PROC_DECLARE(0x6ee99d0, internal_6ee99d0, public_6ee99d0);
extern "C" NAKED register_t __cdecl internal_6ee99d0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        xor ebp, ebp
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], eax
        je public_6ee9a4d
        mov ecx, eax
        cmp eax, ecx
        jne public_6ee9a4d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ee9a28
        nop 
        lea esp, ss:[esp]
        public_6ee9a00 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6eed4f0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6eeea10
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ee9a00
        public_6ee9a28 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6f1df30
        jmp public_6ee9a71
        public_6ee9a4d : nop
        cmp eax, edi
        je public_6ee9a71
        public_6ee9a51 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f46640
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6eecae0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ee9a51
        public_6ee9a71 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ee99d0)
    }
}

#undef public_6ee9a00
#undef public_6ee9a28
#undef public_6ee9a4d
#undef public_6ee9a51
#undef public_6ee9a71
