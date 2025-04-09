#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ea6e0);
CLANG_FORWARD_PROC_SYMBOL(public_4f30a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f3480);
CLANG_FORWARD_PROC_SYMBOL(public_4f3770);
CLANG_FORWARD_PROC_SYMBOL(public_4f3a40);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4ea710 _public_4ea710
#define public_4ea738 _public_4ea738
#define public_4ea75d _public_4ea75d
#define public_4ea761 _public_4ea761
#define public_4ea781 _public_4ea781

PROC_DECLARE(0x4ea6e0, internal_4ea6e0, public_4ea6e0);
extern "C" NAKED register_t __cdecl internal_4ea6e0()
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
        je public_4ea75d
        mov ecx, eax
        cmp eax, ecx
        jne public_4ea75d
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4ea738
        nop 
        lea esp, ss:[esp]
        public_4ea710 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4f3480
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_4f3a40
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4ea710
        public_4ea738 : nop
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
        call public_53e430
        jmp public_4ea781
        public_4ea75d : nop
        cmp eax, edi
        je public_4ea781
        public_4ea761 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_4f3770
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_4f30a0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_4ea761
        public_4ea781 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+0x10], ebp
        call public_5b7e1d
        add esp, 8
        pop edi
        mov dword ptr ds : [esi+8], ebp
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4ea6e0)
    }
}

#undef public_4ea710
#undef public_4ea738
#undef public_4ea75d
#undef public_4ea761
#undef public_4ea781
