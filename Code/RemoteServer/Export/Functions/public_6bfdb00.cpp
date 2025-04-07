#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bfdb00, internal_6bfdb00, public_6bfdb00);
extern "C" NAKED register_t __cdecl internal_6bfdb00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e378]
        mov dword ptr ds : [public_6c13fdc], eax
        ret 
        UNREACHABLE_TRAP(0x6bfdb00)
    }
}
