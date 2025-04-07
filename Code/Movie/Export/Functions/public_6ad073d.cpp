#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad048b);
CLANG_FORWARD_PROC_SYMBOL(public_6ad05ae);
CLANG_FORWARD_PROC_SYMBOL(public_6ad06aa);
CLANG_FORWARD_PROC_SYMBOL(public_6ad073d);

#define public_6ad0765 _public_6ad0765
#define public_6ad0778 _public_6ad0778
#define public_6ad0789 _public_6ad0789

PROC_DECLARE(0x6ad073d, internal_6ad073d, public_6ad073d);
extern "C" NAKED register_t __cdecl internal_6ad073d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+0x10], 0x65
        je public_6ad0778
        cmp dword ptr ss : [ebp+0x10], 0x45
        je public_6ad0778
        cmp dword ptr ss : [ebp+0x10], 0x66
        jne public_6ad0765
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ad05ae
        add esp, 0xC
        pop ebp
        ret 
        public_6ad0765 : nop
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ad06aa
        jmp public_6ad0789
        public_6ad0778 : nop
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6ad048b
        public_6ad0789 : nop
        add esp, 0x10
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6ad073d)
    }
}

#undef public_6ad0765
#undef public_6ad0778
#undef public_6ad0789
