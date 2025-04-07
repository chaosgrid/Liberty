#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea9170);
CLANG_FORWARD_PROC_SYMBOL(public_6eaf5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eafac0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb2170);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f46730);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ea91a0 _public_6ea91a0
#define public_6ea91c8 _public_6ea91c8
#define public_6ea91ed _public_6ea91ed
#define public_6ea91f1 _public_6ea91f1
#define public_6ea9211 _public_6ea9211

PROC_DECLARE(0x6ea9170, internal_6ea9170, public_6ea9170);
extern "C" NAKED register_t __cdecl internal_6ea9170()
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
        je public_6ea91ed
        mov ecx, eax
        cmp eax, ecx
        jne public_6ea91ed
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ea91c8
        nop 
        lea esp, ss:[esp]
        public_6ea91a0 : nop
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
        jne public_6ea91a0
        public_6ea91c8 : nop
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
        jmp public_6ea9211
        public_6ea91ed : nop
        cmp eax, edi
        je public_6ea9211
        public_6ea91f1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f46730
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6eaf5e0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6ea91f1
        public_6ea9211 : nop
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
        UNREACHABLE_TRAP(0x6ea9170)
    }
}

#undef public_6ea91a0
#undef public_6ea91c8
#undef public_6ea91ed
#undef public_6ea91f1
#undef public_6ea9211
