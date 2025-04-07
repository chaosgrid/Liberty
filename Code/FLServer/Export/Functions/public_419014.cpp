#include "FLServer-PCH.h"

PROC_DECLARE(0x419014, internal_419014, public_419014);
extern "C" NAKED register_t __cdecl internal_419014()
{
    __asm
    {
        jmp dword ptr ds : [public_41b768]
        UNREACHABLE_TRAP(0x419014)
    }
}
