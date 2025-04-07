#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b090);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b960);

PROC_DECLARE(0x6f501b0, internal_6f501b0, public_6f501b0);
extern "C" NAKED register_t __cdecl internal_6f501b0()
{
    __asm
    {
        push ecx
        push 1
        call public_6f4b090
        push eax
        call public_6f4b960
        mov dword ptr ss : [esp+8], eax
        fild dword ptr ss : [esp+8]
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f501b0)
    }
}
