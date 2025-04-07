#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f2a, internal_6fa8f2a, public_6fa8f2a);
extern "C" NAKED register_t __cdecl internal_6fa8f2a()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb30c8]
        UNREACHABLE_TRAP(0x6fa8f2a)
    }
}
