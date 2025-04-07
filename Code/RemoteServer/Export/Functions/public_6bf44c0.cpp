#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf44c0, internal_6bf44c0, public_6bf44c0);
extern "C" NAKED register_t __cdecl internal_6bf44c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e05c]
        mov dword ptr ds : [public_6c13d4c], eax
        ret 
        UNREACHABLE_TRAP(0x6bf44c0)
    }
}
