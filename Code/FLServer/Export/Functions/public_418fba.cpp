#include "FLServer-PCH.h"

PROC_DECLARE(0x418fba, internal_418fba, public_418fba);
extern "C" NAKED register_t __cdecl internal_418fba()
{
    __asm
    {
        jmp dword ptr ds : [public_41b72c]
        UNREACHABLE_TRAP(0x418fba)
    }
}
