#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b62cc0, internal_6b62cc0, public_6b62cc0);
extern "C" NAKED register_t __cdecl internal_6b62cc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e918]
        mov dword ptr ds : [public_6b74480], eax
        ret 
        UNREACHABLE_TRAP(0x6b62cc0)
    }
}
