#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d58b3a);
CLANG_FORWARD_PROC_SYMBOL(public_6d5acac);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b10e);

#define public_6d58b7c _public_6d58b7c
#define public_6d58b81 _public_6d58b81

PROC_DECLARE(0x6d58b3a, internal_6d58b3a, public_6d58b3a);
extern "C" NAKED register_t __cdecl internal_6d58b3a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x90
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+0x11C]
        mov edx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [edx+0x50]
        add eax, 0x80
        push eax
        push dword ptr ss : [ebp+0x18]
        lea ecx, ss:[ebp-0x88]
        push dword ptr ss : [ebp+0x14]
        and ecx, 0xFFFFFFF8
        cmp byte ptr ds : [public_6d6d400], 0
        push ecx
        push edx
        push dword ptr ss : [ebp+0x10]
        je public_6d58b7c
        call public_6d5b10e
        jmp public_6d58b81
        public_6d58b7c : nop
        call public_6d5acac
        public_6d58b81 : nop
        add esp, 0x18
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d58b3a)
    }
}

#undef public_6d58b7c
#undef public_6d58b81
