#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b56290, internal_6b56290, public_6b56290);
extern "C" NAKED register_t __cdecl internal_6b56290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e4fc]
        mov dword ptr ds : [public_6b740bc], eax
        ret 
        UNREACHABLE_TRAP(0x6b56290)
    }
}
