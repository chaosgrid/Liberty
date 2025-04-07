#include "Server-PCH.h"

PROC_DECLARE(0x6d5fedc, internal_6d5fedc, public_6d5fedc);
extern "C" NAKED register_t __cdecl internal_6d5fedc()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64174]
        UNREACHABLE_TRAP(0x6d5fedc)
    }
}
