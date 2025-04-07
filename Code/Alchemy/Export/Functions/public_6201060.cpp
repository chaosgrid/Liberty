#include "Alchemy-PCH.h"

PROC_DECLARE(0x6201060, internal_6201060, public_6201060);
extern "C" NAKED register_t __cdecl internal_6201060()
{
    __asm
    {
        mov dword ptr ds : [public_62578a0], 0x3F800000
        mov dword ptr ds : [public_6257890], 0x3F800000
        mov dword ptr ds : [public_6257880], 0x3F800000
        mov dword ptr ds : [public_625789c], 0
        mov dword ptr ds : [public_6257898], 0
        mov dword ptr ds : [public_6257894], 0
        mov dword ptr ds : [public_625788c], 0
        mov dword ptr ds : [public_6257888], 0
        mov dword ptr ds : [public_6257884], 0
        mov dword ptr ds : [public_62578ac], 0
        mov dword ptr ds : [public_62578a8], 0
        mov dword ptr ds : [public_62578a4], 0
        ret 
        UNREACHABLE_TRAP(0x6201060)
    }
}
