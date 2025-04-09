#include "FreeLancer-PCH.h"

PROC_DECLARE(0x489a30, internal_489a30, public_489a30);
extern "C" NAKED register_t __cdecl internal_489a30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d244c]
        mov dword ptr ds : [public_671f64], eax
        ret 
        UNREACHABLE_TRAP(0x489a30)
    }
}
