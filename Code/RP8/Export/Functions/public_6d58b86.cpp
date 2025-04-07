#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d58b86);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b7c6);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bb21);

#define public_6d58bc8 _public_6d58bc8
#define public_6d58bcd _public_6d58bcd

PROC_DECLARE(0x6d58b86, internal_6d58b86, public_6d58b86);
extern "C" NAKED register_t __cdecl internal_6d58b86()
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
        push edx
        push ecx
        push dword ptr ss : [ebp+0x10]
        je public_6d58bc8
        call public_6d5bb21
        jmp public_6d58bcd
        public_6d58bc8 : nop
        call public_6d5b7c6
        public_6d58bcd : nop
        add esp, 0x18
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d58b86)
    }
}

#undef public_6d58bc8
#undef public_6d58bcd
