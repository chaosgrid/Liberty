#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09d32, internal_6c09d32, public_6c09d32);
extern "C" NAKED register_t __cdecl internal_6c09d32()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b214]
        UNREACHABLE_TRAP(0x6c09d32)
    }
}
