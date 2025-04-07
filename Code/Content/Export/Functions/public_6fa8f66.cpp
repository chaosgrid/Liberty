#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f66, internal_6fa8f66, public_6fa8f66);
extern "C" NAKED register_t __cdecl internal_6fa8f66()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30f4]
        UNREACHABLE_TRAP(0x6fa8f66)
    }
}
