#include "FLServer-PCH.h"

PROC_DECLARE(0x418fd2, internal_418fd2, public_418fd2);
extern "C" NAKED register_t __cdecl internal_418fd2()
{
    __asm
    {
        jmp dword ptr ds : [public_41b73c]
        UNREACHABLE_TRAP(0x418fd2)
    }
}
