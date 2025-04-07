#include "Server-PCH.h"

PROC_DECLARE(0x6d5fed6, internal_6d5fed6, public_6d5fed6);
extern "C" NAKED register_t __cdecl internal_6d5fed6()
{
    __asm
    {
        jmp dword ptr ds : [public_6d64170]
        UNREACHABLE_TRAP(0x6d5fed6)
    }
}
