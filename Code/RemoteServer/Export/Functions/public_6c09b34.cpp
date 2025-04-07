#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09b34, internal_6c09b34, public_6c09b34);
extern "C" NAKED register_t __cdecl internal_6c09b34()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b194]
        UNREACHABLE_TRAP(0x6c09b34)
    }
}
