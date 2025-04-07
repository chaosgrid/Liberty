#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f36, internal_6fa8f36, public_6fa8f36);
extern "C" NAKED register_t __cdecl internal_6fa8f36()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30d0]
        UNREACHABLE_TRAP(0x6fa8f36)
    }
}
