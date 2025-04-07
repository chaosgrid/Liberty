#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09a56, internal_6c09a56, public_6c09a56);
extern "C" NAKED register_t __cdecl internal_6c09a56()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b0ec]
        UNREACHABLE_TRAP(0x6c09a56)
    }
}
