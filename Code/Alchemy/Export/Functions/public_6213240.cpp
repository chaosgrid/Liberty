#include "Alchemy-PCH.h"

PROC_DECLARE(0x6213240, internal_6213240, public_6213240);
extern "C" NAKED register_t __cdecl internal_6213240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax+0x54]
        inc ecx
        mov dword ptr ds : [eax+0x54], ecx
        mov eax, ecx
        ret 4
        UNREACHABLE_TRAP(0x6213240)
    }
}
