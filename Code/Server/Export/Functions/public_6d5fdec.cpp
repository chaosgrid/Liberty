#include "Server-PCH.h"

PROC_DECLARE(0x6d5fdec, internal_6d5fdec, public_6d5fdec);
extern "C" NAKED register_t __cdecl internal_6d5fdec()
{
    __asm
    {
        jmp dword ptr ds : [public_6d640d4]
        UNREACHABLE_TRAP(0x6d5fdec)
    }
}
