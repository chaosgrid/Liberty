#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b56820, internal_6b56820, public_6b56820);
extern "C" NAKED register_t __cdecl internal_6b56820()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e514]
        mov dword ptr ds : [public_6b740d0], eax
        ret 
        UNREACHABLE_TRAP(0x6b56820)
    }
}
