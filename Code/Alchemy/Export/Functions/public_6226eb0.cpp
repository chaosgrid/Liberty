#include "Alchemy-PCH.h"

PROC_DECLARE(0x6226eb0, internal_6226eb0, public_6226eb0);
extern "C" NAKED register_t __cdecl internal_6226eb0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x8C]
        mov eax, dword ptr ds : [eax+0x14]
        ret 
        UNREACHABLE_TRAP(0x6226eb0)
    }
}
