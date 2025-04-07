#include "Server-PCH.h"

PROC_DECLARE(0x6ced7a0, internal_6ced7a0, public_6ced7a0);
extern "C" NAKED register_t __cdecl internal_6ced7a0()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [public_6d6433c]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        call dword ptr ds : [public_6d64338]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0xC]
        lea eax, ss:[esp+0x1C]
        fmul dword ptr ss : [esp+0xC]
        push eax
        mov ecx, esi
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_6d65750]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [edx+0xC]
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x6ced7a0)
    }
}
