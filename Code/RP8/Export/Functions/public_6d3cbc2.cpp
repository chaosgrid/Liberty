#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3cbc2, internal_6d3cbc2, public_6d3cbc2);
extern "C" NAKED register_t __cdecl internal_6d3cbc2()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 1
        call public_6d404a2
        pop ebp
        jmp dword ptr ds : [public_6d6ca78]
        UNREACHABLE_TRAP(0x6d3cbc2)
    }
}
