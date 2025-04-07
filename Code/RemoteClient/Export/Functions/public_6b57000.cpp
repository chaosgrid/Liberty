#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b57000, internal_6b57000, public_6b57000);
extern "C" NAKED register_t __cdecl internal_6b57000()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e53c]
        mov dword ptr ds : [public_6b740f4], eax
        ret 
        UNREACHABLE_TRAP(0x6b57000)
    }
}
