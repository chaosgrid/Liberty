#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b782a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b782b2);

PROC_DECLARE(0x6b782a0, internal_6b782a0, public_6b782a0);
extern "C" NAKED register_t __cdecl internal_6b782a0()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6b782b2
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6b782a0)
    }
}
