#include "Content-PCH.h"

PROC_DECLARE(0x6f84280, internal_6f84280, public_6f84280);
extern "C" NAKED register_t __cdecl internal_6f84280()
{
    __asm
    {
        fld dword ptr ds : [public_6fbc2c8]
        fadd dword ptr ds : [public_6fbc2b4]
        fstp dword ptr ds : [public_6fd3bc0]
        ret 
        UNREACHABLE_TRAP(0x6f84280)
    }
}
