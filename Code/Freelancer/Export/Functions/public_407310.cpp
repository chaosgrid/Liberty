#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_407100);
CLANG_FORWARD_PROC_SYMBOL(public_407310);

PROC_DECLARE(0x407310, internal_407310, public_407310);
extern "C" NAKED register_t __cdecl internal_407310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+4], eax
        jmp public_407100
        UNREACHABLE_TRAP(0x407310)
    }
}
