#include "Server-PCH.h"

PROC_DECLARE(0x6d5ff30, internal_6d5ff30, public_6d5ff30);
extern "C" NAKED register_t __cdecl internal_6d5ff30()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64514]
        UNREACHABLE_TRAP(0x6d5ff30)
    }
}
