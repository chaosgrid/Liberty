#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6c46);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c4c);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c52);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c58);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c64);

#define public_65d5ca8 _public_65d5ca8
#define public_65d5cc4 _public_65d5cc4
#define public_65d5cd1 _public_65d5cd1
#define public_65d5d1c _public_65d5d1c
#define public_65d5d3e _public_65d5d3e

PROC_DECLARE(0x65d5c90, internal_65d5c90, public_65d5c90);
extern "C" NAKED register_t __cdecl internal_65d5c90()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        cmp dword ptr ds : [esi+4], 0xFFFFFFFF
        je public_65d5ca8
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x10
        ret 8
        public_65d5ca8 : nop
        push 0
        push 1
        push 2
        call public_65d6c64
        cmp eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+4], eax
        jne public_65d5cc4
        or eax, eax
        pop esi
        add esp, 0x10
        ret 8
        public_65d5cc4 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        test eax, eax
        jne public_65d5cd1
        mov eax, 0x50
        public_65d5cd1 : nop
        xor ecx, ecx
        push eax
        mov dword ptr ss : [esp+8], ecx
        mov word ptr ss : [esp+8], 2
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], ecx
        call public_65d6c58
        lea edx, ss:[esp+4]
        push 0x10
        mov word ptr ss : [esp+0xA], ax
        mov eax, dword ptr ds : [esi+4]
        push edx
        push eax
        call public_65d6c52
        test eax, eax
        jge public_65d5d1c
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_65d6c4c
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x10
        ret 8
        public_65d5d1c : nop
        mov edx, dword ptr ds : [esi+4]
        push 5
        push edx
        call public_65d6c46
        test eax, eax
        jge public_65d5d3e
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_65d6c4c
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x10
        ret 8
        public_65d5d3e : nop
        xor eax, eax
        pop esi
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x65d5c90)
    }
}

#undef public_65d5ca8
#undef public_65d5cc4
#undef public_65d5cd1
#undef public_65d5d1c
#undef public_65d5d3e
