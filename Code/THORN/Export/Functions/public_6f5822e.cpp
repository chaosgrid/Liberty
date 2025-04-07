#include "THORN-PCH.h"

PROC_DECLARE(0x6f5822e, internal_6f5822e, public_6f5822e);
extern "C" NAKED register_t __cdecl internal_6f5822e()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0a4]
        UNREACHABLE_TRAP(0x6f5822e)
    }
}
