#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b616b0, internal_6b616b0, public_6b616b0);
extern "C" NAKED register_t __cdecl internal_6b616b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e84c]
        mov dword ptr ds : [public_6b743f0], eax
        ret 
        UNREACHABLE_TRAP(0x6b616b0)
    }
}
