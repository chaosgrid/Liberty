#include "RPCLocal-PCH.h"

PROC_DECLARE(0x6db1db6, internal_6db1db6, public_6db1db6);
extern "C" NAKED register_t __cdecl internal_6db1db6()
{
    __asm
    {
        jmp dword ptr ds : [public_6db3010]
        UNREACHABLE_TRAP(0x6db1db6)
    }
}
