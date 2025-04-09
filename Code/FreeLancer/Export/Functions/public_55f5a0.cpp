#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0880);

PROC_DECLARE(0x55f5a0, internal_55f5a0, public_55f5a0);
extern "C" NAKED register_t __cdecl internal_55f5a0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0xA4]
        fld dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [ecx+8]
        lea edx, ss:[esp+4]
        fld dword ptr ds : [eax+4]
        push edx
        fadd dword ptr ds : [ecx+4]
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [ecx]
        mov ecx, esi
        fstp dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        fstp dword ptr ss : [esp+0x10]
        call public_5a0880
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x55f5a0)
    }
}
