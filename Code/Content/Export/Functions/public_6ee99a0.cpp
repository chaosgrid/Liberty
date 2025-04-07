#include "Content-PCH.h"

PROC_DECLARE(0x6ee99a0, internal_6ee99a0, public_6ee99a0);
extern "C" NAKED register_t __cdecl internal_6ee99a0()
{
    __asm
    {
        mov eax, 5
        ret 
        UNREACHABLE_TRAP(0x6ee99a0)
    }
}
