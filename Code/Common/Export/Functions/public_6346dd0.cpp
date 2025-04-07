#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346dd0);

PROC_DECLARE(0x6346dd0, internal_6346dd0, public_6346dd0);
extern "C" NAKED register_t __cdecl internal_6346dd0()
{
    __asm
    {
        push ecx
        fld dword ptr ds : [ecx+0x78]
        fadd dword ptr ds : [ecx+0x98]
        fld dword ptr ds : [ecx+0x7C]
        fadd dword ptr ds : [ecx+0x9C]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0x74]
        mov eax, dword ptr ss : [esp]
        fadd dword ptr ds : [ecx+0x94]
        mov dword ptr ds : [ecx+0x9C], eax
        xor eax, eax
        fstp dword ptr ds : [ecx+0x94]
        fstp dword ptr ds : [ecx+0x98]
        fld dword ptr ds : [ecx+0x88]
        fadd dword ptr ds : [ecx+0xA8]
        fld dword ptr ds : [ecx+0x8C]
        fadd dword ptr ds : [ecx+0xAC]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+0x84]
        mov edx, dword ptr ss : [esp]
        fadd dword ptr ds : [ecx+0xA4]
        mov dword ptr ds : [ecx+0xAC], edx
        fstp dword ptr ds : [ecx+0xA4]
        fstp dword ptr ds : [ecx+0xA8]
        mov dword ptr ds : [ecx+0x84], eax
        mov dword ptr ds : [ecx+0x88], eax
        mov dword ptr ds : [ecx+0x8C], eax
        mov dword ptr ds : [ecx+0x74], eax
        mov dword ptr ds : [ecx+0x78], eax
        mov dword ptr ds : [ecx+0x7C], eax
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6346dd0)
    }
}
