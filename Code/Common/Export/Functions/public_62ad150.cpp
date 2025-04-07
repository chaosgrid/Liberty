#include "Common-PCH.h"

PROC_DECLARE(0x62ad150, internal_62ad150, public_62ad150);
extern "C" NAKED register_t __cdecl internal_62ad150()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 0xF8
        push esi
        mov esi, dword ptr ds : [ecx]
        mov edx, eax
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ad150)
    }
}
