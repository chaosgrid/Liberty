#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b67010, internal_6b67010, public_6b67010);
extern "C" NAKED register_t __cdecl internal_6b67010()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6ea48]
        mov dword ptr ds : [public_6b7458c], eax
        ret 
        UNREACHABLE_TRAP(0x6b67010)
    }
}
