#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f54, internal_6fa8f54, public_6fa8f54);
extern "C" NAKED register_t __cdecl internal_6fa8f54()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30e8]
        UNREACHABLE_TRAP(0x6fa8f54)
    }
}
