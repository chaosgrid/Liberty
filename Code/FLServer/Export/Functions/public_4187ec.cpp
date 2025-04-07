#include "FLServer-PCH.h"

PROC_DECLARE(0x4187ec, internal_4187ec, public_4187ec);
extern "C" NAKED register_t __cdecl internal_4187ec()
{
    __asm
    {
        jmp dword ptr ds : [public_41bba0]
        UNREACHABLE_TRAP(0x4187ec)
    }
}
