#include "DebugLib-PCH.h"

PROC_DECLARE(0x65dd010, internal_65dd010, public_65dd010);
extern "C" NAKED register_t __cdecl internal_65dd010()
{
    __asm
    {
        jmp strcpy
    }
}
