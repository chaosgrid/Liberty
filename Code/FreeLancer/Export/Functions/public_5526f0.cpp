#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_411d60);
CLANG_FORWARD_PROC_SYMBOL(public_421ca0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_423b30);
CLANG_FORWARD_PROC_SYMBOL(public_423b60);
CLANG_FORWARD_PROC_SYMBOL(public_5526f0);

PROC_DECLARE(0x5526f0, internal_5526f0, public_5526f0);
extern "C" NAKED register_t __cdecl internal_5526f0()
{
    __asm
    {
        sub esp, 0x30
        mov eax, dword ptr ss : [esp+0x38]
        push esi
        mov esi, dword ptr ss : [esp+0x38]
        push edi
        push esi
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        call public_423b60
        push esi
        lea edi, ds:[esi+0xC]
        lea edx, ss:[esp+0x24]
        push edi
        push edx
        call public_423b60
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x30]
        push edi
        fld dword ptr ss : [esp+0x38]
        lea eax, ss:[esp+0x48]
        fmul dword ptr ss : [esp+0x40]
        push esi
        push eax
        fsubp 
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x38]
        fsubp 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x44]
        fsubp 
        fstp dword ptr ss : [esp+0x34]
        call public_423b30
        push 0x3F000000
        lea ecx, ss:[esp+0x54]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        call public_411d60
        push esi
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        call public_423b60
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x60]
        faddp 
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x5C]
        faddp 
        fsqrt 
        fld dword ptr ss : [esp+0x4C]
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+0x44]
        faddp 
        fsqrt 
        fdivp 
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        lea edx, ss:[esp+0x50]
        fstp dword ptr ss : [esp+0x4C]
        push edx
        lea eax, ss:[esp+0x6C]
        fstp st(0)
        push esi
        push eax
        call public_423b60
        fld dword ptr ss : [esp+0x7C]
        fmul dword ptr ds : [public_5db09c]
        add esp, 0x48
        sub esp, 0xC
        lea ecx, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ds : [public_5db09c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ds : [public_5db09c]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x10]
        sub esp, 0xC
        fmul dword ptr ds : [public_5db09c]
        lea ecx, ss:[esp+0x14]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5db09c]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5db09c]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+8]
        push ecx
        push edx
        call public_421ca0
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        push ecx
        fld dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0x38]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+0xC]
        mov edx, dword ptr ds : [eax+0x10]
        push ecx
        push edx
        call public_421ca0
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x30]
        add esp, 8
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
        call public_421cc0
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+0x14]
        mov edx, dword ptr ds : [eax+0x10]
        push ecx
        push edx
        call public_421ca0
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x3C]
        add esp, 8
        lea ecx, ss:[esp+0x38]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x2C]
        push eax
        push ecx
        push edx
        call public_421cc0
        mov esi, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+8]
        push eax
        push ecx
        call public_421ca0
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x40]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x48]
        push edx
        push eax
        push ecx
        call public_421cc0
        add esp, 0x20
        pop edi
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x5526f0)
    }
}
