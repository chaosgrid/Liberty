#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d276f0);

PROC_DECLARE(0x6d276f0, internal_6d276f0, public_6d276f0);
extern "C" NAKED register_t __cdecl internal_6d276f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub eax, dword ptr ss : [esp+4]
        sar eax, 1
        ret 
        UNREACHABLE_TRAP(0x6d276f0)
    }
}
