#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6297b20);

PROC_DECLARE(0x6298470, internal_6298470, public_6298470);
extern "C" NAKED register_t __cdecl internal_6298470()
{
    __asm
    {
        sub esp, 0x18
        push esi
        lea eax, ss:[esp+0x10]
        push eax
        mov esi, ecx
        call public_6297b20
        mov ecx, dword ptr ss : [esp+0x20]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+4]
        mov edx, dword ptr ss : [esp+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [ecx+8]
        lea ecx, ds:[esi+0x25C]
        fsub dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0x268], 0
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x6298470)
    }
}
