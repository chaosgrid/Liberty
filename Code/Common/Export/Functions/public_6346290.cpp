#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346290);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);

PROC_DECLARE(0x6346290, internal_6346290, public_6346290);
extern "C" NAKED register_t __cdecl internal_6346290()
{
    __asm
    {
        sub esp, 0x20
        push esi
        mov esi, ecx
        lea eax, ss:[esp+4]
        push eax
        lea ecx, ds:[esi+0x94]
        push ecx
        lea ecx, ds:[esi+0xF4]
        call public_6348580
        mov eax, dword ptr ss : [esp+0x28]
        fld dword ptr ds : [eax]
        fsub dword ptr ds : [esi+0x124]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ds : [esi+0x128]
        fld dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x2C]
        fsub dword ptr ds : [esi+0x12C]
        fld st(0)
        fmul dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(3)
        fsubp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(3)
        fxch 
        fmul dword ptr ss : [esp+4]
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(2)
        fsubp 
        fstp st(1)
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [esi+0xA8]
        fxch 
        fadd dword ptr ds : [esi+0xAC]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+0xA4]
        mov dword ptr ds : [eax+8], edx
        pop esi
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6346290)
    }
}
