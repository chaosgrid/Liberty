#include "RemoteServer-PCH.h"

PROC_DECLARE(0x6bf4740, internal_6bf4740, public_6bf4740);
extern "C" NAKED register_t __cdecl internal_6bf4740()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c0e070]
        mov dword ptr ds : [public_6c13d54], eax
        ret 
        UNREACHABLE_TRAP(0x6bf4740)
    }
}
