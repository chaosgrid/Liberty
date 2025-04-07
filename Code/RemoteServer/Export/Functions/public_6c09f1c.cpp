#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09f1c, internal_6c09f1c, public_6c09f1c);
extern "C" NAKED register_t __cdecl internal_6c09f1c()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b14c]
        UNREACHABLE_TRAP(0x6c09f1c)
    }
}
