#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f48, internal_6fa8f48, public_6fa8f48);
extern "C" NAKED register_t __cdecl internal_6fa8f48()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30dc]
        UNREACHABLE_TRAP(0x6fa8f48)
    }
}
