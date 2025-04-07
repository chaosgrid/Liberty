#include "FLServer-PCH.h"

PROC_DECLARE(0x418810, internal_418810, public_418810);
extern "C" NAKED register_t __cdecl internal_418810()
{
    __asm
    {
        jmp dword ptr ds : [public_41ba80]
        UNREACHABLE_TRAP(0x418810)
    }
}
