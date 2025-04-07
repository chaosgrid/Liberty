#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f4e, internal_6fa8f4e, public_6fa8f4e);
extern "C" NAKED register_t __cdecl internal_6fa8f4e()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30e4]
        UNREACHABLE_TRAP(0x6fa8f4e)
    }
}
