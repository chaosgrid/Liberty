#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b643e0, internal_6b643e0, public_6b643e0);
extern "C" NAKED register_t __cdecl internal_6b643e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e998]
        mov dword ptr ds : [public_6b744ec], eax
        ret 
        UNREACHABLE_TRAP(0x6b643e0)
    }
}
