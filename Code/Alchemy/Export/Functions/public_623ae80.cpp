#include "Alchemy-PCH.h"

PROC_DECLARE(0x623ae80, internal_623ae80, public_623ae80);
extern "C" NAKED register_t __cdecl internal_623ae80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x88]
        mov dword ptr ss : [esp+4], eax
        mov ecx, dword ptr ds : [eax]
        jmp dword ptr ds : [ecx+0x14]
        UNREACHABLE_TRAP(0x623ae80)
    }
}
