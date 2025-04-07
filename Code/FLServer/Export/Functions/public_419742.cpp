#include "FLServer-PCH.h"

PROC_DECLARE(0x419742, internal_419742, public_419742);
extern "C" NAKED register_t __cdecl internal_419742()
{
    __asm
    {
        jmp dword ptr ds : [public_41b14c]
        UNREACHABLE_TRAP(0x419742)
    }
}
