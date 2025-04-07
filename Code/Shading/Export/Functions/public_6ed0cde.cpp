#include "Shading-PCH.h"

PROC_DECLARE(0x6ed0cde, internal_6ed0cde, public_6ed0cde);
extern "C" NAKED register_t __cdecl internal_6ed0cde()
{
    __asm
    {
        jmp dword ptr ds : [public_6ed1030]
        UNREACHABLE_TRAP(0x6ed0cde)
    }
}
