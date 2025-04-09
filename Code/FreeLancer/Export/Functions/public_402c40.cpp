#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402c40);
CLANG_FORWARD_PROC_SYMBOL(public_405130);
CLANG_FORWARD_PROC_SYMBOL(public_405510);
CLANG_FORWARD_PROC_SYMBOL(public_405820);
CLANG_FORWARD_PROC_SYMBOL(public_4f3770);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_402c50 _public_402c50
#define public_402c80 _public_402c80
#define public_402ca8 _public_402ca8
#define public_402ccd _public_402ccd
#define public_402cd1 _public_402cd1
#define public_402cf1 _public_402cf1

PROC_DECLARE(0x402c40, internal_402c40, public_402c40);
extern "C" NAKED register_t __cdecl internal_402c40()
{
    __asm
    {
        mov ecx, offset public_616478
        jmp public_402c50
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_402c50 : nop
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
        je public_402ccd
        mov ecx, eax
        cmp eax, ecx
        jne public_402ccd
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_402ca8
        nop 
        lea esp, ss:[esp]
        public_402c80 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_405510
        mov edi, dword ptr ds : [edi]
        push ebp
        lea ecx, ds:[ebx+0xC]
        call public_405820
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_402c80
        public_402ca8 : nop
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
        jmp public_402cf1
        public_402ccd : nop
        cmp eax, edi
        je public_402cf1
        public_402cd1 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_4f3770
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_405130
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edi
        jne public_402cd1
        public_402cf1 : nop
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
        UNREACHABLE_TRAP(0x402c40)
    }
}

#undef public_402c50
#undef public_402c80
#undef public_402ca8
#undef public_402ccd
#undef public_402cd1
#undef public_402cf1
