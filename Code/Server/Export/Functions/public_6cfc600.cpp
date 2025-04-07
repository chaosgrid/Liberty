#include "Server-PCH.h"

PROC_DECLARE(0x6cfc600, internal_6cfc600, public_6cfc600);
extern "C" NAKED register_t __cdecl internal_6cfc600()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d66b98]
        mov dword ptr ds : [public_6d8d898], eax
        ret 
        UNREACHABLE_TRAP(0x6cfc600)
    }
}
