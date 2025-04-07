#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61e70, internal_6b61e70, public_6b61e70);
extern "C" NAKED register_t __cdecl internal_6b61e70()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e8c8]
        mov dword ptr ds : [public_6b74434], eax
        ret 
        UNREACHABLE_TRAP(0x6b61e70)
    }
}
