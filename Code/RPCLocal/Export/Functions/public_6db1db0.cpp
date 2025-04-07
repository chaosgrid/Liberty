#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1db0, internal_6db1db0, public_6db1db0);
extern "C" NAKED register_t __cdecl internal_6db1db0()
{
    __asm
    {
        jmp dword ptr ds : [public_6db300c]
        UNREACHABLE_TRAP(0x6db1db0)
    }
}
