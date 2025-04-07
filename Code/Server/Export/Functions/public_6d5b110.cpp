#include "Server-PCH.h"

PROC_DECLARE(0x6d5b110, internal_6d5b110, public_6d5b110);
extern "C" NAKED register_t __cdecl internal_6d5b110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d6b9b0]
        mov dword ptr ds : [public_6d90440], eax
        ret 
        UNREACHABLE_TRAP(0x6d5b110)
    }
}
