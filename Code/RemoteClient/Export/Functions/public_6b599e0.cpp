#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b599e0, internal_6b599e0, public_6b599e0);
extern "C" NAKED register_t __cdecl internal_6b599e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6e59c]
        mov dword ptr ds : [public_6b74174], eax
        ret 
        UNREACHABLE_TRAP(0x6b599e0)
    }
}
