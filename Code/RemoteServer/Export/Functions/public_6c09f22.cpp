#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09f22, internal_6c09f22, public_6c09f22);
extern "C" NAKED register_t __cdecl internal_6c09f22()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b138]
        UNREACHABLE_TRAP(0x6c09f22)
    }
}
