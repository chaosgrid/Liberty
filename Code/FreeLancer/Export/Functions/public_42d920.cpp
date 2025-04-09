#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d920);
CLANG_FORWARD_PROC_SYMBOL(public_42f300);
CLANG_FORWARD_PROC_SYMBOL(public_42f6e0);
CLANG_FORWARD_PROC_SYMBOL(public_4303a0);
CLANG_FORWARD_PROC_SYMBOL(public_430770);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42d930 _public_42d930
#define public_42d960 _public_42d960
#define public_42d988 _public_42d988
#define public_42d9ad _public_42d9ad
#define public_42d9b1 _public_42d9b1
#define public_42d9d1 _public_42d9d1

PROC_DECLARE(0x42d920, internal_42d920, public_42d920);
extern "C" NAKED register_t __cdecl internal_42d920()
{
    __asm
    {
        mov ecx, offset public_667df0
        jmp public_42d930
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_42d930 : nop
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
        je public_42d9ad
        mov ecx, eax
        cmp eax, ecx
        jne public_42d9ad
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_42d988
        nop 
        lea esp, ss:[esp]
        public_42d960 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_42f6e0
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_430770
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_42d960
        public_42d988 : nop
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
        jmp public_42d9d1
        public_42d9ad : nop
        cmp eax, edi
        je public_42d9d1
        public_42d9b1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_4303a0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_42f300
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_42d9b1
        public_42d9d1 : nop
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
        UNREACHABLE_TRAP(0x42d920)
    }
}

#undef public_42d930
#undef public_42d960
#undef public_42d988
#undef public_42d9ad
#undef public_42d9b1
#undef public_42d9d1
