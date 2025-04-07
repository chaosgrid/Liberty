#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f3c, internal_6fa8f3c, public_6fa8f3c);
extern "C" NAKED register_t __cdecl internal_6fa8f3c()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30d4]
        UNREACHABLE_TRAP(0x6fa8f3c)
    }
}
