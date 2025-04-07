#include "FLServer-PCH.h"

PROC_DECLARE(0x418cba, internal_418cba, public_418cba);
extern "C" NAKED register_t __cdecl internal_418cba()
{
    __asm
    {
        jmp dword ptr ds : [public_41b524]
        UNREACHABLE_TRAP(0x418cba)
    }
}
