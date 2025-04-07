#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c08190, internal_6c08190, public_6c08190);
extern "C" NAKED register_t __cdecl internal_6c08190()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e630]
        mov dword ptr ds : [public_6c142ec], eax
        ret 
        UNREACHABLE_TRAP(0x6c08190)
    }
}
