#include "EngBase-PCH.h"

PROC_DECLARE(0x6628260, internal_6628260, public_6628260);
extern "C" NAKED register_t __cdecl internal_6628260()
{
    __asm
    {
        jmp dword ptr ds : [public_6629038]
        UNREACHABLE_TRAP(0x6628260)
    }
}
