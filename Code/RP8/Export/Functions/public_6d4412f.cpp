#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44034);
CLANG_FORWARD_PROC_SYMBOL(public_6d44114);
CLANG_FORWARD_PROC_SYMBOL(public_6d4412f);

#define public_6d44166 _public_6d44166

PROC_DECLARE(0x6d4412f, internal_6d4412f, public_6d4412f);
extern "C" NAKED register_t __cdecl internal_6d4412f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+8], 0
        je public_6d44166
        cmp dword ptr ss : [ebp+0xC], 0
        je public_6d44166
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d44114
        fld qword ptr ds : [public_6d60f78]
        add esp, 4
        fstp qword ptr ss : [esp]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d44034
        add esp, 0x10
        public_6d44166 : nop
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4412f)
    }
}

#undef public_6d44166
