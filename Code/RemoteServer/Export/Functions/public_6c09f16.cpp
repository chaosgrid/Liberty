#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09f16, internal_6c09f16, public_6c09f16);
extern "C" NAKED register_t __cdecl internal_6c09f16()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b130]
        UNREACHABLE_TRAP(0x6c09f16)
    }
}
