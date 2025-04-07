#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);

PROC_DECLARE(0x6f55e40, internal_6f55e40, public_6f55e40);
extern "C" NAKED register_t __cdecl internal_6f55e40()
{
    __asm
    {
        push ecx
        push 0
        push 1
        call public_6f4f5e0
        push eax
        call dword ptr ds : [public_6f5a10c]
        mov dword ptr ss : [esp+0xC], eax
        fild dword ptr ss : [esp+0xC]
        add esp, 4
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f55e40)
    }
}
