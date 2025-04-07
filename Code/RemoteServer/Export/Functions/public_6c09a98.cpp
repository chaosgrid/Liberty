#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a98, internal_6c09a98, public_6c09a98);
extern "C" NAKED register_t __cdecl internal_6c09a98()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b004]
        UNREACHABLE_TRAP(0x6c09a98)
    }
}
