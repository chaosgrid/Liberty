#include "FLServer-PCH.h"

PROC_DECLARE(0x418d98, internal_418d98, public_418d98);
extern "C" NAKED register_t __cdecl internal_418d98()
{
    __asm
    {
        jmp dword ptr ds : [public_41b5b8]
        UNREACHABLE_TRAP(0x418d98)
    }
}
