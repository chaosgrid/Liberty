#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f78, internal_6fa8f78, public_6fa8f78);
extern "C" NAKED register_t __cdecl internal_6fa8f78()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb3100]
        UNREACHABLE_TRAP(0x6fa8f78)
    }
}
