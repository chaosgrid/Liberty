#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5574a0);

PROC_DECLARE(0x453fd0, internal_453fd0, public_453fd0);
extern "C" NAKED register_t __cdecl internal_453fd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        lea ecx, ds:[eax+0x54]
        call public_5574a0
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x453fd0)
    }
}
