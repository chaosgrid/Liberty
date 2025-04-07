#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf8cf0, internal_6bf8cf0, public_6bf8cf0);
extern "C" NAKED register_t __cdecl internal_6bf8cf0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e238]
        mov dword ptr ds : [public_6c13ec4], eax
        ret 
        UNREACHABLE_TRAP(0x6bf8cf0)
    }
}
