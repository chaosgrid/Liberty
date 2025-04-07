#include "FLServer-PCH.h"

PROC_DECLARE(0x418efa, internal_418efa, public_418efa);
extern "C" NAKED register_t __cdecl internal_418efa()
{
    __asm
    {
        jmp dword ptr ds : [public_41b6a4]
        UNREACHABLE_TRAP(0x418efa)
    }
}
