#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f0c, internal_6fa8f0c, public_6fa8f0c);
extern "C" NAKED register_t __cdecl internal_6fa8f0c()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb3060]
        UNREACHABLE_TRAP(0x6fa8f0c)
    }
}
