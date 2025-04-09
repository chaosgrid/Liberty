#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b27c0);

#define public_5b27eb _public_5b27eb

PROC_DECLARE(0x5b27c0, internal_5b27c0, public_5b27c0);
extern "C" NAKED register_t __cdecl internal_5b27c0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        je public_5b27eb
        call dword ptr ds : [public_5c7178]
        push 0
        push 0
        call dword ptr ds : [public_5c7174]
        and eax, 0xFFFFFFE3
        push 0x8001F
        push eax
        call dword ptr ds : [public_5c70cc]
        add esp, 0x10
        ret 
        public_5b27eb : nop
        push 0x8001F
        push 0x9001F
        call dword ptr ds : [public_5c70cc]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x5b27c0)
    }
}

#undef public_5b27eb
