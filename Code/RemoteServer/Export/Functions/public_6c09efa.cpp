#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09efa, internal_6c09efa, public_6c09efa);
extern "C" NAKED register_t __cdecl internal_6c09efa()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b1f4]
        UNREACHABLE_TRAP(0x6c09efa)
    }
}
