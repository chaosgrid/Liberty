#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf87f0, internal_6bf87f0, public_6bf87f0);
extern "C" NAKED register_t __cdecl internal_6bf87f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e214]
        mov dword ptr ds : [public_6c13ea8], eax
        ret 
        UNREACHABLE_TRAP(0x6bf87f0)
    }
}
