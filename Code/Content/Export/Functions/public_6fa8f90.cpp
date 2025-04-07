#include "Content-PCH.h"

PROC_DECLARE(0x6fa8f90, internal_6fa8f90, public_6fa8f90);
extern "C" NAKED register_t __cdecl internal_6fa8f90()
{
    __asm
    {
        jmp dword ptr ds : [public_6fb324c]
        UNREACHABLE_TRAP(0x6fa8f90)
    }
}
