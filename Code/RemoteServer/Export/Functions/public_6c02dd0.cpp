#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c02dd0, internal_6c02dd0, public_6c02dd0);
extern "C" NAKED register_t __cdecl internal_6c02dd0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e4b4]
        mov dword ptr ds : [public_6c14174], eax
        ret 
        UNREACHABLE_TRAP(0x6c02dd0)
    }
}
