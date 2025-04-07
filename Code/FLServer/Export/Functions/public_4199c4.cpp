#include "FLServer-PCH.h"

PROC_DECLARE(0x4199c4, internal_4199c4, public_4199c4);
extern "C" NAKED register_t __cdecl internal_4199c4()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8ec]
        UNREACHABLE_TRAP(0x4199c4)
    }
}
