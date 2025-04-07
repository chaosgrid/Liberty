#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09972, internal_6c09972, public_6c09972);
extern "C" NAKED register_t __cdecl internal_6c09972()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b054]
        UNREACHABLE_TRAP(0x6c09972)
    }
}
