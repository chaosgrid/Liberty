#include "Common-PCH.h"

PROC_DECLARE(0x6299290, internal_6299290, public_6299290);
extern "C" NAKED register_t __cdecl internal_6299290()
{
    __asm
    {
        mov eax, dword ptr ds : [public_639d2a4]
        mov dword ptr ds : [public_63fc18c], eax
        ret 
        UNREACHABLE_TRAP(0x6299290)
    }
}
