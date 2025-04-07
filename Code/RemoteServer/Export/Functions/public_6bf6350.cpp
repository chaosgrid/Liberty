#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf6350, internal_6bf6350, public_6bf6350);
extern "C" NAKED register_t __cdecl internal_6bf6350()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e128]
        mov dword ptr ds : [public_6c13dfc], eax
        ret 
        UNREACHABLE_TRAP(0x6bf6350)
    }
}
