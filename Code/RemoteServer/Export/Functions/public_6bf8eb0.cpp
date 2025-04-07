#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8eb0, internal_6bf8eb0, public_6bf8eb0);
extern "C" NAKED register_t __cdecl internal_6bf8eb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e244]
        mov dword ptr ds : [public_6c13edc], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8eb0)
    }
}
