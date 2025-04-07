#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44d2c0);

PROC_DECLARE(0x44d2c0, internal_44d2c0, public_44d2c0);
extern "C" NAKED register_t __cdecl internal_44d2c0()
{
    __asm
    {
        mov eax, ecx
        xor ecx, ecx
        mov dword ptr ds : [eax], offset public_5cc084
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 
        UNREACHABLE_TRAP(0x44d2c0)
    }
}
