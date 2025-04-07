#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7f20);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7f80);

#define public_6ac7f4a _public_6ac7f4a
#define public_6ac7f6c _public_6ac7f6c

PROC_DECLARE(0x6ac7f20, internal_6ac7f20, public_6ac7f20);
extern "C" NAKED register_t __cdecl internal_6ac7f20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, 1
        jne public_6ac7f4a
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        push ecx
        push 2
        push edx
        push eax
        call public_6ac3140
        neg eax
        sbb eax, eax
        neg eax
        ret 0x10
        public_6ac7f4a : nop
        cmp eax, 0xFFFFFFFF
        jne public_6ac7f6c
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        push ecx
        push edx
        push eax
        call public_6ac7f80
        neg eax
        sbb eax, eax
        neg eax
        ret 0x10
        public_6ac7f6c : nop
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x6ac7f20)
    }
}

#undef public_6ac7f4a
#undef public_6ac7f6c
