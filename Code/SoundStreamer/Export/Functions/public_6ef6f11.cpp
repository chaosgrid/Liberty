#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6c4a);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6d4e);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6e2c);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6f11);

#define public_6ef6f39 _public_6ef6f39
#define public_6ef6f4c _public_6ef6f4c
#define public_6ef6f5d _public_6ef6f5d

PROC_DECLARE(0x6ef6f11, internal_6ef6f11, public_6ef6f11);
extern "C" NAKED register_t __cdecl internal_6ef6f11()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+0x10], 0x65
        je public_6ef6f4c
        cmp dword ptr ss : [ebp+0x10], 0x45
        je public_6ef6f4c
        cmp dword ptr ss : [ebp+0x10], 0x66
        jne public_6ef6f39
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ef6d4e
        add esp, 0xC
        pop ebp
        ret 
        public_6ef6f39 : nop
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ef6e2c
        jmp public_6ef6f5d
        public_6ef6f4c : nop
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ef6c4a
        public_6ef6f5d : nop
        add esp, 0x10
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ef6f11)
    }
}

#undef public_6ef6f39
#undef public_6ef6f4c
#undef public_6ef6f5d
