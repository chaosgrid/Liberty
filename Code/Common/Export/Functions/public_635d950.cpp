#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628bed0);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_63484e0);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);

#define public_635da11 _public_635da11

PROC_DECLARE(0x635d950, internal_635d950, public_635d950);
extern "C" NAKED register_t __cdecl internal_635d950()
{
    __asm
    {
        sub esp, 0x60
        push esi
        push edi
        mov esi, ecx
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ds:[esi+0x18]
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        call public_63484e0
        mov edi, dword ptr ss : [esp+0x70]
        lea edx, ss:[esp+0x18]
        push edx
        lea eax, ds:[esi+0x28]
        push eax
        mov ecx, edi
        call public_63484e0
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ds:[esi+0x38]
        push edx
        mov ecx, edi
        call public_6348580
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ds:[esi+0x48]
        push ecx
        mov ecx, edi
        call public_6348580
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x28]
        lea edx, ss:[esp+0x58]
        push edx
        lea eax, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x20]
        push eax
        fsub dword ptr ss : [esp+0x34]
        lea ecx, ss:[esp+0x10]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x48]
        call public_628bed0
        lea ecx, ss:[esp+8]
        call public_6347e60
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x50]
        pop edi
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x48]
        faddp 
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ss : [esp+4]
        faddp 
        fadd dword ptr ds : [esi+0x14]
        pop esi
        fst dword ptr ss : [esp+0x64]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_635da11
        fstp st(0)
        fld dword ptr ss : [esp+0x64]
        public_635da11 : nop
        add esp, 0x60
        ret 8
        UNREACHABLE_TRAP(0x635d950)
    }
}

#undef public_635da11
