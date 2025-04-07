#include "Alchemy-PCH.h"

PROC_DECLARE(0x6204380, internal_6204380, public_6204380);
extern "C" NAKED register_t __cdecl internal_6204380()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x44]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+4]
        UNREACHABLE_TRAP(0x6204380)
    }
}
