#include "Server-PCH.h"

PROC_DECLARE(0x6cffca0, internal_6cffca0, public_6cffca0);
extern "C" NAKED register_t __cdecl internal_6cffca0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6d67008]
        mov dword ptr ds : [public_6d8d920], eax
        ret 
        UNREACHABLE_TRAP(0x6cffca0)
    }
}
