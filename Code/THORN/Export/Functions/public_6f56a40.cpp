#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4f5e0);

PROC_DECLARE(0x6f56a40, internal_6f56a40, public_6f56a40);
extern "C" NAKED register_t __cdecl internal_6f56a40()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push eax
        push 1
        call public_6f4f5e0
        fild dword ptr ss : [esp+8]
        fstp qword ptr ss : [esp]
        call public_6f4b6f0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6f56a40)
    }
}
