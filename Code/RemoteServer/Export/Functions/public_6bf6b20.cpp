#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf6b20, internal_6bf6b20, public_6bf6b20);
extern "C" NAKED register_t __cdecl internal_6bf6b20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e158]
        mov dword ptr ds : [public_6c13e28], eax
        ret 
        UNREACHABLE_TRAP(0x6bf6b20)
    }
}
