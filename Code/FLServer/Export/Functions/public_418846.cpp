#include "FLServer-PCH.h"

PROC_DECLARE(0x418846, internal_418846, public_418846);
extern "C" NAKED register_t __cdecl internal_418846()
{
    __asm
    {
        jmp dword ptr ds : [public_41b9f4]
        UNREACHABLE_TRAP(0x418846)
    }
}
