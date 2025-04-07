#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f42, internal_6fa8f42, public_6fa8f42);
extern "C" NAKED register_t __cdecl internal_6fa8f42()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30d8]
        UNREACHABLE_TRAP(0x6fa8f42)
    }
}
