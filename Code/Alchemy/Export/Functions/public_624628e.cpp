#include "Alchemy-PCH.h"

PROC_DECLARE(0x624628e, internal_624628e, public_624628e);
extern "C" NAKED register_t __cdecl internal_624628e()
{
    __asm
    {
        jmp dword ptr ds : [public_624b068]
        UNREACHABLE_TRAP(0x624628e)
    }
}
