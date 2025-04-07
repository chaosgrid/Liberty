#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09b04, internal_6c09b04, public_6c09b04);
extern "C" NAKED register_t __cdecl internal_6c09b04()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b16c]
        UNREACHABLE_TRAP(0x6c09b04)
    }
}
