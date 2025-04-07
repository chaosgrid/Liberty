#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09d82, internal_6c09d82, public_6c09d82);
extern "C" NAKED register_t __cdecl internal_6c09d82()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1d4]
        UNREACHABLE_TRAP(0x6c09d82)
    }
}
