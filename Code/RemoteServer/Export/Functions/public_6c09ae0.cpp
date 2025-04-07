#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09ae0, internal_6c09ae0, public_6c09ae0);
extern "C" NAKED register_t __cdecl internal_6c09ae0()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b170]
        UNREACHABLE_TRAP(0x6c09ae0)
    }
}
