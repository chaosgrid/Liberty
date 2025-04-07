#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e9f0, internal_620e9f0, public_620e9f0);
extern "C" NAKED register_t __cdecl internal_620e9f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x620e9f0)
    }
}
