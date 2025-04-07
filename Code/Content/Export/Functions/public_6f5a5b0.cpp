#include "Content-PCH.h"

PROC_DECLARE(0x6f5a5b0, internal_6f5a5b0, public_6f5a5b0);
extern "C" NAKED register_t __cdecl internal_6f5a5b0()
{
    __asm
    {
        fld dword ptr ds : [public_6fbbb34]
        fadd qword ptr ds : [public_6fb7a88]
        fstp dword ptr ds : [public_6fd0e4c]
        ret 
        UNREACHABLE_TRAP(0x6f5a5b0)
    }
}
