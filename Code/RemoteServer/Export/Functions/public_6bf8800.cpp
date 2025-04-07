#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8800, internal_6bf8800, public_6bf8800);
extern "C" NAKED register_t __cdecl internal_6bf8800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e214]
        mov dword ptr ds : [public_6c13eac], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8800)
    }
}
