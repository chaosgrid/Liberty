#include "Freelancer-PCH.h"

PROC_DECLARE(0x530610, internal_530610, public_530610);
extern "C" NAKED register_t __cdecl internal_530610()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], 0x80000000
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x530610)
    }
}
