#include "FLServer-PCH.h"

PROC_DECLARE(0x41896c, internal_41896c, public_41896c);
extern "C" NAKED register_t __cdecl internal_41896c()
{
    __asm
    {
        jmp dword ptr ds : [public_41bc20]
        UNREACHABLE_TRAP(0x41896c)
    }
}
