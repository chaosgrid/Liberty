#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09984, internal_6c09984, public_6c09984);
extern "C" NAKED register_t __cdecl internal_6c09984()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b060]
        UNREACHABLE_TRAP(0x6c09984)
    }
}
