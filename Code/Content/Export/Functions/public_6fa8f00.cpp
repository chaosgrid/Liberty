#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f00, internal_6fa8f00, public_6fa8f00);
extern "C" NAKED register_t __cdecl internal_6fa8f00()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb3058]
        UNREACHABLE_TRAP(0x6fa8f00)
    }
}
