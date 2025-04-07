#include "EngBase-PCH.h"

PROC_DECLARE(0x6612170, internal_6612170, public_6612170);
extern "C" NAKED register_t __cdecl internal_6612170()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        xor ecx, ecx
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax+8], ecx
        ret 8
        UNREACHABLE_TRAP(0x6612170)
    }
}
