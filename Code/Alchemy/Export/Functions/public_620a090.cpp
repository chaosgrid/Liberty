#include "Alchemy-PCH.h"

PROC_DECLARE(0x620a090, internal_620a090, public_620a090);
extern "C" NAKED register_t __cdecl internal_620a090()
{
    __asm
    {
        mov eax, 0x64
        ret 4
        UNREACHABLE_TRAP(0x620a090)
    }
}
