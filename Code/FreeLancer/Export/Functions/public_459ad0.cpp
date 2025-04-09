#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4592b0);
CLANG_FORWARD_PROC_SYMBOL(public_459ad0);

#define public_459aef _public_459aef

PROC_DECLARE(0x459ad0, internal_459ad0, public_459ad0);
extern "C" NAKED register_t __cdecl internal_459ad0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_66d334]
        test ecx, ecx
        je public_459aef
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+8]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push edx
        push eax
        call public_4592b0
        ret 
        public_459aef : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x459ad0)
    }
}

#undef public_459aef
