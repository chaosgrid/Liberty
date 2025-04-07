#include "FLServer-PCH.h"

PROC_DECLARE(0x4187aa, internal_4187aa, public_4187aa);
extern "C" NAKED register_t __cdecl internal_4187aa()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba30]
        UNREACHABLE_TRAP(0x4187aa)
    }
}
