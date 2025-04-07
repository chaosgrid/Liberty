#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b643c0, internal_6b643c0, public_6b643c0);
extern "C" NAKED register_t __cdecl internal_6b643c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e994]
        mov dword ptr ds : [public_6b744f0], eax
        ret 
        UNREACHABLE_TRAP(0x6b643c0)
    }
}
