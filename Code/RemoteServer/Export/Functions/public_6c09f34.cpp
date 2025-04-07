#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09f34, internal_6c09f34, public_6c09f34);
extern "C" NAKED register_t __cdecl internal_6c09f34()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b144]
        UNREACHABLE_TRAP(0x6c09f34)
    }
}
