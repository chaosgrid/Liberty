#include "Alchemy-PCH.h"

PROC_DECLARE(0x6201000, internal_6201000, public_6201000);
extern "C" NAKED register_t __cdecl internal_6201000()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_62578e4], eax
        mov dword ptr ds : [public_62578e8], eax
        mov dword ptr ds : [public_62578ec], eax
        mov dword ptr ds : [public_62578f0], eax
        mov dword ptr ds : [public_62578f4], eax
        mov dword ptr ds : [public_62578f8], eax
        mov dword ptr ds : [public_62578fc], eax
        mov dword ptr ds : [public_6257900], eax
        mov dword ptr ds : [public_6257904], eax
        ret 
        UNREACHABLE_TRAP(0x6201000)
    }
}
