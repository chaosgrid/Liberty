#include "Content-PCH.h"

PROC_DECLARE(0x6ef8f50, internal_6ef8f50, public_6ef8f50);
extern "C" NAKED register_t __cdecl internal_6ef8f50()
{
    __asm
    {
        fld dword ptr ds : [public_6fb7a60]
        fadd st(0), st
        fadd dword ptr ds : [public_6fb7a68]
        fstp dword ptr ds : [public_6fcf2fc]
        ret 
        UNREACHABLE_TRAP(0x6ef8f50)
    }
}
