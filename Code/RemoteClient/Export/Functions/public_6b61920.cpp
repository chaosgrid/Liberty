#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b61920, internal_6b61920, public_6b61920);
extern "C" NAKED register_t __cdecl internal_6b61920()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e85c]
        mov dword ptr ds : [public_6b74404], eax
        ret 
        UNREACHABLE_TRAP(0x6b61920)
    }
}
