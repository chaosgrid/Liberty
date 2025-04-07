#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b55e50, internal_6b55e50, public_6b55e50);
extern "C" NAKED register_t __cdecl internal_6b55e50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e4a4]
        mov dword ptr ds : [public_6b740a0], eax
        ret 
        UNREACHABLE_TRAP(0x6b55e50)
    }
}
