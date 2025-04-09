#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_51dd20);
CLANG_FORWARD_PROC_SYMBOL(public_51ddd0);

PROC_DECLARE(0x51dd20, internal_51dd20, public_51dd20);
extern "C" NAKED register_t __cdecl internal_51dd20()
{
    __asm
    {
        sub esp, 0x18
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi]
        push ecx
        push edx
        lea ecx, ss:[esp+0xC]
        push ecx
        push esi
        call dword ptr ds : [eax+0x38]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0xC]
        push esi
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5dc130]
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
        call dword ptr ds : [edx+0xC]
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x10]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+4]
        fadd dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x34]
        push eax
        push ecx
        push edx
        fstp dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x24]
        push esi
        fstp dword ptr ss : [esp+0x2C]
        call public_51ddd0
        add esp, 0x14
        mov eax, esi
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x51dd20)
    }
}
