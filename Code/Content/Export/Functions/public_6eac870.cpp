#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac870);
CLANG_FORWARD_PROC_SYMBOL(public_6eaf5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eafac0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2170);
CLANG_FORWARD_PROC_SYMBOL(public_6f46730);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eac8a0 _public_6eac8a0
#define public_6eac8c8 _public_6eac8c8
#define public_6eac8e1 _public_6eac8e1
#define public_6eac8e5 _public_6eac8e5
#define public_6eac905 _public_6eac905

PROC_DECLARE(0x6eac870, internal_6eac870, public_6eac870);
extern "C" NAKED register_t __cdecl internal_6eac870()
{
    __asm
    {
        sub esp, 8
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
        je public_6eac8e1
        mov ecx, eax
        cmp eax, ecx
        jne public_6eac8e1
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6eac8c8
        nop 
        lea esp, ss:[esp]
        public_6eac8a0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6eafac0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6eb2170
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6eac8a0
        public_6eac8c8 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_6eac905
        public_6eac8e1 : nop
        cmp eax, edi
        je public_6eac905
        public_6eac8e5 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f46730
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_6eaf5e0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6eac8e5
        public_6eac905 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_6fa8fe0
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6fa8fe0
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6eac870)
    }
}

#undef public_6eac8a0
#undef public_6eac8c8
#undef public_6eac8e1
#undef public_6eac8e5
#undef public_6eac905
