#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f507a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f54960);
CLANG_FORWARD_PROC_SYMBOL(public_6f54d40);
CLANG_FORWARD_PROC_SYMBOL(public_6f552c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f56f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f507b0 _public_6f507b0
#define public_6f507e0 _public_6f507e0
#define public_6f50808 _public_6f50808
#define public_6f5082d _public_6f5082d
#define public_6f50831 _public_6f50831
#define public_6f50851 _public_6f50851

PROC_DECLARE(0x6f507a0, internal_6f507a0, public_6f507a0);
extern "C" NAKED register_t __cdecl internal_6f507a0()
{
    __asm
    {
        mov ecx, offset public_6fd0c90
        jmp public_6f507b0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6f507b0 : nop
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
        je public_6f5082d
        mov ecx, eax
        cmp eax, ecx
        jne public_6f5082d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f50808
        nop 
        lea esp, ss:[esp]
        public_6f507e0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f54d40
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6f56f30
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f507e0
        public_6f50808 : nop
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
        jmp public_6f50851
        public_6f5082d : nop
        cmp eax, edi
        je public_6f50851
        public_6f50831 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6f552c0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6f54960
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6f50831
        public_6f50851 : nop
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
        UNREACHABLE_TRAP(0x6f507a0)
    }
}

#undef public_6f507b0
#undef public_6f507e0
#undef public_6f50808
#undef public_6f5082d
#undef public_6f50831
#undef public_6f50851
