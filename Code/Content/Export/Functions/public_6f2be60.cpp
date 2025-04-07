#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f24610);
CLANG_FORWARD_PROC_SYMBOL(public_6f2be60);
CLANG_FORWARD_PROC_SYMBOL(public_6f2e540);
CLANG_FORWARD_PROC_SYMBOL(public_6f2ea20);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f5a0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2be90 _public_6f2be90
#define public_6f2beb8 _public_6f2beb8
#define public_6f2bedd _public_6f2bedd
#define public_6f2bee1 _public_6f2bee1
#define public_6f2bf01 _public_6f2bf01

PROC_DECLARE(0x6f2be60, internal_6f2be60, public_6f2be60);
extern "C" NAKED register_t __cdecl internal_6f2be60()
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
        je public_6f2bedd
        mov ecx, eax
        cmp eax, ecx
        jne public_6f2bedd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f2beb8
        nop 
        lea esp, ss:[esp]
        public_6f2be90 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f2ea20
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f2f5a0
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f2be90
        public_6f2beb8 : nop
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
        jmp public_6f2bf01
        public_6f2bedd : nop
        cmp eax, edi
        je public_6f2bf01
        public_6f2bee1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f24610
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f2e540
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f2bee1
        public_6f2bf01 : nop
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
        UNREACHABLE_TRAP(0x6f2be60)
    }
}

#undef public_6f2be90
#undef public_6f2beb8
#undef public_6f2bedd
#undef public_6f2bee1
#undef public_6f2bf01
