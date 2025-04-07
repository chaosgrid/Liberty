#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69fd2, internal_6b69fd2, public_6b69fd2);
extern "C" NAKED register_t __cdecl internal_6b69fd2()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b078]
        UNREACHABLE_TRAP(0x6b69fd2)
    }
}
