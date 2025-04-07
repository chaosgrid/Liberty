#include "FLServer-PCH.h"

PROC_DECLARE(0x418696, internal_418696, public_418696);
extern "C" NAKED register_t __cdecl internal_418696()
{
    __asm
    {
        jmp dword ptr ds : [public_41b020]
        UNREACHABLE_TRAP(0x418696)
    }
}
