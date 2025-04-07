#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3810);
CLANG_FORWARD_PROC_SYMBOL(public_62a6c60);
CLANG_FORWARD_PROC_SYMBOL(public_62a72a0);
CLANG_FORWARD_PROC_SYMBOL(public_62a7960);
CLANG_FORWARD_PROC_SYMBOL(public_62a81b0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a3840 _public_62a3840
#define public_62a3868 _public_62a3868
#define public_62a388d _public_62a388d
#define public_62a3891 _public_62a3891
#define public_62a38b1 _public_62a38b1

PROC_DECLARE(0x62a3810, internal_62a3810, public_62a3810);
extern "C" NAKED register_t __cdecl internal_62a3810()
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
        je public_62a388d
        mov ecx, eax
        cmp eax, ecx
        jne public_62a388d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62a3868
        nop 
        lea esp, ss:[esp]
        public_62a3840 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62a7960
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_62a81b0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62a3840
        public_62a3868 : nop
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
        jmp public_62a38b1
        public_62a388d : nop
        cmp eax, edi
        je public_62a38b1
        public_62a3891 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_62a72a0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62a6c60
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_62a3891
        public_62a38b1 : nop
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
        UNREACHABLE_TRAP(0x62a3810)
    }
}

#undef public_62a3840
#undef public_62a3868
#undef public_62a388d
#undef public_62a3891
#undef public_62a38b1
