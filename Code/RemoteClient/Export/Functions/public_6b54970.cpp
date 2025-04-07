#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b54970, internal_6b54970, public_6b54970);
extern "C" NAKED register_t __cdecl internal_6b54970()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e440]
        mov dword ptr ds : [public_6b74030], eax
        ret 
        UNREACHABLE_TRAP(0x6b54970)
    }
}
