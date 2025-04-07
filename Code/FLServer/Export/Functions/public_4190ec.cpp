#include "FLServer-PCH.h"

PROC_DECLARE(0x4190ec, internal_4190ec, public_4190ec);
extern "C" NAKED register_t __cdecl internal_4190ec()
{
    __asm
    {
        jmp dword ptr ds : [public_41b804]
        UNREACHABLE_TRAP(0x4190ec)
    }
}
