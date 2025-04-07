#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f72, internal_6fa8f72, public_6fa8f72);
extern "C" NAKED register_t __cdecl internal_6fa8f72()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30fc]
        UNREACHABLE_TRAP(0x6fa8f72)
    }
}
