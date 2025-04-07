#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a80, internal_6c09a80, public_6c09a80);
extern "C" NAKED register_t __cdecl internal_6c09a80()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b018]
        UNREACHABLE_TRAP(0x6c09a80)
    }
}
