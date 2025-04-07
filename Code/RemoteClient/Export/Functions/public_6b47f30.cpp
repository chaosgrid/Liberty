#include "RemoteClient-PCH.h"

PROC_DECLARE(0x6b47f30, internal_6b47f30, public_6b47f30);
extern "C" NAKED register_t __cdecl internal_6b47f30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6b6c320]
        mov dword ptr ds : [public_6b73eec], eax
        ret 
        UNREACHABLE_TRAP(0x6b47f30)
    }
}
