#include "FLServer-PCH.h"

PROC_DECLARE(0x402810, internal_402810, public_402810);
extern "C" NAKED register_t __cdecl internal_402810()
{
    __asm
    {
        mov eax, dword ptr ds : [public_41c198]
        mov dword ptr ds : [public_425f78], eax
        ret 
        UNREACHABLE_TRAP(0x402810)
    }
}
