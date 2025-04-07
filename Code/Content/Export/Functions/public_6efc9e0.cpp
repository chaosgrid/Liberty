#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea76e0);
CLANG_FORWARD_PROC_SYMBOL(public_6efc9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6efd910);
CLANG_FORWARD_PROC_SYMBOL(public_6efdcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6efe0e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6efc9f0 _public_6efc9f0
#define public_6efca20 _public_6efca20
#define public_6efca48 _public_6efca48
#define public_6efca6d _public_6efca6d
#define public_6efca71 _public_6efca71
#define public_6efca91 _public_6efca91

PROC_DECLARE(0x6efc9e0, internal_6efc9e0, public_6efc9e0);
extern "C" NAKED register_t __cdecl internal_6efc9e0()
{
    __asm
    {
        mov ecx, offset public_6fcf38c
        jmp public_6efc9f0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_6efc9f0 : nop
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
        je public_6efca6d
        mov ecx, eax
        cmp eax, ecx
        jne public_6efca6d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6efca48
        nop 
        lea esp, ss:[esp]
        public_6efca20 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6efdcf0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_6efe0e0
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6efca20
        public_6efca48 : nop
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
        jmp public_6efca91
        public_6efca6d : nop
        cmp eax, edi
        je public_6efca91
        public_6efca71 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_6ea76e0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_6efd910
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_6efca71
        public_6efca91 : nop
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
        UNREACHABLE_TRAP(0x6efc9e0)
    }
}

#undef public_6efc9f0
#undef public_6efca20
#undef public_6efca48
#undef public_6efca6d
#undef public_6efca71
#undef public_6efca91
