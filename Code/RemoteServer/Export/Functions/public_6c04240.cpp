#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c04240, internal_6c04240, public_6c04240);
extern "C" NAKED register_t __cdecl internal_6c04240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e560]
        mov dword ptr ds : [public_6c141ec], eax
        ret 
        UNREACHABLE_TRAP(0x6c04240)
    }
}
