#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289c90);
CLANG_FORWARD_PROC_SYMBOL(public_6289ef0);

PROC_DECLARE(0x6289ef0, internal_6289ef0, public_6289ef0);
extern "C" NAKED register_t __cdecl internal_6289ef0()
{
    __asm
    {
        sub esp, 0x44
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x50]
        fld dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x40], 0
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fst dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp]
        fmul dword ptr ss : [esp]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fsqrt 
        fld dword ptr ds : [public_639a1d0]
        fdiv st, st(1)
        fld dword ptr ss : [esp]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+8]
        fxch 
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+4]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x28], eax
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x30], edx
        mov edx, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push edx
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x3C], ecx
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        call public_6289c90
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x6289ef0)
    }
}
