#include "Common-PCH.h"

PROC_DECLARE(0x6283070, internal_6283070, public_6283070);
extern "C" NAKED register_t __cdecl internal_6283070()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639b97c]
        mov dword ptr ds : [public_63fc080], eax
        ret 
        UNREACHABLE_TRAP(0x6283070)
    }
}
