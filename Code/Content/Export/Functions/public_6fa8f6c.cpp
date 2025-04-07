#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f6c, internal_6fa8f6c, public_6fa8f6c);
extern "C" NAKED register_t __cdecl internal_6fa8f6c()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30f8]
        UNREACHABLE_TRAP(0x6fa8f6c)
    }
}
