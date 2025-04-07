#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da17e0);
CLANG_FORWARD_PROC_SYMBOL(public_6da2740);
CLANG_FORWARD_PROC_SYMBOL(public_6da2da0);
CLANG_FORWARD_PROC_SYMBOL(public_6da31d0);
CLANG_FORWARD_PROC_SYMBOL(public_6da3540);
CLANG_FORWARD_PROC_SYMBOL(public_6da3700);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6da2750 _public_6da2750
#define public_6da2780 _public_6da2780
#define public_6da27a8 _public_6da27a8
#define public_6da27cd _public_6da27cd
#define public_6da27d1 _public_6da27d1
#define public_6da27f1 _public_6da27f1

PROC_DECLARE(0x6da2740, internal_6da2740, public_6da2740);
extern "C" NAKED register_t __cdecl internal_6da2740()
{
    __asm
    {
        mov ecx, offset public_6dbbf64
        jmp public_6da2750
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6da2750 : nop
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
        je public_6da27cd
        mov ecx, eax
        cmp eax, ecx
        jne public_6da27cd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6da27a8
        nop 
        lea esp, ss:[esp]
        public_6da2780 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6da31d0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6da3700
        push ebx
        call public_6db1dc2
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6da2780
        public_6da27a8 : nop
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
        call public_6da17e0
        jmp public_6da27f1
        public_6da27cd : nop
        cmp eax, edi
        je public_6da27f1
        public_6da27d1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6da3540
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6da2da0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6da27d1
        public_6da27f1 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6db1dc2
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_6db1dc2
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6da2740)
    }
}

#undef public_6da2750
#undef public_6da2780
#undef public_6da27a8
#undef public_6da27cd
#undef public_6da27d1
#undef public_6da27f1
