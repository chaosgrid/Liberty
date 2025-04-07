#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf6b40, internal_6bf6b40, public_6bf6b40);
extern "C" NAKED register_t __cdecl internal_6bf6b40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e15c]
        mov dword ptr ds : [public_6c13e24], eax
        ret 
        UNREACHABLE_TRAP(0x6bf6b40)
    }
}
