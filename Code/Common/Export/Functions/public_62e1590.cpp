#include "Common-PCH.h"

PROC_DECLARE(0x62e1590, internal_62e1590, public_62e1590);
extern "C" NAKED register_t __cdecl internal_62e1590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        sub esi, eax
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ss : [esp+0x14]
        inc esi
        sub eax, edx
        inc eax
        mov dword ptr ds : [ecx+8], esi
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ds : [ecx+0xC], eax
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x62e1590)
    }
}
