#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6c04700, internal_6c04700, public_6c04700);
extern "C" NAKED register_t __cdecl internal_6c04700()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e570]
        mov dword ptr ds : [public_6c141f4], eax
        ret 
        UNREACHABLE_TRAP(0x6c04700)
    }
}
