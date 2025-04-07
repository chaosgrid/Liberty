#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b69ec4, internal_6b69ec4, public_6b69ec4);
extern "C" NAKED register_t __cdecl internal_6b69ec4()
{
    __asm
    {
        jmp dword ptr ds : [public_6b6b22c]
        UNREACHABLE_TRAP(0x6b69ec4)
    }
}
