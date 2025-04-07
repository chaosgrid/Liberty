#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f12, internal_6fa8f12, public_6fa8f12);
extern "C" NAKED register_t __cdecl internal_6fa8f12()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30b8]
        UNREACHABLE_TRAP(0x6fa8f12)
    }
}
