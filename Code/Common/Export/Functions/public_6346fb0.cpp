#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346e70);
CLANG_FORWARD_PROC_SYMBOL(public_6346fb0);

PROC_DECLARE(0x6346fb0, internal_6346fb0, public_6346fb0);
extern "C" NAKED register_t __cdecl internal_6346fb0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [ecx+0x60]
        and eax, 0xFFFFFF08
        or eax, 8
        mov dword ptr ds : [ecx+0x60], eax
        xor eax, eax
        mov dword ptr ds : [ecx+0xA4], eax
        mov dword ptr ds : [ecx+0xA8], eax
        mov dword ptr ds : [ecx+0xAC], eax
        mov dword ptr ds : [ecx+0x94], eax
        mov dword ptr ds : [ecx+0x98], eax
        mov dword ptr ds : [ecx+0x9C], eax
        mov dword ptr ds : [ecx+0x84], eax
        mov dword ptr ds : [ecx+0x88], eax
        mov dword ptr ds : [ecx+0x8C], eax
        mov dword ptr ds : [ecx+0x74], eax
        mov dword ptr ds : [ecx+0x78], eax
        mov dword ptr ds : [ecx+0x7C], eax
        mov dword ptr ds : [ecx+0xC4], eax
        mov dword ptr ds : [ecx+0xC8], eax
        mov dword ptr ds : [ecx+0xCC], eax
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ds : [eax+0xAC]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [eax+0xB0]
        lea edx, ss:[esp]
        fstp dword ptr ss : [esp+4]
        push edx
        call public_6346e70
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6346fb0)
    }
}
