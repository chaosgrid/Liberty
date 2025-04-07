#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f84, internal_6fa8f84, public_6fa8f84);
extern "C" NAKED register_t __cdecl internal_6fa8f84()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb3108]
        UNREACHABLE_TRAP(0x6fa8f84)
    }
}
