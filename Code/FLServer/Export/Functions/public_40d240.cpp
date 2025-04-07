#include "FLServer-PCH.h"

PROC_DECLARE(0x40d240, internal_40d240, public_40d240);
extern "C" NAKED register_t __cdecl internal_40d240()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], 0
        jmp dword ptr ds : [eax]
        UNREACHABLE_TRAP(0x40d240)
    }
}
