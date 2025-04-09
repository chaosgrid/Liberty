#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_531930);
CLANG_FORWARD_PROC_SYMBOL(public_5ad4b0);
CLANG_FORWARD_PROC_SYMBOL(public_5adba0);
CLANG_FORWARD_PROC_SYMBOL(public_5adf80);
CLANG_FORWARD_PROC_SYMBOL(public_5af680);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5ad4e0 _public_5ad4e0
#define public_5ad508 _public_5ad508
#define public_5ad521 _public_5ad521
#define public_5ad525 _public_5ad525
#define public_5ad545 _public_5ad545

PROC_DECLARE(0x5ad4b0, internal_5ad4b0, public_5ad4b0);
extern "C" NAKED register_t __cdecl internal_5ad4b0()
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
        je public_5ad521
        mov ecx, eax
        cmp eax, ecx
        jne public_5ad521
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_5ad508
        nop 
        lea esp, ss:[esp]
        public_5ad4e0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_5adf80
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_5af680
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_5ad4e0
        public_5ad508 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        jmp public_5ad545
        public_5ad521 : nop
        cmp eax, edi
        je public_5ad545
        public_5ad525 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_531930
        push ebx
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, esi
        call public_5adba0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_5ad525
        public_5ad545 : nop
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x5ad4b0)
    }
}

#undef public_5ad4e0
#undef public_5ad508
#undef public_5ad521
#undef public_5ad525
#undef public_5ad545
