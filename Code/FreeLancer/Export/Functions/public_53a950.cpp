#include "Freelancer-PCH.h"

PROC_DECLARE(0x53a950, internal_53a950, public_53a950);
extern "C" NAKED register_t __cdecl internal_53a950()
{
    __asm
    {
        mov eax, 0xFFFFFFFD
        ret 4
        UNREACHABLE_TRAP(0x53a950)
    }
}
