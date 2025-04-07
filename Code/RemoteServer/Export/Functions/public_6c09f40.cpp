#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09f40, internal_6c09f40, public_6c09f40);
extern "C" NAKED register_t __cdecl internal_6c09f40()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b22c]
        UNREACHABLE_TRAP(0x6c09f40)
    }
}
