#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c09af8, internal_6c09af8, public_6c09af8);
extern "C" NAKED register_t __cdecl internal_6c09af8()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b164]
        UNREACHABLE_TRAP(0x6c09af8)
    }
}
