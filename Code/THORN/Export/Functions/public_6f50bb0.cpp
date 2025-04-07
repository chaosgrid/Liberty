#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4af60);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4cea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e820);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f660);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f730);
CLANG_FORWARD_PROC_SYMBOL(public_6f50550);
CLANG_FORWARD_PROC_SYMBOL(public_6f505e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f50bf2 _public_6f50bf2
#define public_6f50c01 _public_6f50c01
#define public_6f50c12 _public_6f50c12
#define public_6f50c2a _public_6f50c2a

PROC_DECLARE(0x6f50bb0, internal_6f50bb0, public_6f50bb0);
extern "C" NAKED register_t __cdecl internal_6f50bb0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        push 1
        call public_6f505e0
        push 3
        mov edi, eax
        call public_6f4b090
        mov ebx, eax
        push edi
        mov dword ptr ss : [esp+0x1C], ebx
        call public_6f50550
        add esp, 0xC
        call public_6f57f16
        test ebx, ebx
        mov esi, eax
        push 2
        je public_6f50bf2
        call public_6f4f660
        add esp, 4
        call public_6f57f16
        mov ebp, eax
        jmp public_6f50c01
        public_6f50bf2 : nop
        call public_6f4f730
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        lea ebp, ds:[esi+1]
        public_6f50c01 : nop
        lea ebx, ds:[esi+1]
        push ebx
        push edi
        call public_6f4cea0
        add esp, 8
        cmp esi, ebp
        jl public_6f50c2a
        public_6f50c12 : nop
        push esi
        push edi
        call public_6f4e820
        push eax
        push ebx
        push edi
        call public_6f4e7f0
        add esp, 0x14
        dec esi
        dec ebx
        cmp esi, ebp
        jge public_6f50c12
        public_6f50c2a : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        call public_6f4af60
        push eax
        push ebp
        push edi
        call public_6f4e7f0
        add esp, 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f50bb0)
    }
}

#undef public_6f50bf2
#undef public_6f50c01
#undef public_6f50c12
#undef public_6f50c2a
