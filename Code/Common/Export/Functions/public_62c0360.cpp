#include "Common-PCH.h"

PROC_DECLARE(0x62c0360, internal_62c0360, public_62c0360);
extern "C" NAKED register_t __cdecl internal_62c0360()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [ecx]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call dword ptr ds : [eax+0x68]
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62c0360)
    }
}
