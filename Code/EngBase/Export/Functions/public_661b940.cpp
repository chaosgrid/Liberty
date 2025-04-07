#include "EngBase-PCH.h"

PROC_DECLARE(0x661b940, internal_661b940, public_661b940);
extern "C" NAKED register_t __cdecl internal_661b940()
{
    __asm
    {
        mov eax, 4
        ret 
        UNREACHABLE_TRAP(0x661b940)
    }
}
