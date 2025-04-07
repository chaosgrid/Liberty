#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09f28, internal_6c09f28, public_6c09f28);
extern "C" NAKED register_t __cdecl internal_6c09f28()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b13c]
        UNREACHABLE_TRAP(0x6c09f28)
    }
}
