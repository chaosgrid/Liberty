#include "FLServer-PCH.h"

PROC_DECLARE(0x418c06, internal_418c06, public_418c06);
extern "C" NAKED register_t __cdecl internal_418c06()
{
    __asm
    {
        jmp dword ptr ds : [public_41b4a8]
        UNREACHABLE_TRAP(0x418c06)
    }
}
