#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63510c0);
CLANG_FORWARD_PROC_SYMBOL(public_6351250);

PROC_DECLARE(0x6351250, internal_6351250, public_6351250);
extern "C" NAKED register_t __cdecl internal_6351250()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x14]
        push esi
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+8]
        call public_63510c0
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax+4]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [eax]
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        fsubp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ds : [eax+4]
        fsubp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+8]
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [eax]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax+0xC]
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], edx
        fsubp 
        fstp dword ptr ds : [esi]
        fstp dword ptr ds : [esi+4]
        pop esi
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6351250)
    }
}
