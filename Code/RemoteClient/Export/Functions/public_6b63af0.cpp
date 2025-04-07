#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b63af0, internal_6b63af0, public_6b63af0);
extern "C" NAKED register_t __cdecl internal_6b63af0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e958]
        mov dword ptr ds : [public_6b744ac], eax
        ret 
        UNREACHABLE_TRAP(0x6b63af0)
    }
}
