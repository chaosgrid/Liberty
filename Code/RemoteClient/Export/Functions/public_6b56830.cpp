#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b56830, internal_6b56830, public_6b56830);
extern "C" NAKED register_t __cdecl internal_6b56830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e514]
        mov dword ptr ds : [public_6b740d4], eax
        ret 
        UNREACHABLE_TRAP(0x6b56830)
    }
}
