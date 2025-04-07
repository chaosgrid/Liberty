#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631e7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6322b80);
CLANG_FORWARD_PROC_SYMBOL(public_6322f60);
CLANG_FORWARD_PROC_SYMBOL(public_63231f0);
CLANG_FORWARD_PROC_SYMBOL(public_6324180);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631e800 _public_631e800
#define public_631e830 _public_631e830
#define public_631e858 _public_631e858
#define public_631e87d _public_631e87d
#define public_631e881 _public_631e881
#define public_631e8a1 _public_631e8a1

PROC_DECLARE(0x631e7f0, internal_631e7f0, public_631e7f0);
extern "C" NAKED register_t __cdecl internal_631e7f0()
{
    __asm
    {
        mov ecx, offset public_64018ec
        jmp public_631e800
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_631e800 : nop
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
        je public_631e87d
        mov ecx, eax
        cmp eax, ecx
        jne public_631e87d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_631e858
        nop 
        lea esp, ss:[esp]
        public_631e830 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6322f60
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6324180
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_631e830
        public_631e858 : nop
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
        call public_632c410
        jmp public_631e8a1
        public_631e87d : nop
        cmp eax, edi
        je public_631e8a1
        public_631e881 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_63231f0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6322b80
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_631e881
        public_631e8a1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6391d5a
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x631e7f0)
    }
}

#undef public_631e800
#undef public_631e830
#undef public_631e858
#undef public_631e87d
#undef public_631e881
#undef public_631e8a1
