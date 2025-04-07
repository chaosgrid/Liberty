#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c0995a, internal_6c0995a, public_6c0995a);
extern "C" NAKED register_t __cdecl internal_6c0995a()
{
    __asm
    {
        jmp dword ptr ds : [public_6c0b044]
        UNREACHABLE_TRAP(0x6c0995a)
    }
}
