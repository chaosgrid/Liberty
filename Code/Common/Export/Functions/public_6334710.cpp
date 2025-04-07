#include "Common-PCH.h"

PROC_DECLARE(0x6334710, internal_6334710, public_6334710);
extern "C" NAKED register_t __cdecl internal_6334710()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+ecx*4]
        ret 4
        UNREACHABLE_TRAP(0x6334710)
    }
}
