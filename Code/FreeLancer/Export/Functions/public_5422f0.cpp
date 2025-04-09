#include "Freelancer-PCH.h"

PROC_DECLARE(0x5422f0, internal_5422f0, public_5422f0);
extern "C" NAKED register_t __cdecl internal_5422f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df8bc]
        mov dword ptr ds : [public_678af0], eax
        ret 
        UNREACHABLE_TRAP(0x5422f0)
    }
}
