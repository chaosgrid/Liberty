#include "Alchemy-PCH.h"

PROC_DECLARE(0x6204390, internal_6204390, public_6204390);
extern "C" NAKED register_t __cdecl internal_6204390()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x44]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+8]
        UNREACHABLE_TRAP(0x6204390)
    }
}
