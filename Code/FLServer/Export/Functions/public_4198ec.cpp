#include "FLServer-PCH.h"

PROC_DECLARE(0x4198ec, internal_4198ec, public_4198ec);
extern "C" NAKED register_t __cdecl internal_4198ec()
{
    __asm
    {
        jmp dword ptr ds : [public_41b844]
        UNREACHABLE_TRAP(0x4198ec)
    }
}
