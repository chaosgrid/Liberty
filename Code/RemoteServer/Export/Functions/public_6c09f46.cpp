#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09f46, internal_6c09f46, public_6c09f46);
extern "C" NAKED register_t __cdecl internal_6c09f46()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b230]
        UNREACHABLE_TRAP(0x6c09f46)
    }
}
