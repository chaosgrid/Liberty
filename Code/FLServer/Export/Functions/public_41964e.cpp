#include "FLServer-PCH.h"

PROC_DECLARE(0x41964e, internal_41964e, public_41964e);
extern "C" NAKED register_t __cdecl internal_41964e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b924]
        UNREACHABLE_TRAP(0x41964e)
    }
}
